// from server: 33% by colin
// roc 2007-08 00577820  unit: RBX::Part::W4PartType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577820
//
// 00577820  c70000000000         mov dword ptr [eax], 0
// 00577826  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057782e  89642430             mov dword ptr [esp + 0x30], esp
// 00577832  8911                 mov dword ptr [ecx], edx
// 00577834  8b542420             mov edx, dword ptr [esp + 0x20]
// 00577838  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057783c  52                   push edx
// 0057783d  50                   push eax
// 0057783e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00577843  e8b8f8ffff           call 0x577100
// 00577848  50                   push eax
// 00577849  8bce                 mov ecx, esi
// 0057784b  c644242000           mov byte ptr [esp + 0x20], 0
// 00577850  e86bd7ffff           call 0x574fc0
// 00577855  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00577859  51                   push ecx
// 0057785a  e803840b00           call 0x62fc62
// 0057785f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577863  83c404               add esp, 4
// 00577866  c7067cac7a00         mov dword ptr [esi], 0x7aac7c
// 0057786c  8bc6                 mov eax, esi
// 0057786e  64890d00000000       mov dword ptr fs:[0], ecx
// 00577875  5e                   pop esi
// 00577876  83c40c               add esp, 0xc
// 00577879  c22400               ret 0x24

struct EnumDesc {
    void construct(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" int __cdecl sub_577100(int, int);
extern "C" void __cdecl sub_574fc0();
extern "C" void __cdecl sub_62fc62(int);

void EnumDesc::construct(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    *(int*)0 = 0;
    *(int*)this = 0;
    sub_577100(c, d);
    sub_574fc0();
    sub_62fc62(i);
    *(int*)this = 0x7aac7c;
}
