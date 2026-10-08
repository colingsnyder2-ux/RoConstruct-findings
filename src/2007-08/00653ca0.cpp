// from server: 65% by colin
// roc 2007-08 00653ca0  unit: CInstanceRecord::CNameItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653ca0
//
// 00653ca0  85c9                 test ecx, ecx
// 00653ca2  7427                 je 0x653ccb
// 00653ca4  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00653ca7  85c0                 test eax, eax
// 00653ca9  7420                 je 0x653ccb
// 00653cab  83784800             cmp dword ptr [eax + 0x48], 0
// 00653caf  741a                 je 0x653ccb
// 00653cb1  83794400             cmp dword ptr [ecx + 0x44], 0
// 00653cb5  7414                 je 0x653ccb
// 00653cb7  8b01                 mov eax, dword ptr [ecx]
// 00653cb9  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 00653cbf  ffd2                 call edx
// 00653cc1  85c0                 test eax, eax
// 00653cc3  7406                 je 0x653ccb
// 00653cc5  b801000000           mov eax, 1
// 00653cca  c3                   ret 
// 00653ccb  33c0                 xor eax, eax
// 00653ccd  c3                   ret 

struct CInstanceRecord_CNameItem {
    void* vtable;
    char pad0[0x40];
    int field44;
    char pad1[0x4];
    void* field4c;
    bool method();
};

bool CInstanceRecord_CNameItem::method() {
    if (this == 0)
        return false;
    void* p = this->field4c;
    if (p == 0)
        return false;
    if (*(int*)((char*)p + 0x48) == 0)
        return false;
    if (this->field44 == 0)
        return false;
    void** vt = *(void***)this;
    int (*fn)(void*) = (int (*)(void*))vt[0x100 / 4];
    if (fn(this) == 0)
        return false;
    return true;
}
