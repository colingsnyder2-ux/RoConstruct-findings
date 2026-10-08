// from server: 96% by colin
// roc 2007-08 00653c60  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653c60
//
// 00653c60  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00653c63  83f8ff               cmp eax, -1
// 00653c66  8b542408             mov edx, dword ptr [esp + 8]
// 00653c6a  7403                 je 0x653c6f
// 00653c6c  894228               mov dword ptr [edx + 0x28], eax
// 00653c6f  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00653c72  83f8ff               cmp eax, -1
// 00653c75  7403                 je 0x653c7a
// 00653c77  894224               mov dword ptr [edx + 0x24], eax
// 00653c7a  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00653c7d  85c0                 test eax, eax
// 00653c7f  7515                 jne 0x653c96
// 00653c81  39413c               cmp dword ptr [ecx + 0x3c], eax
// 00653c84  7413                 je 0x653c99
// 00653c86  8b442404             mov eax, dword ptr [esp + 4]
// 00653c8a  8b4804               mov ecx, dword ptr [eax + 4]
// 00653c8d  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00653c93  83c028               add eax, 0x28
// 00653c96  894220               mov dword ptr [edx + 0x20], eax
// 00653c99  c20800               ret 8

struct CNameItem {
    char pad[0x30];
    int field_0x30;
    int field_0x34;
    int field_0x38;
    int field_0x3c;
    void copyTo(int* dst, int arg2);
};

void CNameItem::copyTo(int* dst, int arg2) {
    int v;
    v = field_0x38;
    if (v != -1) {
        dst[10] = v;
    }
    v = field_0x34;
    if (v != -1) {
        dst[9] = v;
    }
    v = field_0x30;
    if (v == 0) {
        if (field_0x3c == 0) {
            return;
        }
        int* p = (int*)arg2;
        int* q = (int*)p[1];
        v = *(int*)((char*)q + 0xb0) + 0x28;
    }
    dst[8] = v;
}
