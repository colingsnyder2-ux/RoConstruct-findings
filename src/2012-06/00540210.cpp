// roc 2012-06 00540210  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00540210
//
// 00540210  6aff                 push -1
// 00540212  68ecccaa00           push 0xaaccec
// 00540217  64a100000000         mov eax, dword ptr fs:[0]
// 0054021d  50                   push eax
// 0054021e  64892500000000       mov dword ptr fs:[0], esp
// 00540225  51                   push ecx
// 00540226  56                   push esi
// 00540227  8bf1                 mov esi, ecx
// 00540229  89742404             mov dword ptr [esp + 4], esi
// 0054022d  8d4e20               lea ecx, [esi + 0x20]
// 00540230  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00540238  ff153c26b200         call dword ptr [0xb2263c]
// 0054023e  8d4e04               lea ecx, [esi + 4]
// 00540241  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00540249  ff153c26b200         call dword ptr [0xb2263c]
// 0054024f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540253  5e                   pop esi
// 00540254  64890d00000000       mov dword ptr fs:[0], ecx
// 0054025b  83c410               add esp, 0x10
// 0054025e  c3                   ret 
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