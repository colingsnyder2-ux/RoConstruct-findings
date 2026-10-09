// roc 2008-06 00718cb0  unit: CXTCaptionButton  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718cb0
//
// 00718cb0  56                   push esi
// 00718cb1  57                   push edi
// 00718cb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00718cb6  8bf1                 mov esi, ecx
// 00718cb8  83ff1a               cmp edi, 0x1a
// 00718cbb  7405                 je 0x718cc2
// 00718cbd  83ff15               cmp edi, 0x15
// 00718cc0  751c                 jne 0x718cde
// 00718cc2  e8195a0700           call 0x78e6e0
// 00718cc7  8b10                 mov edx, dword ptr [eax]
// 00718cc9  8bc8                 mov ecx, eax
// 00718ccb  8b4204               mov eax, dword ptr [edx + 4]
// 00718cce  ffd0                 call eax
// 00718cd0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718cd3  6a00                 push 0
// 00718cd5  6a00                 push 0
// 00718cd7  51                   push ecx
// 00718cd8  ff15182e8000         call dword ptr [0x802e18]
// 00718cde  8b542418             mov edx, dword ptr [esp + 0x18]
// 00718ce2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00718ce6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00718cea  52                   push edx
// 00718ceb  50                   push eax
// 00718cec  51                   push ecx
// 00718ced  57                   push edi
// 00718cee  8bce                 mov ecx, esi
// 00718cf0  e87b5a0700           call 0x78e770
// 00718cf5  5f                   pop edi
// 00718cf6  5e                   pop esi
// 00718cf7  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX00000f@@QAEXHHHH@Z)

namespace ns_ROCX00000f {
struct CXTCaptionButton {
    char pad[0x20];
    void* hwnd;
    void sub_69F550(int, int, int, int);
    void sub_69F420(int, int, int, int);
};

extern "C" void* __stdcall sub_710F90();
extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTCaptionButton::sub_69F420(int a, int b, int c, int d) {
    if (a == 0x1a || a == 0x15) {
        void* p = sub_710F90();
        void** vt = *(void***)p;
        ((void (__thiscall*)(void*))vt[1])(p);
        InvalidateRect(hwnd, 0, 0);
    }
    sub_69F550(a, b, c, d);
}
}
