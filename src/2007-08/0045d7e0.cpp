// from server: 100% by colin
// roc 2007-08 0045d7e0  unit: Scintilla::CScintillaView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d7e0
//
// 0045d7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0045d7e4  53                   push ebx
// 0045d7e5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0045d7e9  56                   push esi
// 0045d7ea  57                   push edi
// 0045d7eb  6a01                 push 1
// 0045d7ed  8d7958               lea edi, [ecx + 0x58]
// 0045d7f0  53                   push ebx
// 0045d7f1  50                   push eax
// 0045d7f2  8bcf                 mov ecx, edi
// 0045d7f4  e837f0ffff           call 0x45c830
// 0045d7f9  8bf0                 mov esi, eax
// 0045d7fb  83feff               cmp esi, -1
// 0045d7fe  7413                 je 0x45d813
// 0045d800  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0045d803  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0045d806  6a01                 push 1
// 0045d808  51                   push ecx
// 0045d809  52                   push edx
// 0045d80a  8bcf                 mov ecx, edi
// 0045d80c  e8eff0ffff           call 0x45c900
// 0045d811  8bc6                 mov eax, esi
// 0045d813  5f                   pop edi
// 0045d814  5e                   pop esi
// 0045d815  5b                   pop ebx
// 0045d816  c20800               ret 8

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
