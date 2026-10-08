// from server: 54% by colin
// roc 2007-08 005e3d10  unit: RBX::Unlocked  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3d10
//
// 005e3d10  8b542404             mov edx, dword ptr [esp + 4]
// 005e3d14  8bc1                 mov eax, ecx
// 005e3d16  83c9ff               or ecx, 0xffffffff
// 005e3d19  894808               mov dword ptr [eax + 8], ecx
// 005e3d1c  89480c               mov dword ptr [eax + 0xc], ecx
// 005e3d1f  c740048c4c7a00       mov dword ptr [eax + 4], 0x7a4c8c
// 005e3d26  33c9                 xor ecx, ecx
// 005e3d28  894810               mov dword ptr [eax + 0x10], ecx
// 005e3d2b  c70084d07b00         mov dword ptr [eax], 0x7bd084
// 005e3d31  c7400468d07b00       mov dword ptr [eax + 4], 0x7bd068
// 005e3d38  884814               mov byte ptr [eax + 0x14], cl
// 005e3d3b  895018               mov dword ptr [eax + 0x18], edx
// 005e3d3e  89481c               mov dword ptr [eax + 0x1c], ecx
// 005e3d41  c20400               ret 4

struct Unlocked {
    void* vtable0;
    void* vtable1;
    int field8;
    int fieldC;
    int field10;
    char field14;
    int field18;
    int field1C;
    void construct(int arg);
};

void Unlocked::construct(int arg)
{
    field8 = -1;
    fieldC = -1;
    vtable1 = (void*)0x7a4c8c;
    field10 = 0;
    vtable0 = (void*)0x7bd084;
    vtable1 = (void*)0x7bd068;
    field14 = 0;
    field18 = arg;
    field1C = 0;
}
