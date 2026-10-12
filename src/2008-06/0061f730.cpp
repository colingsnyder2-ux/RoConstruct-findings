// from server: 92% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


class type_info {
public:
    bool __thiscall operator==(const type_info&) const;
};

namespace std {
    class bad_cast {
        const char* message;
        int owned;
    public:
        explicit bad_cast(const char*);
        virtual ~bad_cast();
        virtual const char* what() const;
    };
}

struct bad_any_cast : std::bad_cast {
    bad_any_cast();
};

bad_any_cast::bad_any_cast() : std::bad_cast("bad cast") {}

__declspec(noreturn) void __cdecl raise_bad_cast(const void*);

struct Counted {
    void* vtable;
    volatile long references;
};

struct Shared {
    void* object;
    Counted* count;

    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->references);
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const = 0;
};

struct Holder : Placeholder {
    Shared value;
};

struct Any {
    Placeholder* content;
};

Shared __cdecl cast_shared(const Any* source)
{
    Shared* result = 0;

    if (source) {
        const type_info& type =
            source->content ? source->content->type() : typeid(Placeholder);

        if (type == typeid(Shared))
            result = &static_cast<Holder*>(source->content)->value;
    }

    if (!result) {
        bad_any_cast error;
        raise_bad_cast(&error);
    }

    return *result;
}
