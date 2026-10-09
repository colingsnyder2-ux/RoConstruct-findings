// roc 2007-03 00711670  unit: seg_00710000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711670
//
// 00711670  8b442404             mov eax, dword ptr [esp + 4]
// 00711674  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0071167a  85d2                 test edx, edx
// 0071167c  7412                 je 0x711690
// 0071167e  394268               cmp dword ptr [edx + 0x68], eax
// 00711681  7508                 jne 0x71168b
// 00711683  b801000000           mov eax, 1
// 00711688  c20400               ret 4
// 0071168b  39426c               cmp dword ptr [edx + 0x6c], eax
// 0071168e  74f3                 je 0x711683
// 00711690  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00711693  3b8164020000         cmp eax, dword ptr [ecx + 0x264]
// 00711699  74e8                 je 0x711683
// 0071169b  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 007116a1  74e0                 je 0x711683
// 007116a3  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 007116a9  74d8                 je 0x711683
// 007116ab  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 007116b1  74d0                 je 0x711683
// 007116b3  33d2                 xor edx, edx
// 007116b5  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 007116bb  0f94c2               sete dl
// 007116be  8bc2                 mov eax, edx
// 007116c0  c20400               ret 4
// copied from an identical function in another client (function ?IsItemInGroup@CXTPRibbonControls@ns_ROCX000005@@QAEHPAX@Z)

namespace ns_ROCX000005 {
struct CXTPRibbonControls {
    char pad[0x20];
    void* field20;
    int IsItemInGroup(void* item);
};

int CXTPRibbonControls::IsItemInGroup(void* item) {
    void* p = *(void**)((char*)item + 0x154);
    if (p != 0) {
        if (*(void**)((char*)p + 0x68) == item)
            return 1;
        if (*(void**)((char*)p + 0x6c) == item)
            return 1;
    }
    void* c = *(void**)((char*)field20 + 0x264);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x268);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x26c);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x1d0);
    if (item == c)
        return 1;
    return item == *(void**)((char*)field20 + 0x1d4);
}
}
