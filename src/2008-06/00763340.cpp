// roc 2008-06 00763340  unit: CXTPDockingPanePaintManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00763340
//
// 00763340  8b442410             mov eax, dword ptr [esp + 0x10]
// 00763344  50                   push eax
// 00763345  e886f2ffff           call 0x7625d0
// 0076334a  89442410             mov dword ptr [esp + 0x10], eax
// 0076334e  8b442404             mov eax, dword ptr [esp + 4]
// 00763352  8b4804               mov ecx, dword ptr [eax + 4]
// 00763355  894c2404             mov dword ptr [esp + 4], ecx
// 00763359  ff25b8208000         jmp dword ptr [0x8020b8]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX0000a9@@QAEHHHHH@Z)

namespace ns_ROCX0000a9 {
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
