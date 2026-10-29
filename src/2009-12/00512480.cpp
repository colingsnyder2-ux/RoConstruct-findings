// roc 2009-12 00512480  unit: boost::detail::thread_data_base  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00512480
//
// 00512480  6aff                 push -1
// 00512482  687c3c9300           push 0x933c7c
// 00512487  64a100000000         mov eax, dword ptr fs:[0]
// 0051248d  50                   push eax
// 0051248e  64892500000000       mov dword ptr fs:[0], esp
// 00512495  51                   push ecx
// 00512496  56                   push esi
// 00512497  8bf1                 mov esi, ecx
// 00512499  89742404             mov dword ptr [esp + 4], esi
// 0051249d  8d4e20               lea ecx, [esi + 0x20]
// 005124a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005124a8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005124ae  8d4e04               lea ecx, [esi + 4]
// 005124b1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005124b9  ff15e4b69800         call dword ptr [0x98b6e4]
// 005124bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005124c3  5e                   pop esi
// 005124c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005124cb  83c410               add esp, 0x10
// 005124ce  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void *);

struct String
{
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct S
{
    int prefix;
    String first;
    String second;
    ~S();
};

S::~S()
{
}