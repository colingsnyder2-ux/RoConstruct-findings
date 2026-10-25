// from server: 100% by king_originala
// roc 2008-06 005eed50  unit: RBX::$00::?$SurfaceDescriptor  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eed50
//
// 005eed50  6aff                 push -1
// 005eed52  6842e87d00           push 0x7de842
// 005eed57  64a100000000         mov eax, dword ptr fs:[0]
// 005eed5d  50                   push eax
// 005eed5e  64892500000000       mov dword ptr fs:[0], esp
// 005eed65  83ec44               sub esp, 0x44
// 005eed68  68a4038400           push 0x8403a4
// 005eed6d  8d4c2404             lea ecx, [esp + 4]
// 005eed71  ff1558248000         call dword ptr [0x802458]
// 005eed77  8d4c241c             lea ecx, [esp + 0x1c]
// 005eed7b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005eed83  ff1598288000         call dword ptr [0x802898]
// 005eed89  8d0424               lea eax, [esp]
// 005eed8c  50                   push eax
// 005eed8d  8d4c242c             lea ecx, [esp + 0x2c]
// 005eed91  c644245001           mov byte ptr [esp + 0x50], 1
// 005eed96  c7442420f8b78000     mov dword ptr [esp + 0x20], 0x80b7f8
// 005eed9e  ff155c248000         call dword ptr [0x80245c]
// 005eeda4  68c81b8d00           push 0x8d1bc8
// 005eeda9  8d4c2420             lea ecx, [esp + 0x20]
// 005eedad  51                   push ecx
// 005eedae  c644245400           mov byte ptr [esp + 0x54], 0
// 005eedb3  e8d4270b00           call 0x6a158c

typedef void (__thiscall *ExceptionCtor)(void *);
typedef void (__thiscall *StringCtor)(void *, const char *);
typedef void (__thiscall *StringCopyCtor)(void *, const void *);

extern ExceptionCtor exceptionCtor;
extern StringCtor stringCtor;
extern StringCopyCtor stringCopyCtor;
extern const char runtimeErrorVtable[];

namespace std {
    class exception {
    protected:
        const void *vtable;
        char *message;
        int owned;
    public:
        exception();
        ~exception();
        const char *what() const;
    };

    class string {
        char storage[28];
    public:
        string(const char *);
        string(const string &);
        ~string();
    };

    class runtime_error : public exception {
        string message;
    public:
        runtime_error(const string &);
        ~runtime_error();
        const char *what() const;
    };

    __forceinline exception::exception()
    {
        exceptionCtor(this);
    }

    __forceinline string::string(const char *text)
    {
        stringCtor(this, text);
    }

    __forceinline string::string(const string &other)
    {
        stringCopyCtor(this, &other);
    }

    __forceinline runtime_error::runtime_error(const string &text)
        : exception(), message((vtable = runtimeErrorVtable, text))
    {
    }
}

struct S_func_005eed50 {
    void f();
};

void S_func_005eed50::f()
{
    throw std::runtime_error(
        std::string("SurfaceDescriptor::set not implemented"));
}
