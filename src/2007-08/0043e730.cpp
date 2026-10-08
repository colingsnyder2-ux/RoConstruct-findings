// from server: 100% by colin
// roc 2007-08 0043e730  unit: Vector3ComponentItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043e730
//
// 0043e730  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 0043e736  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043e73a  8b542408             mov edx, dword ptr [esp + 8]
// 0043e73e  03c0                 add eax, eax
// 0043e740  03c0                 add eax, eax
// 0043e742  d90408               fld dword ptr [eax + ecx]
// 0043e745  d90410               fld dword ptr [eax + edx]
// 0043e748  dae9                 fucompp 
// 0043e74a  dfe0                 fnstsw ax
// 0043e74c  f6c444               test ah, 0x44
// 0043e74f  7a08                 jp 0x43e759
// 0043e751  b801000000           mov eax, 1
// 0043e756  c20800               ret 8
// 0043e759  33c0                 xor eax, eax
// 0043e75b  c20800               ret 8

struct Vector3ComponentItem {
    char pad[0x11c];
    int field_0x11c;
    bool compare(const float* a, const float* b) const;
};

bool Vector3ComponentItem::compare(const float* a, const float* b) const {
    int idx = field_0x11c;
    idx += idx;
    idx += idx;
    float x = *(const float*)((const char*)a + idx);
    float y = *(const float*)((const char*)b + idx);
    return x == y;
}
