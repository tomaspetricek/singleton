#include <iostream>

class singleton {
    int a_{0};
    singleton() = default;

public:
    singleton& operator=(const singleton&) = delete;
    singleton(const singleton&) = delete;

    static singleton& instance()
    {
        static singleton inst;
        return inst;
    }

    int a() const
    {
        return a_;
    }

    void a(int a)
    {
        a_ = a;
    }
};

int main()
{
    auto& inst = singleton::instance();
    std::cout << inst.a() << std::endl;
    inst.a(10);
    std::cout << inst.a() << std::endl;
    return 0;
}
