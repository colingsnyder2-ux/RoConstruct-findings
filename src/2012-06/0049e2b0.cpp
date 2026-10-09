// roc 2012-06 0049e2b0  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e2b0
//
// 0049e2b0  8b442404             mov eax, dword ptr [esp + 4]
// 0049e2b4  53                   push ebx
// 0049e2b5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0049e2b9  56                   push esi
// 0049e2ba  57                   push edi
// 0049e2bb  6a01                 push 1
// 0049e2bd  8d7958               lea edi, [ecx + 0x58]
// 0049e2c0  53                   push ebx
// 0049e2c1  50                   push eax
// 0049e2c2  8bcf                 mov ecx, edi
// 0049e2c4  e877f0ffff           call 0x49d340
// 0049e2c9  8bf0                 mov esi, eax
// 0049e2cb  83feff               cmp esi, -1
// 0049e2ce  7413                 je 0x49e2e3
// 0049e2d0  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0049e2d3  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0049e2d6  6a01                 push 1
// 0049e2d8  51                   push ecx
// 0049e2d9  52                   push edx
// 0049e2da  8bcf                 mov ecx, edi
// 0049e2dc  e82ff1ffff           call 0x49d410
// 0049e2e1  8bc6                 mov eax, esi
// 0049e2e3  5f                   pop edi
// 0049e2e4  5e                   pop esi
// 0049e2e5  5b                   pop ebx
// 0049e2e6  c20800               ret 8
// copied from an identical function in another client (function ?SomeMethod@CScintillaView@ns_ROCX000000@@QAEHHH@Z)

namespace ns_ROCX000000 {
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
