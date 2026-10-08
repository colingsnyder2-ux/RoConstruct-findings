// from server: 56% by colin
// roc 2007-08 00625150  unit: RBX::ArrowButton  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625150
//
// 00625150  d9e8                 fld1 
// 00625152  d9c0                 fld st(0)
// 00625154  d8a198010000         fsub dword ptr [ecx + 0x198]
// 0062515a  d889e0010000         fmul dword ptr [ecx + 0x1e0]
// 00625160  dee9                 fsubp st(1)
// 00625162  d81db07e7900         fcomp dword ptr [0x797eb0]
// 00625168  dfe0                 fnstsw ax
// 0062516a  f6c441               test ah, 0x41
// 0062516d  7506                 jne 0x625175
// 0062516f  b801000000           mov eax, 1
// 00625174  c3                   ret 
// 00625175  33c0                 xor eax, eax
// 00625177  c3                   ret 

struct ArrowButton {
    char pad[0x198];
    float field198;
    char pad2[0x1e0 - 0x198 - 4];
    float field1e0;
    bool check() const;
};

bool ArrowButton::check() const {
    float a = 1.0f;
    float b = 1.0f - field198;
    b = b * field1e0;
    a = a - b;
    return a > 0.0f;
}
