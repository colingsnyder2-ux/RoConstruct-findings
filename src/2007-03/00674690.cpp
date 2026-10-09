// roc 2007-03 00674690  unit: seg_00670000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00674690
//
// 00674690  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00674694  56                   push esi
// 00674695  8bf1                 mov esi, ecx
// 00674697  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067469b  8b01                 mov eax, dword ptr [ecx]
// 0067469d  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 006746a3  52                   push edx
// 006746a4  ffd0                 call eax
// 006746a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006746aa  51                   push ecx
// 006746ab  50                   push eax
// 006746ac  8bce                 mov ecx, esi
// 006746ae  e88dffffff           call 0x674640
// 006746b3  5e                   pop esi
// 006746b4  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_0067C5B0@CXTPControls@ns_ROCX000003@@QAEHHHH@Z)

namespace ns_ROCX000003 {
struct CXTPControls
{
    int sub_0067C560(int, int);
    int sub_0067C5B0(int, int, int);
};

int CXTPControls::sub_0067C5B0(int a1, int a2, int a3)
{
    int v = (*(int (__thiscall **)(int, int))(*(int *)a1 + 0x13c))(a1, a3);
    return sub_0067C560(v, a2);
}
}
