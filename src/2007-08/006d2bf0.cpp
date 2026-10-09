// from server: 96% by colin
// roc 2007-08 006d2bf0  unit: CXTPReportHyperlinks  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2bf0
//
// 006d2bf0  56                   push esi
// 006d2bf1  8bf1                 mov esi, ecx
// 006d2bf3  8b06                 mov eax, dword ptr [esi]
// 006d2bf5  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d2bf8  57                   push edi
// 006d2bf9  ffd2                 call edx
// 006d2bfb  8bf8                 mov edi, eax
// 006d2bfd  83ef01               sub edi, 1
// 006d2c00  781a                 js 0x6d2c1c
// 006d2c02  8b06                 mov eax, dword ptr [esi]
// 006d2c04  8b5064               mov edx, dword ptr [eax + 0x64]
// 006d2c07  57                   push edi
// 006d2c08  8bce                 mov ecx, esi
// 006d2c0a  ffd2                 call edx
// 006d2c0c  85c0                 test eax, eax
// 006d2c0e  7407                 je 0x6d2c17
// 006d2c10  8bc8                 mov ecx, eax
// 006d2c12  e8cdd5f5ff           call 0x6301e4
// 006d2c17  83ef01               sub edi, 1
// 006d2c1a  79e6                 jns 0x6d2c02
// 006d2c1c  6aff                 push -1
// 006d2c1e  6a00                 push 0
// 006d2c20  8d4e20               lea ecx, [esi + 0x20]
// 006d2c23  e888ce0200           call 0x6ffab0
// 006d2c28  5f                   pop edi
// 006d2c29  5e                   pop esi
// 006d2c2a  c3                   ret 

struct CXTPReportHyperlinks {
    char pad[0x20];
    int field_20;
    void method();
};

extern "C" int __fastcall sub_6301e4(int);
extern "C" int __fastcall sub_6ffab0(int*, int, int);

void CXTPReportHyperlinks::method()
{
    int count = (*(int (__thiscall**)(CXTPReportHyperlinks*))((*(int*)this) + 0x58))(this);
    int i = count - 1;
    if (i >= 0) {
        do {
            int item = (*(int (__thiscall**)(CXTPReportHyperlinks*, int))((*(int*)this) + 0x64))(this, i);
            if (item != 0)
                sub_6301e4(item);
            i--;
        } while (i >= 0);
    }
    sub_6ffab0(&this->field_20, 0, -1);
}
