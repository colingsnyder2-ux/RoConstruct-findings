// roc 2007-03 0045af50  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045af50
//
// 0045af50  8b442404             mov eax, dword ptr [esp + 4]
// 0045af54  53                   push ebx
// 0045af55  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0045af59  56                   push esi
// 0045af5a  57                   push edi
// 0045af5b  6a01                 push 1
// 0045af5d  8d7958               lea edi, [ecx + 0x58]
// 0045af60  53                   push ebx
// 0045af61  50                   push eax
// 0045af62  8bcf                 mov ecx, edi
// 0045af64  e857f0ffff           call 0x459fc0
// 0045af69  8bf0                 mov esi, eax
// 0045af6b  83feff               cmp esi, -1
// 0045af6e  7413                 je 0x45af83
// 0045af70  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0045af73  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0045af76  6a01                 push 1
// 0045af78  51                   push ecx
// 0045af79  52                   push edx
// 0045af7a  8bcf                 mov ecx, edi
// 0045af7c  e80ff1ffff           call 0x45a090
// 0045af81  8bc6                 mov eax, esi
// 0045af83  5f                   pop edi
// 0045af84  5e                   pop esi
// 0045af85  5b                   pop ebx
// 0045af86  c20800               ret 8
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
