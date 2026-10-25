// from server: 100% by king_originala
// roc 2008-06 0046a6a0  unit: CWebToolbox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a6a0
//
// 0046a6a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046a6a4  8b542404             mov edx, dword ptr [esp + 4]
// 0046a6a8  56                   push esi
// 0046a6a9  8bf1                 mov esi, ecx
// 0046a6ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046a6af  50                   push eax
// 0046a6b0  51                   push ecx
// 0046a6b1  52                   push edx
// 0046a6b2  8bce                 mov ecx, esi
// 0046a6b4  e81d642300           call 0x6a0ad6
// 0046a6b9  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a6bf  5e                   pop esi
// 0046a6c0  85c9                 test ecx, ecx
// 0046a6c2  7405                 je 0x46a6c9
// 0046a6c4  e85f632300           call 0x6a0a28
// 0046a6c9  c20c00               ret 0xc

struct Tool {
    void update();
};

struct CWebToolbox {
    char padding[0xF8];
    Tool* tool;

    void baseFunction(int a, int b, int c);
    void func_0046a6a0(int a, int b, int c);
};

void CWebToolbox::func_0046a6a0(int a, int b, int c)
{
    baseFunction(a, b, c);
    if (tool)
        tool->update();
}
