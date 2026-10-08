// from server: 100% by colin
// roc 2007-08 00466830  unit: CWebToolbox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466830
//
// 00466830  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 00466836  85c9                 test ecx, ecx
// 00466838  7405                 je 0x46683f
// 0046683a  e8c5971c00           call 0x630004
// 0046683f  b803000000           mov eax, 3
// 00466844  c20c00               ret 0xc

struct SubObj {
    void Method();
};

struct CWebToolbox {
    char pad[0xf4];
    SubObj* field_0xf4;
    int Func(int, int, int);
};

int CWebToolbox::Func(int, int, int)
{
    if (field_0xf4 != 0)
        field_0xf4->Method();
    return 3;
}
