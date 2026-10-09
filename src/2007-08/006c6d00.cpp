// from server: 90% by colin
// roc 2007-08 006c6d00  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6d00
//
// 006c6d00  53                   push ebx
// 006c6d01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006c6d05  55                   push ebp
// 006c6d06  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006c6d0a  56                   push esi
// 006c6d0b  8bf1                 mov esi, ecx
// 006c6d0d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006c6d10  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 006c6d16  85c9                 test ecx, ecx
// 006c6d18  57                   push edi
// 006c6d19  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c6d1d  7408                 je 0x6c6d27
// 006c6d1f  57                   push edi
// 006c6d20  53                   push ebx
// 006c6d21  55                   push ebp
// 006c6d22  e869d0f7ff           call 0x643d90
// 006c6d27  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c6d2b  51                   push ecx
// 006c6d2c  57                   push edi
// 006c6d2d  53                   push ebx
// 006c6d2e  55                   push ebp
// 006c6d2f  8bce                 mov ecx, esi
// 006c6d31  e8a690f6ff           call 0x62fddc
// 006c6d36  5f                   pop edi
// 006c6d37  5e                   pop esi
// 006c6d38  5d                   pop ebp
// 006c6d39  5b                   pop ebx
// 006c6d3a  c21000               ret 0x10

struct CXTPControlComboBoxEditCtrl {
    char pad[0x5c];
    void* field_5c;
    void OnNotify(int, int, int, int);
};

extern "C" void __stdcall sub_643d90(void*, int, int, int);
extern "C" void __stdcall sub_62fddc(CXTPControlComboBoxEditCtrl*, int, int, int, int);

void CXTPControlComboBoxEditCtrl::OnNotify(int a, int b, int c, int d) {
    void* p = field_5c;
    int* q = *(int**)((char*)p + 0xfc);
    if (q != 0) {
        sub_643d90(q, a, b, c);
    }
    sub_62fddc(this, a, b, c, d);
}
