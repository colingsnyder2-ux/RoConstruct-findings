// from server: 60% by colin
// roc 2007-08 00651e40  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651e40
//
// 00651e40  83b9bc02000000       cmp dword ptr [ecx + 0x2bc], 0
// 00651e47  7421                 je 0x651e6a
// 00651e49  8b01                 mov eax, dword ptr [ecx]
// 00651e4b  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651e51  ffd2                 call edx
// 00651e53  8b10                 mov edx, dword ptr [eax]
// 00651e55  8bc8                 mov ecx, eax
// 00651e57  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 00651e5d  ffd0                 call eax
// 00651e5f  85c0                 test eax, eax
// 00651e61  7407                 je 0x651e6a
// 00651e63  b801000000           mov eax, 1
// 00651e68  eb02                 jmp 0x651e6c
// 00651e6a  33c0                 xor eax, eax
// 00651e6c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00651e70  8b11                 mov edx, dword ptr [ecx]
// 00651e72  89442404             mov dword ptr [esp + 4], eax
// 00651e76  8b02                 mov eax, dword ptr [edx]
// 00651e78  ffe0                 jmp eax

struct XTP_REPORTRECORDITEM_DRAWARGS {
    char pad[0x2bc];
    int field_2bc;
    bool f();
};

bool XTP_REPORTRECORDITEM_DRAWARGS::f() {
    if (field_2bc != 0) {
        int* p = (int*)(*(int (__thiscall**)(void*))((*(int*)this) + 0x18c))(this);
        int r = ((int (__thiscall*)(void*))((*(int*)p) + 0x15c))(p);
        if (r != 0)
            return true;
    }
    return false;
}
