// roc 2008-06 00461e40  unit: Scintilla::CScintillaFindReplaceDlg  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461e40
//
// 00461e40  56                   push esi
// 00461e41  8bf1                 mov esi, ecx
// 00461e43  e8deea2300           call 0x6a0926
// 00461e48  8b400c               mov eax, dword ptr [eax + 0xc]
// 00461e4b  818e8000000000020000 or dword ptr [esi + 0x80], 0x200
// 00461e55  8b542418             mov edx, dword ptr [esp + 0x18]
// 00461e59  89467c               mov dword ptr [esi + 0x7c], eax
// 00461e5c  8b442408             mov eax, dword ptr [esp + 8]
// 00461e60  8bc8                 mov ecx, eax
// 00461e62  f7d9                 neg ecx
// 00461e64  1bc9                 sbb ecx, ecx
// 00461e66  83c166               add ecx, 0x66
// 00461e69  52                   push edx
// 00461e6a  8b542414             mov edx, dword ptr [esp + 0x14]
// 00461e6e  898e98000000         mov dword ptr [esi + 0x98], ecx
// 00461e74  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00461e78  51                   push ecx
// 00461e79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00461e7d  52                   push edx
// 00461e7e  51                   push ecx
// 00461e7f  50                   push eax
// 00461e80  8bce                 mov ecx, esi
// 00461e82  e88bf52300           call 0x6a1412
// 00461e87  5e                   pop esi
// 00461e88  c21400               ret 0x14
// copied from an identical function in another client (function ?Init@CScintillaFindReplaceDlg@ns_ROCX000008@@QAEXHHHHH@Z)

namespace ns_ROCX000008 {
struct CScintillaFindReplaceDlg {
    char pad[0x7c];
    int field_7c;
    unsigned int flags_80;
    char pad2[0x14];
    int field_98;
    void Init(int a, int b, int c, int d, int e);
    void method_630964(int a, int b, int c, int d, int e);
};

extern "C" void* __stdcall sub_62FF02();

void CScintillaFindReplaceDlg::Init(int a, int b, int c, int d, int e) {
    void* p = sub_62FF02();
    int v = *(int*)((char*)p + 0xc);
    this->flags_80 |= 0x200;
    this->field_7c = v;
    this->field_98 = (a == 0) ? 0x66 : 0x65;
    this->method_630964(a, b, c, d, e);
}
}
