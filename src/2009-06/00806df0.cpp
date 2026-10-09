// roc 2009-06 00806df0  unit: CXTColorSelectorCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00806df0
//
// 00806df0  56                   push esi
// 00806df1  57                   push edi
// 00806df2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00806df6  8bf1                 mov esi, ecx
// 00806df8  83ff1a               cmp edi, 0x1a
// 00806dfb  7405                 je 0x806e02
// 00806dfd  83ff15               cmp edi, 0x15
// 00806e00  751c                 jne 0x806e1e
// 00806e02  e869a3f8ff           call 0x791170
// 00806e07  8b10                 mov edx, dword ptr [eax]
// 00806e09  8bc8                 mov ecx, eax
// 00806e0b  8b4204               mov eax, dword ptr [edx + 4]
// 00806e0e  ffd0                 call eax
// 00806e10  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00806e13  6a00                 push 0
// 00806e15  6a00                 push 0
// 00806e17  51                   push ecx
// 00806e18  ff157cee8900         call dword ptr [0x89ee7c]
// 00806e1e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00806e22  8b442414             mov eax, dword ptr [esp + 0x14]
// 00806e26  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00806e2a  52                   push edx
// 00806e2b  50                   push eax
// 00806e2c  51                   push ecx
// 00806e2d  57                   push edi
// 00806e2e  8bce                 mov ecx, esi
// 00806e30  e87d1df1ff           call 0x718bb2
// 00806e35  5f                   pop edi
// 00806e36  5e                   pop esi
// 00806e37  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX000001@@QAEXHHHH@Z)

namespace ns_ROCX000001 {
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
