// roc 2008-06 0078e770  unit: CXTColorSelectorCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078e770
//
// 0078e770  56                   push esi
// 0078e771  57                   push edi
// 0078e772  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078e776  8bf1                 mov esi, ecx
// 0078e778  83ff1a               cmp edi, 0x1a
// 0078e77b  7405                 je 0x78e782
// 0078e77d  83ff15               cmp edi, 0x15
// 0078e780  751c                 jne 0x78e79e
// 0078e782  e859ffffff           call 0x78e6e0
// 0078e787  8b10                 mov edx, dword ptr [eax]
// 0078e789  8bc8                 mov ecx, eax
// 0078e78b  8b4204               mov eax, dword ptr [edx + 4]
// 0078e78e  ffd0                 call eax
// 0078e790  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078e793  6a00                 push 0
// 0078e795  6a00                 push 0
// 0078e797  51                   push ecx
// 0078e798  ff15182e8000         call dword ptr [0x802e18]
// 0078e79e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078e7a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078e7a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078e7aa  52                   push edx
// 0078e7ab  50                   push eax
// 0078e7ac  51                   push ecx
// 0078e7ad  57                   push edi
// 0078e7ae  8bce                 mov ecx, esi
// 0078e7b0  e84b20f1ff           call 0x6a0800
// 0078e7b5  5f                   pop edi
// 0078e7b6  5e                   pop esi
// 0078e7b7  c21000               ret 0x10
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
