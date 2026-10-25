// from server: 100% by king_originala
// roc 2008-06 0046f920  unit: RBX::LDraw2Lua::LuaWriter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f920
//
// 0046f920  8b442404             mov eax, dword ptr [esp + 4]
// 0046f924  8d542404             lea edx, [esp + 4]
// 0046f928  52                   push edx
// 0046f929  83c120               add ecx, 0x20
// 0046f92c  89442408             mov dword ptr [esp + 8], eax
// 0046f930  e86b1afbff           call 0x4213a0
// 0046f935  c20400               ret 4

struct Listener
{
    void invoke(const int& value);
};

struct Writer
{
    char padding[32];
    Listener listener;
    void write(int value);
};

void Writer::write(int value)
{
    int copy = value;
    listener.invoke(copy);
}
