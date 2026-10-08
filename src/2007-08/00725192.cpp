// from server: 72% by colin
// roc 2007-08 00725192  unit: CXTIconHandle  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725192
//
// 00725192  8bc1                 mov eax, ecx
// 00725194  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00725198  894804               mov dword ptr [eax + 4], ecx
// 0072519b  c700e4507e00         mov dword ptr [eax], 0x7e50e4
// 007251a1  33c9                 xor ecx, ecx
// 007251a3  c7401402000000       mov dword ptr [eax + 0x14], 2
// 007251aa  89480c               mov dword ptr [eax + 0xc], ecx
// 007251ad  894810               mov dword ptr [eax + 0x10], ecx
// 007251b0  66894818             mov word ptr [eax + 0x18], cx
// 007251b4  6689481a             mov word ptr [eax + 0x1a], cx
// 007251b8  894008               mov dword ptr [eax + 8], eax
// 007251bb  c20400               ret 4

struct CXTIconHandle {
    void construct(int);
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    short field18;
    short field1A;
};

void CXTIconHandle::construct(int arg)
{
    CXTIconHandle* self = this;
    self->field4 = arg;
    self->field0 = 0x7e50e4;
    self->field14 = 2;
    self->fieldC = 0;
    self->field10 = 0;
    self->field18 = 0;
    self->field1A = 0;
    self->field8 = (int)self;
}
