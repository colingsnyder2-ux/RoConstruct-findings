// roc 2009-06 00783140  unit: CXTSplitterWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783140
//
// 00783140  56                   push esi
// 00783141  57                   push edi
// 00783142  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00783146  8bf1                 mov esi, ecx
// 00783148  83ff1a               cmp edi, 0x1a
// 0078314b  7405                 je 0x783152
// 0078314d  83ff15               cmp edi, 0x15
// 00783150  751c                 jne 0x78316e
// 00783152  e859f6ffff           call 0x7827b0
// 00783157  8b10                 mov edx, dword ptr [eax]
// 00783159  8bc8                 mov ecx, eax
// 0078315b  8b4204               mov eax, dword ptr [edx + 4]
// 0078315e  ffd0                 call eax
// 00783160  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00783163  6a00                 push 0
// 00783165  6a00                 push 0
// 00783167  51                   push ecx
// 00783168  ff157cee8900         call dword ptr [0x89ee7c]
// 0078316e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00783172  8b442414             mov eax, dword ptr [esp + 0x14]
// 00783176  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078317a  52                   push edx
// 0078317b  50                   push eax
// 0078317c  51                   push ecx
// 0078317d  57                   push edi
// 0078317e  8bce                 mov ecx, esi
// 00783180  e82d5af9ff           call 0x718bb2
// 00783185  5f                   pop edi
// 00783186  5e                   pop esi
// 00783187  c21000               ret 0x10
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
