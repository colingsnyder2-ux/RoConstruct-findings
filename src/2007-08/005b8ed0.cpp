// from server: 100% by colin
// roc 2007-08 005b8ed0  unit: RBX::VDecal::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8ed0
//
// 005b8ed0  8b442404             mov eax, dword ptr [esp + 4]
// 005b8ed4  3981e8000000         cmp dword ptr [ecx + 0xe8], eax
// 005b8eda  7413                 je 0x5b8eef
// 005b8edc  8981e8000000         mov dword ptr [ecx + 0xe8], eax
// 005b8ee2  c7442404a0658c00     mov dword ptr [esp + 4], 0x8c65a0
// 005b8eea  e921b8e8ff           jmp 0x444710
// 005b8eef  c20400               ret 4

struct S_005b8ed0 {
    char pad[0xe8];
    int field_e8;
    void method(int);
};

void S_005b8ed0::method(int arg)
{
    if (field_e8 != arg) {
        field_e8 = arg;
        extern void __stdcall sub_00444710(int);
        sub_00444710(0x8c65a0);
    }
}
