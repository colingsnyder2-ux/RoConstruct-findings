// from server: 100% by colin
// roc 2008-06 00434500  unit: CMemberTreeView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00434500
//
// 00434500  56                   push esi
// 00434501  8bf1                 mov esi, ecx
// 00434503  e8f2cb2600           call 0x6a10fa
// 00434508  33c0                 xor eax, eax
// 0043450a  c706c42b8100         mov dword ptr [esi], 0x812bc4
// 00434510  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 00434516  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0043451c  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00434522  898600010000         mov dword ptr [esi + 0x100], eax
// 00434528  898604010000         mov dword ptr [esi + 0x104], eax
// 0043452e  898608010000         mov dword ptr [esi + 0x108], eax
// 00434534  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0043453a  898610010000         mov dword ptr [esi + 0x110], eax
// 00434540  8bc6                 mov eax, esi
// 00434542  5e                   pop esi
// 00434543  c3                   ret 

struct Vftable
{
    void* entries[8];
};

const Vftable S_vftable = {0, 0, 0, 0, 0, 0, 0, 0};

struct Base
{
    char storage[0xF4];
};

struct S : Base
{
    unsigned int fields[8];
    S();
};

extern "C" void __stdcall sub_6a10fa();

S::S()
{
    sub_6a10fa();
    *(volatile void**)this = (void*)&S_vftable;
    volatile unsigned int* f = fields;
    f[0] = 0;
    f[1] = 0;
    f[2] = 0;
    f[3] = 0;
    f[4] = 0;
    f[5] = 0;
    f[6] = 0;
    f[7] = 0;
}