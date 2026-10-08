// from server: 57% by colin
// roc 2007-08 00626620  unit: RBX::Running  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626620
//
// 00626620  d9442408             fld dword ptr [esp + 8]
// 00626624  8bc1                 mov eax, ecx
// 00626626  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062662a  894804               mov dword ptr [eax + 4], ecx
// 0062662d  c7400850d07b00       mov dword ptr [eax + 8], 0x7bd050
// 00626634  d9580c               fstp dword ptr [eax + 0xc]
// 00626637  d944240c             fld dword ptr [esp + 0xc]
// 0062663b  c700604a7c00         mov dword ptr [eax], 0x7c4a60
// 00626641  d95810               fstp dword ptr [eax + 0x10]
// 00626644  c74008584a7c00       mov dword ptr [eax + 8], 0x7c4a58
// 0062664b  d9ee                 fldz 
// 0062664d  33c9                 xor ecx, ecx
// 0062664f  d9501c               fst dword ptr [eax + 0x1c]
// 00626652  894814               mov dword ptr [eax + 0x14], ecx
// 00626655  d95020               fst dword ptr [eax + 0x20]
// 00626658  894818               mov dword ptr [eax + 0x18], ecx
// 0062665b  d95824               fstp dword ptr [eax + 0x24]
// 0062665e  c20c00               ret 0xc

struct RBX_Running {
    void construct(int a2, float a3, float a4);
};

void RBX_Running::construct(int a2, float a3, float a4)
{
    *(int*)((char*)this + 4) = a2;
    *(int*)((char*)this + 8) = 0x7bd050;
    *(float*)((char*)this + 0xc) = a3;
    *(int*)((char*)this) = 0x7c4a60;
    *(float*)((char*)this + 0x10) = a4;
    *(int*)((char*)this + 8) = 0x7c4a58;
    *(float*)((char*)this + 0x1c) = 0.0f;
    *(int*)((char*)this + 0x14) = 0;
    *(float*)((char*)this + 0x20) = 0.0f;
    *(int*)((char*)this + 0x18) = 0;
    *(float*)((char*)this + 0x24) = 0.0f;
}
