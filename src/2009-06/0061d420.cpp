// roc 2009-06 0061d420  unit: RBX::ChangeHistoryService  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061d420
//
// 0061d420  64a100000000         mov eax, dword ptr fs:[0]
// 0061d426  6aff                 push -1
// 0061d428  6859788600           push 0x867859
// 0061d42d  50                   push eax
// 0061d42e  64892500000000       mov dword ptr fs:[0], esp
// 0061d435  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 0061d43a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061d43e  c744240800000000     mov dword ptr [esp + 8], 0
// 0061d446  7304                 jae 0x61d44c
// 0061d448  8d442414             lea eax, [esp + 0x14]
// 0061d44c  50                   push eax
// 0061d44d  e84efdffff           call 0x61d1a0
// 0061d452  8d4c2410             lea ecx, [esp + 0x10]
// 0061d456  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0061d45e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061d464  8b0c24               mov ecx, dword ptr [esp]
// 0061d467  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d46e  83c40c               add esp, 0xc
// 0061d471  c21c00               ret 0x1c
// copied from an identical function in another client (function ?f@S@@QAEXUString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
    const char *c_str() const;
};

inline String::~String()
{
    destroyString(this);
}

inline const char *String::c_str() const
{
    const char *result = storage.pointer;
    if (capacity < 16)
        result = storage.buffer;
    return result;
}

struct S {
    void forward(const char *);
    void f(String);
};

void S::f(String text)
{
    forward(text.c_str());
}