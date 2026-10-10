// from server: 81% by colin
// roc 2007-08 004bf110  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bf110

struct RakPeer
{
    void func_004c4ab0(int);
};

extern "C" RakPeer* __cdecl func_004bcb80(int, int, int, int);

void __stdcall func_004bf110(int a, int b, int c)
{
    RakPeer* p = func_004bcb80(b, c, 0, 1);
    if (p)
    {
        ((RakPeer*)((char*)p + 0x18))->func_004c4ab0(a);
    }
}
