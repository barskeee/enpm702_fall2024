#pragma once

namespace my_namespace{

class A{
    public:
    A() : a1_{1}, a2_{2}{
        // body of constructor
    }

    A(int x, int y) : a1_{x}, a2_{y}{
        // body of constructor
    }

    private:
    int a1_;
    int a2_;
};
} // mynamespace
