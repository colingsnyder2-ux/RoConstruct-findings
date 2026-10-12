// from server: 78% by king_originala
struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

namespace std {
    class bad_cast {
        const char* message;
        int owns;
    public:
        explicit bad_cast(const char*);
        bad_cast(const bad_cast&);
        virtual ~bad_cast();
    };
}

extern std::bad_cast* (__thiscall* bad_cast_constructor)(
    std::bad_cast*, const char*);

inline std::bad_cast::bad_cast(const char* text)
{
    bad_cast_constructor(this, text);
}

namespace boost {
    template<class T> class shared_ptr;
}

namespace RBX {
    class Instance;

    namespace Reflection {
        struct PropertyDescriptor {
            virtual ~PropertyDescriptor();
        };

        template<class T>
        struct TypedPropertyDescriptor : PropertyDescriptor {
            Result get(int);
        };
    }
}

struct S {
    RBX::Reflection::PropertyDescriptor* descriptor;
    int index;
    Result f();
};

Result S::f()
{
    typedef RBX::Reflection::TypedPropertyDescriptor<
        boost::shared_ptr<RBX::Instance> > TypedDescriptor;

    TypedDescriptor* p = dynamic_cast<TypedDescriptor*>(descriptor);
    if (!p)
        throw std::bad_cast("bad cast");
    return p->get(index);
}
