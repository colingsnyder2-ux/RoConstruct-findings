// from server: 100% by colin
// roc 2007-08 005b4dc0  unit: RBX::Geometry  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4dc0
//
// 005b4dc0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005b4dc3  85c0                 test eax, eax
// 005b4dc5  7503                 jne 0x5b4dca
// 005b4dc7  8b4108               mov eax, dword ptr [ecx + 8]
// 005b4dca  50                   push eax
// 005b4dcb  e880ffffff           call 0x5b4d50
// 005b4dd0  c3                   ret 

struct Geometry {
    char pad[8];
    int field8;
    char pad2[4];
    int field10;
    void method();
};

void __stdcall helper(int);

void Geometry::method() {
    int v = field10;
    if (v == 0)
        v = field8;
    helper(v);
}
