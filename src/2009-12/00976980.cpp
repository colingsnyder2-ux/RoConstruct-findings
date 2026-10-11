// from server: 66% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl func_006e80b0(
    void*, DWORD, void*, void*, DWORD);

extern "C" void __cdecl func_007f4929(void*);

void func_00976980()
{
    func_006e80b0(
        (void*)0x00b939b0,
        0x13c,
        (void*)0x009db3cc,
        (void*)0x009db3dc,
        1);
    func_007f4929((void*)0x00986940);
}
