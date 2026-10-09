// roc 2007-03 0045b6a0  unit: seg_00450000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045b6a0
//
// 0045b6a0  56                   push esi
// 0045b6a1  8bf1                 mov esi, ecx
// 0045b6a3  e8e82c1c00           call 0x61e390
// 0045b6a8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0045b6ab  818e8000000000020000 or dword ptr [esi + 0x80], 0x200
// 0045b6b5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0045b6b9  89467c               mov dword ptr [esi + 0x7c], eax
// 0045b6bc  8b442408             mov eax, dword ptr [esp + 8]
// 0045b6c0  8bc8                 mov ecx, eax
// 0045b6c2  f7d9                 neg ecx
// 0045b6c4  1bc9                 sbb ecx, ecx
// 0045b6c6  83c166               add ecx, 0x66
// 0045b6c9  52                   push edx
// 0045b6ca  8b542414             mov edx, dword ptr [esp + 0x14]
// 0045b6ce  898e98000000         mov dword ptr [esi + 0x98], ecx
// 0045b6d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045b6d8  51                   push ecx
// 0045b6d9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045b6dd  52                   push edx
// 0045b6de  51                   push ecx
// 0045b6df  50                   push eax
// 0045b6e0  8bce                 mov ecx, esi
// 0045b6e2  e8f9361c00           call 0x61ede0
// 0045b6e7  5e                   pop esi
// 0045b6e8  c21400               ret 0x14
// copied from an identical function in another client (function ?Init@CScintillaFindReplaceDlg@ns_ROCX000003@@QAEXHHHHH@Z)

namespace ns_ROCX000003 {
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
