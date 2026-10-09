// roc 2007-03 0065d060  unit: seg_00650000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065d060
//
// 0065d060  56                   push esi
// 0065d061  8bf1                 mov esi, ecx
// 0065d063  e86a16fcff           call 0x61e6d2
// 0065d068  8bce                 mov ecx, esi
// 0065d06a  e811f6ffff           call 0x65c680
// 0065d06f  85c0                 test eax, eax
// 0065d071  741c                 je 0x65d08f
// 0065d073  83782000             cmp dword ptr [eax + 0x20], 0
// 0065d077  7416                 je 0x65d08f
// 0065d079  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065d07d  8b06                 mov eax, dword ptr [esi]
// 0065d07f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0065d083  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 0065d089  51                   push ecx
// 0065d08a  52                   push edx
// 0065d08b  8bce                 mov ecx, esi
// 0065d08d  ffd0                 call eax
// 0065d08f  5e                   pop esi
// 0065d090  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@CXTPPropertyGrid@ns_ROCX00001d@@QAEXHHH@Z)

namespace ns_ROCX00001d {
struct CXTPPropertyGrid {
    void f(int, int, int);
    void g();
    void* h();
};

extern "C" void __stdcall fn_ROCX00001d();

void CXTPPropertyGrid::f(int a, int b, int c)
{
    fn_ROCX00001d();
    void* p = h();
    if (p != 0 && *(int*)((char*)p + 0x20) != 0) {
        void (__thiscall *fn)(CXTPPropertyGrid*, int, int) =
            *(void (__thiscall **)(CXTPPropertyGrid*, int, int))((*(char**)this) + 0x150);
        fn(this, b, c);
    }
}
}
