// roc 2010-06 005ee130  unit: RBX::ChangeHistoryService  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ee130
//
// 005ee130  6aff                 push -1
// 005ee132  6848829900           push 0x998248
// 005ee137  64a100000000         mov eax, dword ptr fs:[0]
// 005ee13d  50                   push eax
// 005ee13e  64892500000000       mov dword ptr fs:[0], esp
// 005ee145  51                   push ecx
// 005ee146  56                   push esi
// 005ee147  8bf1                 mov esi, ecx
// 005ee149  89742404             mov dword ptr [esp + 4], esi
// 005ee14d  8d4e24               lea ecx, [esi + 0x24]
// 005ee150  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ee158  ff1500a49e00         call dword ptr [0x9ea400]
// 005ee15e  8bce                 mov ecx, esi
// 005ee160  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ee168  e843ffffff           call 0x5ee0b0
// 005ee16d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ee171  5e                   pop esi
// 005ee172  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee179  83c410               add esp, 0x10
// 005ee17c  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__thiscall *string_destroy)(void *);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    string_destroy(this);
}

struct Base {
    char storage[36];
    ~Base();
};

struct S : Base {
    String text;
    ~S();
};

S::~S()
{
}