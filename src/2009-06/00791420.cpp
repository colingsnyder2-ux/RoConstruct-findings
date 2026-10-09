// roc 2009-06 00791420  unit: CXTCaptionButton  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791420
//
// 00791420  56                   push esi
// 00791421  57                   push edi
// 00791422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00791426  8bf1                 mov esi, ecx
// 00791428  83ff1a               cmp edi, 0x1a
// 0079142b  7405                 je 0x791432
// 0079142d  83ff15               cmp edi, 0x15
// 00791430  751c                 jne 0x79144e
// 00791432  e839fdffff           call 0x791170
// 00791437  8b10                 mov edx, dword ptr [eax]
// 00791439  8bc8                 mov ecx, eax
// 0079143b  8b4204               mov eax, dword ptr [edx + 4]
// 0079143e  ffd0                 call eax
// 00791440  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00791443  6a00                 push 0
// 00791445  6a00                 push 0
// 00791447  51                   push ecx
// 00791448  ff157cee8900         call dword ptr [0x89ee7c]
// 0079144e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00791452  8b442414             mov eax, dword ptr [esp + 0x14]
// 00791456  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079145a  52                   push edx
// 0079145b  50                   push eax
// 0079145c  51                   push ecx
// 0079145d  57                   push edi
// 0079145e  8bce                 mov ecx, esi
// 00791460  e88b590700           call 0x806df0
// 00791465  5f                   pop edi
// 00791466  5e                   pop esi
// 00791467  c21000               ret 0x10
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
