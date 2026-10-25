// from server: 100% by colin
// roc 2008-06 00608830  unit: RBX::BlockBlockContact  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608830
//
// 00608830  56                   push esi
// 00608831  8bf1                 mov esi, ecx
// 00608833  8b4610               mov eax, dword ptr [esi + 0x10]
// 00608836  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00608839  83e880               sub eax, -0x80
// 0060883c  50                   push eax
// 0060883d  83e980               sub ecx, -0x80
// 00608840  e81be3ffff           call 0x606b60
// 00608845  84c0                 test al, al
// 00608847  7419                 je 0x608862
// 00608849  d9ee                 fldz 
// 0060884b  51                   push ecx
// 0060884c  8bce                 mov ecx, esi
// 0060884e  d91c24               fstp dword ptr [esp]
// 00608851  e82aeaffff           call 0x607280
// 00608856  84c0                 test al, al
// 00608858  7408                 je 0x608862
// 0060885a  d905b8c38100         fld dword ptr [0x81c3b8]
// 00608860  eb06                 jmp 0x608868
// 00608862  d90530d08200         fld dword ptr [0x82d030]
// 00608868  8bce                 mov ecx, esi
// 0060886a  d95e54               fstp dword ptr [esi + 0x54]
// 0060886d  e82effffff           call 0x6087a0
// 00608872  d9ee                 fldz 
// 00608874  d85e54               fcomp dword ptr [esi + 0x54]
// 00608877  5e                   pop esi
// 00608878  dfe0                 fnstsw ax
// 0060887a  f6c401               test ah, 1
// 0060887d  7506                 jne 0x608885
// 0060887f  b801000000           mov eax, 1
// 00608884  c3                   ret 
// 00608885  33c0                 xor eax, eax
// 00608887  c3                   ret 

struct Extents {
    float lowX;
    float lowY;
    float lowZ;
    float highX;
    float highY;
    float highZ;
    bool overlapsOrTouches(const Extents& other) const;
};

extern float g_81c3b8;
extern float g_82d030;

struct BlockBlockContact {
    char pad[0xc];
    int field_c;
    int field_10;
    char pad2[0x54 - 0x14];
    float field_54;
    bool check();
    bool testZero(float v);
    void slot0();
};

bool BlockBlockContact::check() {
    if (((Extents*)(field_c + 0x80))->overlapsOrTouches(*(Extents*)(field_10 + 0x80))) {
        if (testZero(0.0f)) {
            field_54 = g_81c3b8;
        } else {
            field_54 = g_82d030;
        }
    } else {
        field_54 = g_82d030;
    }
    slot0();
    return field_54 <= 0.0f;
}
