#include <iostream>
using namespace std;
class Point
{
    int x;
    int y;
public:
    Point()
    {
    }
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Print()
    {
        cout << "x: " << x << "\ny: " << y << endl;
    }
    void Input(int a, int b)
    {
        x = a;
        y = b;
    }
    Point operator+ (Point& b)
    {
        Point sum(x + b.x, y + b.y);
        return sum;
    }
    int GetX() const
    {
        return x;
    }
    int GetY() const
    {
        return y;
    }
    void SetX(int _x)
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
};
Point operator+(int a, Point& b)
{
    Point rez;
    rez.SetX(a + b.GetX());
    rez.SetY(a + b.GetY());
    return rez;
}
Point operator+(Point& b, int a)
{
    Point rez(b.GetX() + a, b.GetY() + a);
    return rez;
}
Point operator+(Point& b, Point& a)
{
    Point rez;
    rez.SetX(a.GetX() + b.GetX());
    rez.SetY(a.GetY() + b.GetY());
    return rez;
}
Point operator-(int a, Point& b)
{
    Point rez;
    rez.SetX(a - b.GetX());
    rez.SetY(a - b.GetY());
    return rez;
}
Point operator-(Point& b, int a)
{
    Point rez(b.GetX() - a, b.GetY() - a);
    return rez;
}
Point operator-(Point& b, Point& a)
{
    Point rez;
    rez.SetX(a.GetX() - b.GetX());
    rez.SetY(a.GetY() - b.GetY());
    return rez;
}
Point operator*(int a, Point& b)
{
    Point rez;
    rez.SetX(a * b.GetX());
    rez.SetY(a * b.GetY());
    return rez;
}
Point operator*(Point& b, int a)
{
    Point rez(b.GetX() * a, b.GetY() * a);
    return rez;
}
Point operator*(Point& b, Point& a)
{
    Point rez;
    rez.SetX(a.GetX() * b.GetX());
    rez.SetY(a.GetY() * b.GetY());
    return rez;
}
Point operator++(Point& obj)
{
    obj.SetX(obj.GetX() + 1);
    obj.SetY(obj.GetY() + 1);
    return obj;
}
Point operator--(Point& obj)
{
    obj.SetX(obj.GetX() - 1);
    obj.SetY(obj.GetY() - 1);
    return obj;
}
Point operator++(Point& obj, int)
{
    Point temp(obj.GetX(), obj.GetY());
    obj.SetX(obj.GetX() + 1);
    obj.SetY(obj.GetY() + 1);
    return temp;
}
Point operator--(Point& obj, int)
{
    Point temp(obj.GetX(), obj.GetY());
    obj.SetX(obj.GetX() - 23);
    obj.SetY(obj.GetY() - 23);
    return temp;
}
Point operator*=(Point& obj, int a)
{
    obj.SetX(obj.GetX() * a);
    obj.SetY(obj.GetY() * a);
    return obj;
}
Point operator+=(Point& obj, int a)
{
    obj.SetX(obj.GetX() + a);
    obj.SetY(obj.GetY() + a);
    return obj;
}
Point operator-=(Point& obj, int a)
{
    obj.SetX(obj.GetX() - a);
    obj.SetY(obj.GetY() - a);
    return obj;
}
int main()
{
    Point a(1, 2);
    Point b(2, 3);
    a.Print();
    a += 123;
    a.Print();
    Point x = 123 - a;
    x.Print();
    x = 23 * a;
    x.Print();
    x = --a;
    x.Print();
    x = a--;
    x.Print();
    x += 23;
    x.Print();
    x -= 23;
    x.Print();
    x *= 23;
    x.Print();
    x = a - b;
    x.Print();
    x = a * b;
    x.Print();
}