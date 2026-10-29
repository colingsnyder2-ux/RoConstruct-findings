// roc 2012-06 0047bbf0  unit: UploadVideoVerb  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047bbf0
//
// 0047bbf0  6aff                 push -1
// 0047bbf2  686811aa00           push 0xaa1168
// 0047bbf7  64a100000000         mov eax, dword ptr fs:[0]
// 0047bbfd  50                   push eax
// 0047bbfe  64892500000000       mov dword ptr fs:[0], esp
// 0047bc05  51                   push ecx
// 0047bc06  56                   push esi
// 0047bc07  8bf1                 mov esi, ecx
// 0047bc09  89742404             mov dword ptr [esp + 4], esi
// 0047bc0d  8d4e20               lea ecx, [esi + 0x20]
// 0047bc10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047bc18  ff153c26b200         call dword ptr [0xb2263c]
// 0047bc1e  8d4e04               lea ecx, [esi + 4]
// 0047bc21  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047bc29  ff153c26b200         call dword ptr [0xb2263c]
// 0047bc2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047bc33  5e                   pop esi
// 0047bc34  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bc3b  83c410               add esp, 0x10
// 0047bc3e  c3                   ret 
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