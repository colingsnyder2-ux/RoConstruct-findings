// from server: 100% by king_originala
// roc 2008-06 00645d90  unit: RBX::RotateVJoint  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645d90
//
// 00645d90  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645d94  8b542408             mov edx, dword ptr [esp + 8]
// 00645d98  56                   push esi
// 00645d99  6a02                 push 2
// 00645d9b  50                   push eax
// 00645d9c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645da0  8bf1                 mov esi, ecx
// 00645da2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00645da6  51                   push ecx
// 00645da7  52                   push edx
// 00645da8  50                   push eax
// 00645da9  8bce                 mov ecx, esi
// 00645dab  e8700b0000           call 0x646920
// 00645db0  d9ee                 fldz 
// 00645db2  d99ec4000000         fstp dword ptr [esi + 0xc4]
// 00645db8  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00645dc2  c7063ce18300         mov dword ptr [esi], 0x83e13c
// 00645dc8  8bc6                 mov eax, esi
// 00645dca  5e                   pop esi
// 00645dcb  c21000               ret 0x10

extern unsigned char table_0083e13c[];

struct S
{
    void* table;
    char padding[0xbc];
    int state;
    float value;

    void initialize(int a, int b, int c, int d, int kind);
    S* f(int a, int b, int c, int d);
};

S* S::f(int a, int b, int c, int d)
{
    initialize(a, b, c, d, 2);
    value = 0.0f;
    state = 0;
    table = table_0083e13c;
    return this;
}
