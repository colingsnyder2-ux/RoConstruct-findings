// roc 2008-06 00461970  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461970
//
// 00461970  8b442404             mov eax, dword ptr [esp + 4]
// 00461974  53                   push ebx
// 00461975  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00461979  56                   push esi
// 0046197a  57                   push edi
// 0046197b  6a01                 push 1
// 0046197d  8d7958               lea edi, [ecx + 0x58]
// 00461980  53                   push ebx
// 00461981  50                   push eax
// 00461982  8bcf                 mov ecx, edi
// 00461984  e867f0ffff           call 0x4609f0
// 00461989  8bf0                 mov esi, eax
// 0046198b  83feff               cmp esi, -1
// 0046198e  7413                 je 0x4619a3
// 00461990  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00461993  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00461996  6a01                 push 1
// 00461998  51                   push ecx
// 00461999  52                   push edx
// 0046199a  8bcf                 mov ecx, edi
// 0046199c  e81ff1ffff           call 0x460ac0
// 004619a1  8bc6                 mov eax, esi
// 004619a3  5f                   pop edi
// 004619a4  5e                   pop esi
// 004619a5  5b                   pop ebx
// 004619a6  c20800               ret 8
// copied from an identical function in another client (function ?SomeMethod@CScintillaView@ns_ROCX000036@@QAEHHH@Z)

namespace ns_ROCX000036 {
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
