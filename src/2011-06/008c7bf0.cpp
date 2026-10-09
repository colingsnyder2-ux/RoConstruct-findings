// roc 2011-06 008c7bf0  unit: CXTPDockingPanePaintManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c7bf0
//
// 008c7bf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c7bf4  50                   push eax
// 008c7bf5  e896f2ffff           call 0x8c6e90
// 008c7bfa  89442410             mov dword ptr [esp + 0x10], eax
// 008c7bfe  8b442404             mov eax, dword ptr [esp + 4]
// 008c7c02  8b4804               mov ecx, dword ptr [eax + 4]
// 008c7c05  894c2404             mov dword ptr [esp + 4], ecx
// 008c7c09  ff250c01a400         jmp dword ptr [0xa4010c]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX00005d@@QAEHHHHH@Z)

namespace ns_ROCX00005d {
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
