// from server: 44% by colin
// roc 2007-08 0055bac0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bac0
//
// 0055bac0  6aff                 push -1
// 0055bac2  683b387500           push 0x75383b
// 0055bac7  64a100000000         mov eax, dword ptr fs:[0]
// 0055bacd  50                   push eax
// 0055bace  64892500000000       mov dword ptr fs:[0], esp
// 0055bad5  51                   push ecx
// 0055bad6  56                   push esi
// 0055bad7  8bf1                 mov esi, ecx
// 0055bad9  89742404             mov dword ptr [esp + 4], esi
// 0055badd  c7060c8a7a00         mov dword ptr [esi], 0x7a8a0c
// 0055bae3  6aff                 push -1
// 0055bae5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0055baed  e8be4debff           call 0x4108b0
// 0055baf2  8d4e08               lea ecx, [esi + 8]
// 0055baf5  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 0055bafc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055bb04  e897ddffff           call 0x5598a0
// 0055bb09  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055bb0d  5e                   pop esi
// 0055bb0e  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bb15  83c410               add esp, 0x10
// 0055bb18  c3                   ret 

struct RBXName {
    static const RBXName& declare(const char*);
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
};

struct Creator : CreatorBase {
    int field4;
    int field8;
    Creator();
};

extern "C" void __stdcall sub_4108B0(int);
extern "C" void __fastcall sub_5598A0(void*);

extern const char sClassName[];
extern int g_isConstructed;

Creator::Creator()
{
    field4 = -1;
    field8 = -1;
    sub_4108B0(-1);
    sub_5598A0(&field8);
}
