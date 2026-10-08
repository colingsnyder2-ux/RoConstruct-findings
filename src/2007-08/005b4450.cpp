// from server: 100% by colin
// roc 2007-08 005b4450  unit: RBX::MotorJoint  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4450
//
// 005b4450  56                   push esi
// 005b4451  8bf1                 mov esi, ecx
// 005b4453  e8f85e0500           call 0x60a350
// 005b4458  d9ee                 fldz 
// 005b445a  d99688000000         fst dword ptr [esi + 0x88]
// 005b4460  c7063c7e7b00         mov dword ptr [esi], 0x7b7e3c
// 005b4466  d9968c000000         fst dword ptr [esi + 0x8c]
// 005b446c  8bc6                 mov eax, esi
// 005b446e  d99e90000000         fstp dword ptr [esi + 0x90]
// 005b4474  5e                   pop esi
// 005b4475  c3                   ret 

struct MotorJoint {
    char pad[0x88];
    float f88;
    float f8c;
    float f90;
    MotorJoint();
};

extern "C" void __stdcall sub_60a350();

MotorJoint::MotorJoint()
{
    sub_60a350();
    f88 = 0.0f;
    *(int*)this = 0x7b7e3c;
    f8c = 0.0f;
    f90 = 0.0f;
}
