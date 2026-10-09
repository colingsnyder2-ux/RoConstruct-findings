// from server: 75% by colin
// roc 2007-08 0067ffa0  unit: CXTPPrintingDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ffa0
//
// 0067ffa0  56                   push esi
// 0067ffa1  8b742408             mov esi, dword ptr [esp + 8]
// 0067ffa5  85f6                 test esi, esi
// 0067ffa7  57                   push edi
// 0067ffa8  8bf9                 mov edi, ecx
// 0067ffaa  7504                 jne 0x67ffb0
// 0067ffac  33c0                 xor eax, eax
// 0067ffae  eb03                 jmp 0x67ffb3
// 0067ffb0  8b4620               mov eax, dword ptr [esi + 0x20]
// 0067ffb3  50                   push eax
// 0067ffb4  ff15bced7700         call dword ptr [0x77edbc]
// 0067ffba  85c0                 test eax, eax
// 0067ffbc  7425                 je 0x67ffe3
// 0067ffbe  85f6                 test esi, esi
// 0067ffc0  750f                 jne 0x67ffd1
// 0067ffc2  57                   push edi
// 0067ffc3  56                   push esi
// 0067ffc4  ff15d4ed7700         call dword ptr [0x77edd4]
// 0067ffca  8bc7                 mov eax, edi
// 0067ffcc  5f                   pop edi
// 0067ffcd  5e                   pop esi
// 0067ffce  c20400               ret 4
// 0067ffd1  8b7620               mov esi, dword ptr [esi + 0x20]
// 0067ffd4  57                   push edi
// 0067ffd5  56                   push esi
// 0067ffd6  ff15d4ed7700         call dword ptr [0x77edd4]
// 0067ffdc  8bc7                 mov eax, edi
// 0067ffde  5f                   pop edi
// 0067ffdf  5e                   pop esi
// 0067ffe0  c20400               ret 4
// 0067ffe3  57                   push edi
// 0067ffe4  ff1514ee7700         call dword ptr [0x77ee14]
// 0067ffea  8bc7                 mov eax, edi
// 0067ffec  5f                   pop edi
// 0067ffed  5e                   pop esi
// 0067ffee  c20400               ret 4

extern "C" int __stdcall IsWindow(int);
extern "C" int __stdcall GetWindowRect(int, int*);
extern "C" int __stdcall SetRectEmpty(int*);

struct CXTPPrintingDialog {
    int field_0x20;
    int sub_67ffa0(int* param);
};

int CXTPPrintingDialog::sub_67ffa0(int* param)
{
    int result;
    if (param == 0) {
        result = 0;
    } else {
        result = param[8];
    }
    if (IsWindow(result)) {
        if (param == 0) {
            SetRectEmpty((int*)this);
        } else {
            SetRectEmpty((int*)param[8]);
        }
    } else {
        GetWindowRect((int)this, (int*)this);
    }
    return (int)this;
}
