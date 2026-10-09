// roc 2007-03 006b2340  unit: seg_006b0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b2340
//
// 006b2340  8b442404             mov eax, dword ptr [esp + 4]
// 006b2344  85c0                 test eax, eax
// 006b2346  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 006b234c  7516                 jne 0x6b2364
// 006b234e  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 006b2354  85c9                 test ecx, ecx
// 006b2356  740c                 je 0x6b2364
// 006b2358  394120               cmp dword ptr [ecx + 0x20], eax
// 006b235b  7407                 je 0x6b2364
// 006b235d  8b01                 mov eax, dword ptr [ecx]
// 006b235f  8b5068               mov edx, dword ptr [eax + 0x68]
// 006b2362  ffd2                 call edx
// 006b2364  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000002@@QAEXPAH@Z)

namespace ns_ROCX000002 {
struct CXTPCustomizeSheet_CCustomizeEdit {
    void SetSomething(int* p);
};

void CXTPCustomizeSheet_CCustomizeEdit::SetSomething(int* p)
{
    *(int**)((char*)this + 0xfc) = p;
    if (p == 0) {
        int* q = *(int**)((char*)this + 0x168);
        if (q != 0 && *(int*)((char*)q + 0x20) != 0) {
            (*(void (__thiscall**)(int*))(*(int*)q + 0x68))(q);
        }
    }
}
}
