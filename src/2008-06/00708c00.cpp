// roc 2008-06 00708c00  unit: CXTSplitterWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708c00
//
// 00708c00  56                   push esi
// 00708c01  57                   push edi
// 00708c02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00708c06  8bf1                 mov esi, ecx
// 00708c08  83ff1a               cmp edi, 0x1a
// 00708c0b  7405                 je 0x708c12
// 00708c0d  83ff15               cmp edi, 0x15
// 00708c10  751c                 jne 0x708c2e
// 00708c12  e849f6ffff           call 0x708260
// 00708c17  8b10                 mov edx, dword ptr [eax]
// 00708c19  8bc8                 mov ecx, eax
// 00708c1b  8b4204               mov eax, dword ptr [edx + 4]
// 00708c1e  ffd0                 call eax
// 00708c20  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00708c23  6a00                 push 0
// 00708c25  6a00                 push 0
// 00708c27  51                   push ecx
// 00708c28  ff15182e8000         call dword ptr [0x802e18]
// 00708c2e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00708c32  8b442414             mov eax, dword ptr [esp + 0x14]
// 00708c36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00708c3a  52                   push edx
// 00708c3b  50                   push eax
// 00708c3c  51                   push ecx
// 00708c3d  57                   push edi
// 00708c3e  8bce                 mov ecx, esi
// 00708c40  e8bb7bf9ff           call 0x6a0800
// 00708c45  5f                   pop edi
// 00708c46  5e                   pop esi
// 00708c47  c21000               ret 0x10
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
