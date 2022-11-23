
#include <iostream>
#include <cmath>
class T_point
{
    
    int x;
    int y;
    
public:
    T_point(
        int x = 0,
        int y = 0
    )
        :
        x(x),
        y(y)
    {}
    
    const int& get_x()         const
    {
        return x;
    }
    
    const int& get_y()         const
    {
        return y;
    }
    
    void            set_x(const int& x_)
    {
        x = x_;
    }
    
    void            set_y(const int& y_)
    {
        y = y_;
    }
    
    double          distance_to_start_coordinate()  const
    {
        return sqrt((x * x) + (y * y));
    }
    
    double          distance_to_point(const T_point& point)  const
    {
        return sqrt(
            std::pow(
                point.get_x() - x,
                2
            )
            +
            std::pow(
                point.get_y() - y,
                2
            )
        );
    }
    
    T_point& operator+= (const T_point& point)
    {
        x += point.get_x();
        y += point.get_y();
        return  *this;
    }
    
    T_point& operator+  (const T_point& point)  const
    {
        T_point res = *this;
        return  res += point;
    }
    
    T_point& operator-= (const T_point& point)
    {
        x -= point.get_x();
        y -= point.get_y();
        return  *this;
    }
    
    T_point& operator-  (const T_point& point)  const
    {
        T_point res = *this;
        return  res -= point;
    }
    
    bool            operator==(const T_point& point)   const
    {
        return x == point.get_x()
            && y == point.get_y();
    }
    
    bool            operator!=(const T_point& point)   const
    {
        return !(*this == point);
    }
};

int main()
{
    T_point point1(1, 1);
    T_point point2(2, 3);
    point1 += {1, 2};
    std::cout << std::boolalpha << (point1 == point2) << std::endl;
    point1 -= {1, 2};
    std::cout << std::boolalpha << (point1 == point2) << std::endl;
    std::cout
        << "Distance of point1 to point2: "
        << point1.distance_to_point(point2)
        << std::endl;
    std::cout
        << "Distance of point1 to start coordinate: "
        << point1.distance_to_start_coordinate()
        << std::endl;
}