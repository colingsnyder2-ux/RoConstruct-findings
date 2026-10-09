// roc 2009-06 004625e0  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004625e0
//
// 004625e0  8b442404             mov eax, dword ptr [esp + 4]
// 004625e4  53                   push ebx
// 004625e5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004625e9  56                   push esi
// 004625ea  57                   push edi
// 004625eb  6a01                 push 1
// 004625ed  8d7958               lea edi, [ecx + 0x58]
// 004625f0  53                   push ebx
// 004625f1  50                   push eax
// 004625f2  8bcf                 mov ecx, edi
// 004625f4  e867f0ffff           call 0x461660
// 004625f9  8bf0                 mov esi, eax
// 004625fb  83feff               cmp esi, -1
// 004625fe  7413                 je 0x462613
// 00462600  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00462603  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00462606  6a01                 push 1
// 00462608  51                   push ecx
// 00462609  52                   push edx
// 0046260a  8bcf                 mov ecx, edi
// 0046260c  e81ff1ffff           call 0x461730
// 00462611  8bc6                 mov eax, esi
// 00462613  5f                   pop edi
// 00462614  5e                   pop esi
// 00462615  5b                   pop ebx
// 00462616  c20800               ret 8
// copied from an identical function in another client (function ?SomeMethod@CScintillaView@ns_ROCX00001e@@QAEHHH@Z)

namespace ns_ROCX00001e {
struct CScintillaView {
    char pad[0x58];
    int field_58;
    int InsertText(int pos, int length, const char* text);
    int ReplaceSel(int pos, int length, const char* text);
    int SomeMethod(int a, int b);
};

int CScintillaView::SomeMethod(int a, int b) {
    int* self = (int*)((char*)this + 0x58);
    int result = ((CScintillaView*)self)->InsertText(a, b, (const char*)1);
    if (result != -1) {
        ((CScintillaView*)self)->ReplaceSel(*(int*)(b + 0xc), *(int*)(b + 0x10), (const char*)1);
    }
    return result;
}
}
