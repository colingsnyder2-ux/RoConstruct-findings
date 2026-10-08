// from server: 100% by colin
// roc 2007-08 005a0ad0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0ad0
//
// 005a0ad0  8b442404             mov eax, dword ptr [esp + 4]
// 005a0ad4  898180020000         mov dword ptr [ecx + 0x280], eax
// 005a0ada  c7442404d0538c00     mov dword ptr [esp + 4], 0x8c53d0
// 005a0ae2  e9293ceaff           jmp 0x444710

struct S {
    char pad[0x280];
    int field_280;
    void func_005a0ad0(int);
};

extern int G_008c53d0;
extern void __stdcall G_func_00444710(int);

void S::func_005a0ad0(int arg)
{
    field_280 = arg;
    G_func_00444710((int)&G_008c53d0);
}
