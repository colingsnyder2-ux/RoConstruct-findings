// from server: 100% by atomic.potato
// roc 2010-06 004e96b0  unit: G3D::VRay::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e96b0
//
// 004e96b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e96b4  e897ecffff           call 0x4e8350
// 004e96b9  8b442408             mov eax, dword ptr [esp + 8]
// 004e96bd  51                   push ecx
// 004e96be  d91c24               fstp dword ptr [esp]
// 004e96c1  50                   push eax
// 004e96c2  e8397bffff           call 0x4e1200
// 004e96c7  83c408               add esp, 8
// 004e96ca  c3                   ret 

struct VRayHolder
{
    float Method();
};

extern "C" void __cdecl Function4E1200(int other, float value);

void Function4E96B0(VRayHolder* holder, int other)
{
    Function4E1200(other, holder->Method());
}
