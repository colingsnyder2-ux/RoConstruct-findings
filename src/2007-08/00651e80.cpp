// from server: 64% by colin
// roc 2007-08 00651e80  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651e80
//
// 00651e80  83b9c002000000       cmp dword ptr [ecx + 0x2c0], 0
// 00651e87  7421                 je 0x651eaa
// 00651e89  8b01                 mov eax, dword ptr [ecx]
// 00651e8b  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651e91  ffd2                 call edx
// 00651e93  8b10                 mov edx, dword ptr [eax]
// 00651e95  8bc8                 mov ecx, eax
// 00651e97  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00651e9d  ffd0                 call eax
// 00651e9f  85c0                 test eax, eax
// 00651ea1  7407                 je 0x651eaa
// 00651ea3  b801000000           mov eax, 1
// 00651ea8  eb02                 jmp 0x651eac
// 00651eaa  33c0                 xor eax, eax
// 00651eac  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00651eb0  8b11                 mov edx, dword ptr [ecx]
// 00651eb2  89442404             mov dword ptr [esp + 4], eax
// 00651eb6  8b02                 mov eax, dword ptr [edx]
// 00651eb8  ffe0                 jmp eax

struct XTP_REPORTRECORDITEM_DRAWARGS {
    char pad[0x2c0];
    int field_2c0;
    int IsValid();
};

int XTP_REPORTRECORDITEM_DRAWARGS::IsValid() {
    if (field_2c0 != 0) {
        int* obj;
        typedef int* (__thiscall *Fn1)(void*);
        Fn1 f1 = *(Fn1*)(*(int*)this + 0x18c);
        obj = f1(this);
        typedef int (__thiscall *Fn2)(void*);
        Fn2 f2 = *(Fn2*)(*(int*)obj + 0x164);
        if (f2(obj) != 0) {
            return 1;
        }
    }
    return 0;
}
