// from server: 46% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Type;
extern bool (__thiscall* typeEqual)(const Type*, const Type*);

struct Type {
    bool operator==(const Type&) const;
};

inline bool Type::operator==(const Type& other) const {
    return typeEqual(this, &other);
}

extern Type emptyType;
extern Type sourceType;
extern Type objectType;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* const object;
    Control* const control;
    Shared();
    ~Shared();
};

inline Shared::Shared() : object(0), control(0) {}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Holder {
    virtual ~Holder();
    virtual const Type& type() const = 0;
};

struct Any {
    Holder* holder;
    Any& assign(const Shared&);
    Shared* cast(const Type&);
};

__forceinline Shared* Any::cast(const Type& wanted) {
    if (this && (holder ? holder->type() : emptyType) == wanted)
        return reinterpret_cast<Shared*>(reinterpret_cast<char*>(holder) + 4);
    return 0;
}

struct Table {
    unsigned long reserved[2];
    const Type* type;
};

extern Table* __cdecl sharedTable();
extern Shared __cdecl convert(const Shared&);

struct String;
extern void (__thiscall* stringConstruct)(String*, const char*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text) {
    stringConstruct(this, text);
}

struct ExceptionBase {
    virtual ~ExceptionBase();
    char* message;
    int owned;
};

struct CastError : ExceptionBase {
    String text;
    CastError(const String&);
    CastError(const CastError&);
    virtual ~CastError();
};

struct S {
    Table* table;
    Any value;
    Shared* f();
};

Shared* S::f() {
    if (emptyType == *table->type) {
        value.assign(Shared());
        table = sharedTable();
    }

    if (sourceType == *table->type) {
        Shared* source = value.cast(sourceType);
        if (source)
            value.assign(convert(*source));
        else
            value.assign(Shared());
        table = sharedTable();
    }

    Shared* result = value.cast(objectType);
    if (!result) {
        String message("Unable to cast value to Object");
        throw CastError(message);
    }
    return result;
}
