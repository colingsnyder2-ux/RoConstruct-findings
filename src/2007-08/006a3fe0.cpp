// from DeepSeek/server: 100% by colin
// roc 2007-08 006a3fe0  unit: PAUHWND__::?$CArray  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3fe0
//
// 006a3fe0  56                   push esi
// 006a3fe1  8bf1                 mov esi, ecx
// 006a3fe3  57                   push edi
// 006a3fe4  8d7e08               lea edi, [esi + 8]
// 006a3fe7  8bcf                 mov ecx, edi
// 006a3fe9  c706a0357d00         mov dword ptr [esi], 0x7d35a0
// 006a3fef  e88cedf8ff           call 0x632d80
// 006a3ff4  c70770357d00         mov dword ptr [edi], 0x7d3570
// 006a3ffa  8d7e2c               lea edi, [esi + 0x2c]
// 006a3ffd  8bcf                 mov ecx, edi
// 006a3fff  e87cf9ffff           call 0x6a3980
// 006a4004  33c0                 xor eax, eax
// 006a4006  c70788357d00         mov dword ptr [edi], 0x7d3588
// 006a400c  6a01                 push 1
// 006a400e  8bce                 mov ecx, esi
// 006a4010  89461c               mov dword ptr [esi + 0x1c], eax
// 006a4013  894604               mov dword ptr [esi + 4], eax
// 006a4016  894624               mov dword ptr [esi + 0x24], eax
// 006a4019  894628               mov dword ptr [esi + 0x28], eax
// 006a401c  894620               mov dword ptr [esi + 0x20], eax
// 006a401f  894640               mov dword ptr [esi + 0x40], eax
// 006a4022  894644               mov dword ptr [esi + 0x44], eax
// 006a4025  e8f6feffff           call 0x6a3f20
// 006a402a  5f                   pop edi
// 006a402b  8bc6                 mov eax, esi
// 006a402d  5e                   pop esi
// 006a402e  c3                   ret 

struct CXTPReBar {
    void* vftable;
    int field4;
    char pad8[0x14];
    int field1c;
    int field20;
    int field24;
    int field28;
    char pad2c[0x14];
    int field40;
    int field44;
    CXTPReBar();
    void Init(int);
};

struct Sub8 {
    void* vftable;
    void Init();
};

struct Sub2c {
    void* vftable;
    void Init();
};

void __stdcall sub_632d80();
void __stdcall sub_6a3980();

CXTPReBar::CXTPReBar()
{
    Sub8* p8;
    Sub2c* p2c;

    vftable = (void*)0x7d35a0;
    p8 = (Sub8*)((char*)this + 8);
    p8->Init();
    p8->vftable = (void*)0x7d3570;
    p2c = (Sub2c*)((char*)this + 0x2c);
    p2c->Init();
    p2c->vftable = (void*)0x7d3588;
    field1c = 0;
    field4 = 0;
    field24 = 0;
    field28 = 0;
    field20 = 0;
    field40 = 0;
    field44 = 0;
    Init(1);
}
