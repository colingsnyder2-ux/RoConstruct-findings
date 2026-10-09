// roc 2007-03 006547b0  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006547b0
//
// 006547b0  8b442404             mov eax, dword ptr [esp + 4]
// 006547b4  83f83e               cmp eax, 0x3e
// 006547b7  7718                 ja 0x6547d1
// 006547b9  8b948164020000       mov edx, dword ptr [ecx + eax*4 + 0x264]
// 006547c0  83faff               cmp edx, -1
// 006547c3  750a                 jne 0x6547cf
// 006547c5  8b848168010000       mov eax, dword ptr [ecx + eax*4 + 0x168]
// 006547cc  c20400               ret 4
// 006547cf  8bc2                 mov eax, edx
// 006547d1  c20400               ret 4
// copied from an identical function in another client (function ?Get@CXTTreeBase@ns_ROCX000027@@QAEHH@Z)

namespace ns_ROCX000027 {
struct CXTTreeBase {
    int Get(int index);
};

int CXTTreeBase::Get(int index) {
    if ((unsigned)index > 0x3e)
        return index;
    int v = *(int*)((char*)this + index * 4 + 0x264);
    if (v == -1)
        return *(int*)((char*)this + index * 4 + 0x168);
    return v;
}
}
