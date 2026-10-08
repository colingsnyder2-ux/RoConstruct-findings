// from server: 43% by colin
// roc 2007-08 004edff0  unit: HeadBuilder  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004edff0
//
// 004edff0  83ec0c               sub esp, 0xc
// 004edff3  8b4124               mov eax, dword ptr [ecx + 0x24]
// 004edff6  d94120               fld dword ptr [ecx + 0x20]
// 004edff9  83c001               add eax, 1
// 004edffc  d95c2404             fstp dword ptr [esp + 4]
// 004ee000  99                   cdq 
// 004ee001  2bc2                 sub eax, edx
// 004ee003  8b5124               mov edx, dword ptr [ecx + 0x24]
// 004ee006  66891424             mov word ptr [esp], dx
// 004ee00a  6689542402           mov word ptr [esp + 2], dx
// 004ee00f  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ee013  52                   push edx
// 004ee014  8b542404             mov edx, dword ptr [esp + 4]
// 004ee018  d1f8                 sar eax, 1
// 004ee01a  52                   push edx
// 004ee01b  50                   push eax
// 004ee01c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee020  50                   push eax
// 004ee021  e8aaf5ffff           call 0x4ed5d0
// 004ee026  83c40c               add esp, 0xc
// 004ee029  c20400               ret 4

struct HeadBuilder {
    char pad[0x20];
    float field_20;
    int field_24;
    void func_4ed5d0(int, int, int, int);
    void method(int);
};

void HeadBuilder::method(int arg)
{
    int a = field_24 + 1;
    float f = field_20;
    int b = a - (a >> 31);
    b = b >> 1;
    short s = (short)field_24;
    int packed = (int)(unsigned short)s | ((int)(unsigned short)s << 16);
    func_4ed5d0(arg, b, *(int*)&f, packed);
}
