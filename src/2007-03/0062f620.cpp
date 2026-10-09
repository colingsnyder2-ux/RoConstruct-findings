// roc 2007-03 0062f620  unit: seg_00620000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f620
//
// 0062f620  8b442404             mov eax, dword ptr [esp + 4]
// 0062f624  85c0                 test eax, eax
// 0062f626  898100010000         mov dword ptr [ecx + 0x100], eax
// 0062f62c  7517                 jne 0x62f645
// 0062f62e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0062f634  8b01                 mov eax, dword ptr [ecx]
// 0062f636  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0062f63c  83e2df               and edx, 0xffffffdf
// 0062f63f  89542404             mov dword ptr [esp + 4], edx
// 0062f643  ffe0                 jmp eax
// 0062f645  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CRobloxControlColorSelector@ns_ROCX000005@@QAEXH@Z)

namespace ns_ROCX000005 {
struct CRobloxControlColorSelector {
    void SetSomething(int value);
};

void CRobloxControlColorSelector::SetSomething(int value) {
    *(int*)((char*)this + 0x100) = value;
    if (value == 0) {
        int flags = *(int*)((char*)this + 0xd0);
        void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))(*(int*)this + 0x94);
        flags &= 0xffffffdf;
        fn(this, flags);
    }
}
}
