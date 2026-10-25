// from server: 100% by king_originala
// roc 2008-06 0046a6d0  unit: CWebToolbox  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a6d0
//
// 0046a6d0  8b442404             mov eax, dword ptr [esp + 4]
// 0046a6d4  56                   push esi
// 0046a6d5  50                   push eax
// 0046a6d6  8bf1                 mov esi, ecx
// 0046a6d8  e8d16d2300           call 0x6a14ae
// 0046a6dd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a6e3  5e                   pop esi
// 0046a6e4  85c9                 test ecx, ecx
// 0046a6e6  7405                 je 0x46a6ed
// 0046a6e8  e83b632300           call 0x6a0a28
// 0046a6ed  c20400               ret 4

struct Child
{
    void update();
};

struct CWebToolbox
{
    char padding[0xF8];
    Child* child;

    void baseCall(int value);
    void func_0046a6d0(int value);
};

void CWebToolbox::func_0046a6d0(int value)
{
    baseCall(value);
    if (child)
        child->update();
}
