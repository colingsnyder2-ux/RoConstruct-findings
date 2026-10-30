// roc 2009-12 00687720  unit: RBX::ChangeHistoryService  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00687720
//
// 00687720  64a100000000         mov eax, dword ptr fs:[0]
// 00687726  6aff                 push -1
// 00687728  6899759300           push 0x937599
// 0068772d  50                   push eax
// 0068772e  64892500000000       mov dword ptr fs:[0], esp
// 00687735  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 0068773a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068773e  c744240800000000     mov dword ptr [esp + 8], 0
// 00687746  7304                 jae 0x68774c
// 00687748  8d442414             lea eax, [esp + 0x14]
// 0068774c  50                   push eax
// 0068774d  e84efdffff           call 0x6874a0
// 00687752  8d4c2410             lea ecx, [esp + 0x10]
// 00687756  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0068775e  ff15e4b69800         call dword ptr [0x98b6e4]
// 00687764  8b0c24               mov ecx, dword ptr [esp]
// 00687767  64890d00000000       mov dword ptr fs:[0], ecx
// 0068776e  83c40c               add esp, 0xc
// 00687771  c21c00               ret 0x1c
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