// from server: 100% by king_originala
// roc 2008-06 0044c3d0  unit: CRobloxModule  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c3d0
//
// 0044c3d0  6aff                 push -1
// 0044c3d2  6846127c00           push 0x7c1246
// 0044c3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0044c3dd  50                   push eax
// 0044c3de  64892500000000       mov dword ptr fs:[0], esp
// 0044c3e5  51                   push ecx
// 0044c3e6  56                   push esi
// 0044c3e7  8bf1                 mov esi, ecx
// 0044c3e9  6a00                 push 0
// 0044c3eb  89742408             mov dword ptr [esp + 8], esi
// 0044c3ef  e87a4e2500           call 0x6a126e
// 0044c3f4  6820e98000           push 0x80e920
// 0044c3f9  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0044c3ff  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044c407  c706646a8100         mov dword ptr [esi], 0x816a64
// 0044c40d  e8aeddfdff           call 0x42a1c0
// 0044c412  8d8ef0000000         lea ecx, [esi + 0xf0]
// 0044c418  c644241001           mov byte ptr [esp + 0x10], 1
// 0044c41d  ff1560248000         call dword ptr [0x802460]
// 0044c423  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044c427  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0044c431  8bc6                 mov eax, esi
// 0044c433  5e                   pop esi
// 0044c434  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c43b  83c410               add esp, 0x10
// 0044c43e  c3                   ret 

struct Base
{
    unsigned char storage[160];
    Base(int);
    virtual ~Base();
};

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *constructString)(void*);

struct CRobloxModule : Base
{
    String name;
    unsigned char padding[48];
    unsigned char text[28];
    unsigned value;

    CRobloxModule();
    virtual ~CRobloxModule();
};

CRobloxModule::CRobloxModule()
    : Base(0), name("Roblox")
{
    constructString(text);
    value = 0;
}
