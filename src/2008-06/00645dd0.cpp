// from server: 100% by king_originala
// roc 2008-06 00645dd0  unit: RBX::RotateVJoint  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645dd0
//
// 00645dd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645dd4  8b542408             mov edx, dword ptr [esp + 8]
// 00645dd8  56                   push esi
// 00645dd9  6a02                 push 2
// 00645ddb  50                   push eax
// 00645ddc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645de0  8bf1                 mov esi, ecx
// 00645de2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00645de6  51                   push ecx
// 00645de7  52                   push edx
// 00645de8  50                   push eax
// 00645de9  8bce                 mov ecx, esi
// 00645deb  e8300b0000           call 0x646920
// 00645df0  d9ee                 fldz 
// 00645df2  d99ec4000000         fstp dword ptr [esi + 0xc4]
// 00645df8  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00645e02  c7067ce18300         mov dword ptr [esi], 0x83e17c
// 00645e08  8bc6                 mov eax, esi
// 00645e0a  5e                   pop esi
// 00645e0b  c21000               ret 0x10

extern unsigned char vtable[];

struct S
{
    void* table;
    char padding[0xbc];
    int state;
    float value;

    S* initialize(int a, int b, int c, int d, int kind);
    S* f(int a, int b, int c, int d);
};

S* S::f(int a, int b, int c, int d)
{
    initialize(a, b, c, d, 2);
    value = 0.0f;
    state = 0;
    table = vtable;
    return this;
}
