// roc 2009-12 0046b660  unit: Scintilla::CScintillaFindReplaceDlg  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b660
//
// 0046b660  56                   push esi
// 0046b661  8bf1                 mov esi, ecx
// 0046b663  e8b6843800           call 0x7f3b1e
// 0046b668  8b400c               mov eax, dword ptr [eax + 0xc]
// 0046b66b  818e8000000000020000 or dword ptr [esi + 0x80], 0x200
// 0046b675  8b542418             mov edx, dword ptr [esp + 0x18]
// 0046b679  89467c               mov dword ptr [esi + 0x7c], eax
// 0046b67c  8b442408             mov eax, dword ptr [esp + 8]
// 0046b680  8bc8                 mov ecx, eax
// 0046b682  f7d9                 neg ecx
// 0046b684  1bc9                 sbb ecx, ecx
// 0046b686  83c166               add ecx, 0x66
// 0046b689  52                   push edx
// 0046b68a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046b68e  898e98000000         mov dword ptr [esi + 0x98], ecx
// 0046b694  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046b698  51                   push ecx
// 0046b699  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046b69d  52                   push edx
// 0046b69e  51                   push ecx
// 0046b69f  50                   push eax
// 0046b6a0  8bce                 mov ecx, esi
// 0046b6a2  e883903800           call 0x7f472a
// 0046b6a7  5e                   pop esi
// 0046b6a8  c21400               ret 0x14
// copied from an identical function in another client (function ?Init@CScintillaFindReplaceDlg@ns_ROCX000003@ns_ROCX00000a@@QAEXHHHHH@Z)

namespace ns_ROCX000003 {
namespace ns_ROCX00001e {
struct ScintillaView {
    void OnCancelMode();
};

void ScintillaView::OnCancelMode()
{
    struct VTable {
        char pad[0x1a8];
        void (__thiscall *fn)(void *, int);
    };
    VTable *vt = *(VTable **)this;
    vt->fn(this, 1);
}
}
}
