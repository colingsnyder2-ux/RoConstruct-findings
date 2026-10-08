// from server: 100% by colin
// roc 2007-08 0063a0d0  unit: CRobloxControlColorSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a0d0
//
// 0063a0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0063a0d4  85c0                 test eax, eax
// 0063a0d6  898100010000         mov dword ptr [ecx + 0x100], eax
// 0063a0dc  7517                 jne 0x63a0f5
// 0063a0de  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0063a0e4  8b01                 mov eax, dword ptr [ecx]
// 0063a0e6  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0063a0ec  83e2df               and edx, 0xffffffdf
// 0063a0ef  89542404             mov dword ptr [esp + 4], edx
// 0063a0f3  ffe0                 jmp eax
// 0063a0f5  c20400               ret 4

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
