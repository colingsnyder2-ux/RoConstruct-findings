// from server: 100% by colin
// roc 2007-08 0045dde0  unit: Scintilla::CScintillaFindReplaceDlg  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045dde0
//
// 0045dde0  56                   push esi
// 0045dde1  8bf1                 mov esi, ecx
// 0045dde3  e81a211d00           call 0x62ff02
// 0045dde8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0045ddeb  818e8000000000020000 or dword ptr [esi + 0x80], 0x200
// 0045ddf5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0045ddf9  89467c               mov dword ptr [esi + 0x7c], eax
// 0045ddfc  8b442408             mov eax, dword ptr [esp + 8]
// 0045de00  8bc8                 mov ecx, eax
// 0045de02  f7d9                 neg ecx
// 0045de04  1bc9                 sbb ecx, ecx
// 0045de06  83c166               add ecx, 0x66
// 0045de09  52                   push edx
// 0045de0a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0045de0e  898e98000000         mov dword ptr [esi + 0x98], ecx
// 0045de14  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045de18  51                   push ecx
// 0045de19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045de1d  52                   push edx
// 0045de1e  51                   push ecx
// 0045de1f  50                   push eax
// 0045de20  8bce                 mov ecx, esi
// 0045de22  e83d2b1d00           call 0x630964
// 0045de27  5e                   pop esi
// 0045de28  c21400               ret 0x14

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
