// roc 2010-06 005ee860  unit: RBX::ChangeHistoryService  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ee860
//
// 005ee860  64a100000000         mov eax, dword ptr fs:[0]
// 005ee866  6aff                 push -1
// 005ee868  6839ff9900           push 0x99ff39
// 005ee86d  50                   push eax
// 005ee86e  64892500000000       mov dword ptr fs:[0], esp
// 005ee875  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 005ee87a  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ee87e  c744240800000000     mov dword ptr [esp + 8], 0
// 005ee886  7304                 jae 0x5ee88c
// 005ee888  8d442414             lea eax, [esp + 0x14]
// 005ee88c  50                   push eax
// 005ee88d  e84efdffff           call 0x5ee5e0
// 005ee892  8d4c2410             lea ecx, [esp + 0x10]
// 005ee896  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 005ee89e  ff1500a49e00         call dword ptr [0x9ea400]
// 005ee8a4  8b0c24               mov ecx, dword ptr [esp]
// 005ee8a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee8ae  83c40c               add esp, 0xc
// 005ee8b1  c21c00               ret 0x1c
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