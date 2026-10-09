// roc 2009-06 007dbb30  unit: CXTPDockingPanePaintManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dbb30
//
// 007dbb30  8b442410             mov eax, dword ptr [esp + 0x10]
// 007dbb34  50                   push eax
// 007dbb35  e896f2ffff           call 0x7dadd0
// 007dbb3a  89442410             mov dword ptr [esp + 0x10], eax
// 007dbb3e  8b442404             mov eax, dword ptr [esp + 4]
// 007dbb42  8b4804               mov ecx, dword ptr [eax + 4]
// 007dbb45  894c2404             mov dword ptr [esp + 4], ecx
// 007dbb49  ff25d4e08900         jmp dword ptr [0x89e0d4]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX000089@@QAEHHHHH@Z)

namespace ns_ROCX000089 {
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
