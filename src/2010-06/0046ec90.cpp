// roc 2010-06 0046ec90  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ec90
//
// 0046ec90  8b442404             mov eax, dword ptr [esp + 4]
// 0046ec94  53                   push ebx
// 0046ec95  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046ec99  56                   push esi
// 0046ec9a  57                   push edi
// 0046ec9b  6a01                 push 1
// 0046ec9d  8d7958               lea edi, [ecx + 0x58]
// 0046eca0  53                   push ebx
// 0046eca1  50                   push eax
// 0046eca2  8bcf                 mov ecx, edi
// 0046eca4  e857f0ffff           call 0x46dd00
// 0046eca9  8bf0                 mov esi, eax
// 0046ecab  83feff               cmp esi, -1
// 0046ecae  7413                 je 0x46ecc3
// 0046ecb0  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0046ecb3  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0046ecb6  6a01                 push 1
// 0046ecb8  51                   push ecx
// 0046ecb9  52                   push edx
// 0046ecba  8bcf                 mov ecx, edi
// 0046ecbc  e80ff1ffff           call 0x46ddd0
// 0046ecc1  8bc6                 mov eax, esi
// 0046ecc3  5f                   pop edi
// 0046ecc4  5e                   pop esi
// 0046ecc5  5b                   pop ebx
// 0046ecc6  c20800               ret 8
// copied from an identical function in another client (function ?SomeMethod@CScintillaView@ns_ROCX000028@@QAEHHH@Z)

namespace ns_ROCX000028 {
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
