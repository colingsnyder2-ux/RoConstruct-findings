// roc 2007-03 00421860  unit: seg_00420000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00421860
//
// 00421860  56                   push esi
// 00421861  8bf1                 mov esi, ecx
// 00421863  e86ace1f00           call 0x61e6d2
// 00421868  83f8ff               cmp eax, -1
// 0042186b  7506                 jne 0x421873
// 0042186d  0bc0                 or eax, eax
// 0042186f  5e                   pop esi
// 00421870  c20400               ret 4
// 00421873  8b4654               mov eax, dword ptr [esi + 0x54]
// 00421876  8b5044               mov edx, dword ptr [eax + 0x44]
// 00421879  8d4e54               lea ecx, [esi + 0x54]
// 0042187c  ffd2                 call edx
// 0042187e  33c0                 xor eax, eax
// 00421880  5e                   pop esi
// 00421881  c20400               ret 4
// copied from an identical function in another client (function ?GetItem@CXTTreeCtrl@ns_ROCX00001c@@QAEHPAX@Z)

namespace ns_ROCX00001c {
struct CXTTreeCtrl {
    char pad[0x54];
    void* m_pSomething;
    int GetItem(void*);
};

extern "C" int __stdcall sub_63023e();

int CXTTreeCtrl::GetItem(void* p)
{
    int result = sub_63023e();
    if (result == -1)
        return result;
    void* pObj = *(void**)((char*)this + 0x54);
    void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))((char*)pObj + 0x44);
    fn((char*)this + 0x54);
    return 0;
}
}
