// from server: 100% by king_originala
// roc 2008-06 00417c70  unit: VCLuaFunction::?$CComContainedObject  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417c70
//
// 00417c70  6aff                 push -1
// 00417c72  68d1db7b00           push 0x7bdbd1
// 00417c77  64a100000000         mov eax, dword ptr fs:[0]
// 00417c7d  50                   push eax
// 00417c7e  64892500000000       mov dword ptr fs:[0], esp
// 00417c85  83ec08               sub esp, 8
// 00417c88  56                   push esi
// 00417c89  57                   push edi
// 00417c8a  8bf1                 mov esi, ecx
// 00417c8c  8dbe30010000         lea edi, [esi + 0x130]
// 00417c92  8bcf                 mov ecx, edi
// 00417c94  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00417c9c  897c2408             mov dword ptr [esp + 8], edi
// 00417ca0  e8ebb31400           call 0x563090
// 00417ca5  b001                 mov al, 1
// 00417ca7  8844240c             mov byte ptr [esp + 0xc], al
// 00417cab  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 00417cb2  88442418             mov byte ptr [esp + 0x18], al
// 00417cb6  7416                 je 0x417cce
// 00417cb8  8d4c2420             lea ecx, [esp + 0x20]
// 00417cbc  ff1564248000         call dword ptr [0x802464]
// 00417cc2  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00417cc8  50                   push eax
// 00417cc9  e882310100           call 0x42ae50
// 00417cce  8bcf                 mov ecx, edi
// 00417cd0  c644241800           mov byte ptr [esp + 0x18], 0
// 00417cd5  e806b41400           call 0x5630e0
// 00417cda  8d4c2420             lea ecx, [esp + 0x20]
// 00417cde  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00417ce6  ff1568248000         call dword ptr [0x802468]
// 00417cec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417cf0  5f                   pop edi
// 00417cf1  5e                   pop esi
// 00417cf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00417cf9  83c414               add esp, 0x14
// 00417cfc  c21c00               ret 0x1c

struct String;

typedef const char* (__thiscall *StringCStr)(const String*);
typedef void (__thiscall *StringDestroy)(String*);

extern StringCStr string_c_str;
extern StringDestroy string_destroy;

struct String {
    unsigned char data[28];
    const char* c_str() const;
    ~String();
};

inline const char* String::c_str() const
{
    return string_c_str(this);
}

inline String::~String()
{
    string_destroy(this);
}

struct Lock {
    int value;
    unsigned char flag;
    int count;
    void enter();
    void leave();
};

struct Guard {
    Lock* lock;
    bool acquired;
    Guard(Lock& value);
    ~Guard();
};

inline Guard::Guard(Lock& value) : lock(&value), acquired(false)
{
    lock->enter();
    acquired = true;
}

inline Guard::~Guard()
{
    if (acquired)
        lock->leave();
}

struct Function {
    void invoke(const char*);
};

struct Object {
    unsigned char padding[0x130];
    Lock lock;
    Function* function;
    void f(String value);
};

void Object::f(String value)
{
    Guard guard(lock);
    if (function)
        function->invoke(value.c_str());
}
