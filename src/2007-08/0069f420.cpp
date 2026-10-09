// from server: 100% by colin
// roc 2007-08 0069f420  unit: CXTCaptionButton  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f420
//
// 0069f420  56                   push esi
// 0069f421  57                   push edi
// 0069f422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069f426  83ff1a               cmp edi, 0x1a
// 0069f429  8bf1                 mov esi, ecx
// 0069f42b  7405                 je 0x69f432
// 0069f42d  83ff15               cmp edi, 0x15
// 0069f430  751c                 jne 0x69f44e
// 0069f432  e8591b0700           call 0x710f90
// 0069f437  8b10                 mov edx, dword ptr [eax]
// 0069f439  8bc8                 mov ecx, eax
// 0069f43b  8b4204               mov eax, dword ptr [edx + 4]
// 0069f43e  ffd0                 call eax
// 0069f440  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0069f443  6a00                 push 0
// 0069f445  6a00                 push 0
// 0069f447  51                   push ecx
// 0069f448  ff15dcec7700         call dword ptr [0x77ecdc]
// 0069f44e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069f452  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069f456  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069f45a  52                   push edx
// 0069f45b  50                   push eax
// 0069f45c  51                   push ecx
// 0069f45d  57                   push edi
// 0069f45e  8bce                 mov ecx, esi
// 0069f460  e8eb000000           call 0x69f550
// 0069f465  5f                   pop edi
// 0069f466  5e                   pop esi
// 0069f467  c21000               ret 0x10

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
