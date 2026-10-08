// from server: 100% by colin
// roc 2007-08 0061c1f0  unit: RBX::ImageKeyButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c1f0
//
// 0061c1f0  56                   push esi
// 0061c1f1  8b742408             mov esi, dword ptr [esp + 8]
// 0061c1f5  56                   push esi
// 0061c1f6  81c108010000         add ecx, 0x108
// 0061c1fc  e8cf48feff           call 0x600ad0
// 0061c201  8bc6                 mov eax, esi
// 0061c203  5e                   pop esi
// 0061c204  c20400               ret 4

struct Sub_00600ad0 {
    void method(int);
};

struct S_0061c1f0 {
    char pad[0x108];
    Sub_00600ad0 sub;
    int m(int arg);
};

int S_0061c1f0::m(int arg)
{
    sub.method(arg);
    return arg;
}
