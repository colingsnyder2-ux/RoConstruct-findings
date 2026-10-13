// test virtual destructor with namespace std
namespace std {
    class __declspec(dllimport) exception {
    public:
        virtual ~exception();
    };
}

struct Derived : std::exception {
    virtual ~Derived();
};

Derived::~Derived() {
    // Base destructor called automatically
}