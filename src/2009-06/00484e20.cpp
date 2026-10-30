// roc 2009-06 00484e20  unit: RBX::MeshGen  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484e20
//
// 00484e20  6aff                 push -1
// 00484e22  683c188700           push 0x87183c
// 00484e27  64a100000000         mov eax, dword ptr fs:[0]
// 00484e2d  50                   push eax
// 00484e2e  64892500000000       mov dword ptr fs:[0], esp
// 00484e35  51                   push ecx
// 00484e36  56                   push esi
// 00484e37  8bf1                 mov esi, ecx
// 00484e39  89742404             mov dword ptr [esp + 4], esi
// 00484e3d  8d4e20               lea ecx, [esi + 0x20]
// 00484e40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00484e48  ff15e40e8a00         call dword ptr [0x8a0ee4]
// 00484e4e  8d4e04               lea ecx, [esi + 4]
// 00484e51  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00484e59  ff15c4e48900         call dword ptr [0x89e4c4]
// 00484e5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00484e63  5e                   pop esi
// 00484e64  64890d00000000       mov dword ptr fs:[0], ecx
// 00484e6b  83c410               add esp, 0x10
// 00484e6e  c3                   ret 
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