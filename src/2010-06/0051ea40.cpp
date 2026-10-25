// from server: 100% by tester
// roc 2010-06 0051ea40  unit: CSHA1  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ea40
//
// 0051ea40  8bc1                 mov eax, ecx
// 0051ea42  c780c8090000ffffffff mov dword ptr [eax + 0x9c8], 0xffffffff
// 0051ea4c  c3                   ret 

struct CSHA1 {
    char pad[0x9c8];
    int field_9c8;
    CSHA1* Reset();
};

CSHA1* CSHA1::Reset() {
    field_9c8 = -1;
    return this;
}
