// roc 2007-03 006cf070  unit: seg_006c0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cf070
//
// 006cf070  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cf074  50                   push eax
// 006cf075  e8d6f2ffff           call 0x6ce350
// 006cf07a  89442410             mov dword ptr [esp + 0x10], eax
// 006cf07e  8b442404             mov eax, dword ptr [esp + 4]
// 006cf082  8b4804               mov ecx, dword ptr [eax + 4]
// 006cf085  894c2404             mov dword ptr [esp + 4], ecx
// 006cf089  ff2504d17700         jmp dword ptr [0x77d104]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX000020@@QAEHHHHH@Z)

namespace ns_ROCX000020 {
extern "C" int __stdcall sub_6e54b0(int);
extern "C" int (__stdcall *SetPixel)(int, int, int, int);

struct CXTPDockingPanePaintManager
{
    int sub_6e61e0(int, int, int, int);
};

int CXTPDockingPanePaintManager::sub_6e61e0(int a, int b, int c, int d)
{
    int v = sub_6e54b0(d);
    return SetPixel(*(int *)(a + 4), b, c, v);
}
}
