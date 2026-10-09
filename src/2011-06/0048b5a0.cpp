// roc 2011-06 0048b5a0  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b5a0
//
// 0048b5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0048b5a4  53                   push ebx
// 0048b5a5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0048b5a9  56                   push esi
// 0048b5aa  57                   push edi
// 0048b5ab  6a01                 push 1
// 0048b5ad  8d7958               lea edi, [ecx + 0x58]
// 0048b5b0  53                   push ebx
// 0048b5b1  50                   push eax
// 0048b5b2  8bcf                 mov ecx, edi
// 0048b5b4  e857f0ffff           call 0x48a610
// 0048b5b9  8bf0                 mov esi, eax
// 0048b5bb  83feff               cmp esi, -1
// 0048b5be  7413                 je 0x48b5d3
// 0048b5c0  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0048b5c3  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0048b5c6  6a01                 push 1
// 0048b5c8  51                   push ecx
// 0048b5c9  52                   push edx
// 0048b5ca  8bcf                 mov ecx, edi
// 0048b5cc  e80ff1ffff           call 0x48a6e0
// 0048b5d1  8bc6                 mov eax, esi
// 0048b5d3  5f                   pop edi
// 0048b5d4  5e                   pop esi
// 0048b5d5  5b                   pop ebx
// 0048b5d6  c20800               ret 8
// copied from an identical function in another client (function ?SomeMethod@CScintillaView@ns_ROCX000067@@QAEHHH@Z)

namespace ns_ROCX000067 {
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
