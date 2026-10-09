// from server: 46% by colin
// roc 2007-08 00577520  unit: RBX::Part::W4PartType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577520
//
// 00577520  c70000000000         mov dword ptr [eax], 0
// 00577526  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057752e  89642430             mov dword ptr [esp + 0x30], esp
// 00577532  8911                 mov dword ptr [ecx], edx
// 00577534  8b542420             mov edx, dword ptr [esp + 0x20]
// 00577538  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057753c  52                   push edx
// 0057753d  50                   push eax
// 0057753e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00577543  e8b8fbffff           call 0x577100
// 00577548  50                   push eax
// 00577549  8bce                 mov ecx, esi
// 0057754b  c644242000           mov byte ptr [esp + 0x20], 0
// 00577550  e8fbd9ffff           call 0x574f50
// 00577555  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00577559  51                   push ecx
// 0057755a  e803870b00           call 0x62fc62
// 0057755f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577563  83c404               add esp, 4
// 00577566  c706a4ac7a00         mov dword ptr [esi], 0x7aaca4
// 0057756c  8bc6                 mov eax, esi
// 0057756e  64890d00000000       mov dword ptr fs:[0], ecx
// 00577575  5e                   pop esi
// 00577576  83c40c               add esp, 0xc
// 00577579  c22400               ret 0x24

struct EnumDesc {
    void construct(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" int __cdecl sub_577100(int, int);
extern "C" void __cdecl sub_574F50(int);
extern "C" void __cdecl sub_62FC62(int);

void EnumDesc::construct(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    int* p = (int*)a;
    *p = 0;
    *(int*)(this) = b;
    int r = sub_577100(c, d);
    sub_574F50(r);
    sub_62FC62(i);
    *(int*)(this) = 0x7aaca4;
}
