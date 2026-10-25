// from server: 100% by king_originala
// roc 2008-06 0046a7c0  unit: CWebToolbox  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a7c0
//
// 0046a7c0  56                   push esi
// 0046a7c1  8bf1                 mov esi, ecx
// 0046a7c3  e8a0642300           call 0x6a0c68
// 0046a7c8  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a7ce  5e                   pop esi
// 0046a7cf  85c9                 test ecx, ecx
// 0046a7d1  7405                 je 0x46a7d8
// 0046a7d3  e850622300           call 0x6a0a28
// 0046a7d8  c20c00               ret 0xc

struct Tool {
    void update();
};

struct CWebToolbox {
    char padding[0xf8];
    Tool* tool;

    void prepare();
    void f(int, int, int);
};

void CWebToolbox::f(int, int, int)
{
    prepare();
    if (tool)
        tool->update();
}
