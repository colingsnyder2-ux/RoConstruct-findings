// from server: 100% by king_originala
// roc 2008-06 00407380  unit: VCApp::?$CComObject  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407380
//
// 00407380  56                   push esi
// 00407381  8bf1                 mov esi, ecx
// 00407383  e8c8f2ffff           call 0x406650
// 00407388  b850000000           mov eax, 0x50
// 0040738d  c7862812000002000000 mov dword ptr [esi + 0x1228], 2
// 00407397  c7862c12000004000000 mov dword ptr [esi + 0x122c], 4
// 004073a1  66898626120000       mov word ptr [esi + 0x1226], ax
// 004073a8  8b0d70b38000         mov ecx, dword ptr [0x80b370]
// 004073ae  6a04                 push 4
// 004073b0  51                   push ecx
// 004073b1  6a21                 push 0x21
// 004073b3  56                   push esi
// 004073b4  ff15b8288000         call dword ptr [0x8028b8]
// 004073ba  50                   push eax
// 004073bb  e8c0a2ffff           call 0x401680
// 004073c0  83c414               add esp, 0x14
// 004073c3  8bc6                 mov eax, esi
// 004073c5  5e                   pop esi
// 004073c6  c3                   ret 

extern const unsigned char* source;
extern "C" int (__cdecl *copy_bytes)(
    unsigned char*, unsigned int, const unsigned char*, unsigned int);
extern "C" void __cdecl check_result(int);

struct VCContent_CComAggObject
{
    void Init();
    VCContent_CComAggObject* f();
};

VCContent_CComAggObject* VCContent_CComAggObject::f()
{
    Init();
    *(int*)((char*)this + 0x1228) = 2;
    *(int*)((char*)this + 0x122c) = 4;
    *(unsigned short*)((char*)this + 0x1226) = 0x50;
    check_result(copy_bytes((unsigned char*)this, 0x21, source, 4));
    return this;
}
