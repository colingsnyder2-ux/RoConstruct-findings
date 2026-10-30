// roc 2009-06 0061ccf0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061ccf0
//
// 0061ccf0  6aff                 push -1
// 0061ccf2  6858848600           push 0x868458
// 0061ccf7  64a100000000         mov eax, dword ptr fs:[0]
// 0061ccfd  50                   push eax
// 0061ccfe  64892500000000       mov dword ptr fs:[0], esp
// 0061cd05  51                   push ecx
// 0061cd06  56                   push esi
// 0061cd07  8bf1                 mov esi, ecx
// 0061cd09  89742404             mov dword ptr [esp + 4], esi
// 0061cd0d  8d4e24               lea ecx, [esi + 0x24]
// 0061cd10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061cd18  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061cd1e  8bce                 mov ecx, esi
// 0061cd20  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061cd28  e843ffffff           call 0x61cc70
// 0061cd2d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061cd31  5e                   pop esi
// 0061cd32  64890d00000000       mov dword ptr fs:[0], ecx
// 0061cd39  83c410               add esp, 0x10
// 0061cd3c  c3                   ret 
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