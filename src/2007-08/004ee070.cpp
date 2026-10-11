// from server: 54% by colin
// roc 2007-08 004ee070  unit: HeadBuilder  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ee070
//
// 004ee070  83ec0c               sub esp, 0xc
// 004ee073  8b4124               mov eax, dword ptr [ecx + 0x24]
// 004ee076  d94120               fld dword ptr [ecx + 0x20]
// 004ee079  83c001               add eax, 1
// 004ee07c  d95c2404             fstp dword ptr [esp + 4]
// 004ee080  99                   cdq 
// 004ee081  2bc2                 sub eax, edx
// 004ee083  8b5124               mov edx, dword ptr [ecx + 0x24]
// 004ee086  66891424             mov word ptr [esp], dx
// 004ee08a  6689542402           mov word ptr [esp + 2], dx
// 004ee08f  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ee093  52                   push edx
// 004ee094  8b542404             mov edx, dword ptr [esp + 4]
// 004ee098  d1f8                 sar eax, 1
// 004ee09a  52                   push edx
// 004ee09b  50                   push eax
// 004ee09c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee0a0  50                   push eax
// 004ee0a1  e87afbffff           call 0x4edc20
// 004ee0a6  83c40c               add esp, 0xc
// 004ee0a9  c20400               ret 4

struct HeadBuilder {
    char pad0[0x20];
    float field20;
    int field24;
    void func(int);
};

extern "C" void __cdecl sub_4EDC20(int, int, int, int);

void HeadBuilder::func(int a) {
    int v = field24 + 1;
    float f = field20;
    int local0;
    int local1;
    *(short*)&local0 = (short)field24;
    *(short*)((char*)&local0 + 2) = (short)field24;
    int q = v - (v >> 31);
    q >>= 1;
    sub_4EDC20(a, q, *(int*)&f, local0);
}
