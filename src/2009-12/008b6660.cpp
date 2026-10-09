// roc 2009-12 008b6660  unit: CXTPDockingPanePaintManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6660
//
// 008b6660  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b6664  50                   push eax
// 008b6665  e896f2ffff           call 0x8b5900
// 008b666a  89442410             mov dword ptr [esp + 0x10], eax
// 008b666e  8b442404             mov eax, dword ptr [esp + 4]
// 008b6672  8b4804               mov ecx, dword ptr [eax + 4]
// 008b6675  894c2404             mov dword ptr [esp + 4], ecx
// 008b6679  ff2514b19800         jmp dword ptr [0x98b114]
// copied from an identical function in another client (function ?sub_6e61e0@CXTPDockingPanePaintManager@ns_ROCX00001a@@QAEHHHHH@Z)

namespace ns_ROCX00001a {
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
