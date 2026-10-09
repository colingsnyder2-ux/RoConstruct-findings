// roc 2010-06 0086a750  unit: CXTPDockingPanePaintManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086a750
//
// 0086a750  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086a754  50                   push eax
// 0086a755  e896f2ffff           call 0x8699f0
// 0086a75a  89442410             mov dword ptr [esp + 0x10], eax
// 0086a75e  8b442404             mov eax, dword ptr [esp + 4]
// 0086a762  8b4804               mov ecx, dword ptr [eax + 4]
// 0086a765  894c2404             mov dword ptr [esp + 4], ecx
// 0086a769  ff255ca19e00         jmp dword ptr [0x9ea15c]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX000093@@QAEHHHHH@Z)

namespace ns_ROCX000093 {
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
