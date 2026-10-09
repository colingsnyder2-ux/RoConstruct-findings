// from server: 30% by colin
// roc 2007-08 00664150  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664150
//
// 00664150  6aff                 push -1
// 00664152  68f8797600           push 0x7679f8
// 00664157  64a100000000         mov eax, dword ptr fs:[0]
// 0066415d  50                   push eax
// 0066415e  51                   push ecx
// 0066415f  56                   push esi
// 00664160  a188518b00           mov eax, dword ptr [0x8b5188]
// 00664165  33c4                 xor eax, esp
// 00664167  50                   push eax
// 00664168  8d44240c             lea eax, [esp + 0xc]
// 0066416c  64a300000000         mov dword ptr fs:[0], eax
// 00664172  8bf1                 mov esi, ecx
// 00664174  89742408             mov dword ptr [esp + 8], esi
// 00664178  8d4e2c               lea ecx, [esi + 0x2c]
// 0066417b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00664183  e828fdffff           call 0x663eb0
// 00664188  8bce                 mov ecx, esi
// 0066418a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00664192  e803c5fcff           call 0x63069a
// 00664197  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066419b  64890d00000000       mov dword ptr fs:[0], ecx
// 006641a2  59                   pop ecx
// 006641a3  5e                   pop esi
// 006641a4  83c410               add esp, 0x10
// 006641a7  c3                   ret 

struct VCXTPReportRows_CXTPHeapObjectT {
    char pad[0x2c];
    int field_2c;
    void sub_663EB0();
    void sub_63069A();
    void destroy();
};

void VCXTPReportRows_CXTPHeapObjectT::destroy()
{
    this->field_2c = 0;
    this->sub_663EB0();
    this->field_2c = -1;
    this->sub_63069A();
}
