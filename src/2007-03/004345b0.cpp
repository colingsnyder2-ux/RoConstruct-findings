// roc 2007-03 004345b0  unit: seg_00430000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004345b0
//
// 004345b0  8b442404             mov eax, dword ptr [esp + 4]
// 004345b4  56                   push esi
// 004345b5  50                   push eax
// 004345b6  8bf1                 mov esi, ecx
// 004345b8  e817a51e00           call 0x61ead4
// 004345bd  83f8ff               cmp eax, -1
// 004345c0  7506                 jne 0x4345c8
// 004345c2  0bc0                 or eax, eax
// 004345c4  5e                   pop esi
// 004345c5  c20400               ret 4
// 004345c8  8b5660               mov edx, dword ptr [esi + 0x60]
// 004345cb  8b4244               mov eax, dword ptr [edx + 0x44]
// 004345ce  8d4e60               lea ecx, [esi + 0x60]
// 004345d1  ffd0                 call eax
// 004345d3  33c0                 xor eax, eax
// 004345d5  5e                   pop esi
// 004345d6  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CClassTreeView@ns_ROCX000002@@QAEHH@Z)

namespace ns_ROCX000002 {
struct CClassTreeView {
    char pad[0x60];
    void* field_60;
    int FindItem(int item);
};

extern "C" int __stdcall sub_630646(int item);

int CClassTreeView::FindItem(int item)
{
    int result = sub_630646(item);
    if (result == -1)
        return result;
    void** vt = (void**)((char*)field_60 + 0x44);
    typedef int (__thiscall *Fn)(void*);
    Fn fn = (Fn)vt[0];
    fn((char*)this + 0x60);
    return 0;
}
}
