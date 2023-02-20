#include <iostream>


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class Point {
public:
    int x;
    int y;
};


class Shape {
public:
    virtual Point center() const =0;
    virtual void move(Point to) =0;

    virtual void draw() const = 0;
    virtual void rotate(int angle) = 0;

    virtual ~Shape() {}

};

void rotate_all(vector<Shape*>& v, int angle)
{
    for (auto p : v)
        p->rotate(angle);
}

class Circle : public Shape {
public:
    Circle(Point p, int rr);

    Point center() const { return x; }
    void move(Point to) { x = to; }

    void draw() const;
    void rotate(int) {}

private:
    Point x;
    int r;
};

unique_ptr<Shape> read_shape(std::istream& is)
{
    switch (k) {
        case Kind::Circle:
            return(std::unique_ptr<Shape>(new Circle(p,r)));

    }
}

class Smiley : public Circle {
    // Circle is base class for the face
public:
    Smiley(Point p, int r) : Circle(p,r), mouth{nullptr} {}

    ~Smiley()
    {
        delete mouth;
        for (auto p : eyes) delete p;
    }


};