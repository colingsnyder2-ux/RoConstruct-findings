// roc 2009-12 00686ff0  unit: RBX::ChangeHistoryService  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00686ff0
//
// 00686ff0  6aff                 push -1
// 00686ff2  68485e9400           push 0x945e48
// 00686ff7  64a100000000         mov eax, dword ptr fs:[0]
// 00686ffd  50                   push eax
// 00686ffe  64892500000000       mov dword ptr fs:[0], esp
// 00687005  51                   push ecx
// 00687006  56                   push esi
// 00687007  8bf1                 mov esi, ecx
// 00687009  89742404             mov dword ptr [esp + 4], esi
// 0068700d  8d4e24               lea ecx, [esi + 0x24]
// 00687010  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00687018  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068701e  8bce                 mov ecx, esi
// 00687020  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00687028  e843ffffff           call 0x686f70
// 0068702d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00687031  5e                   pop esi
// 00687032  64890d00000000       mov dword ptr fs:[0], ecx
// 00687039  83c410               add esp, 0x10
// 0068703c  c3                   ret 
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