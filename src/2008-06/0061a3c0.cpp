// from server: 100% by king_originala
// roc 2008-06 0061a3c0  unit: RBX::InletTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a3c0
//
// 0061a3c0  6810a16100           push 0x61a110
// 0061a3c5  e8e5730800           call 0x6a17af
// 0061a3ca  83c404               add esp, 4
// 0061a3cd  e8befcffff           call 0x61a090
// 0061a3d2  33c0                 xor eax, eax
// 0061a3d4  c3                   ret 

extern "C" void __cdecl cleanup();
extern "C" int __cdecl register_exit(void (__cdecl *)());
extern "C" void __cdecl initialize();

int __cdecl f()
{
    register_exit(cleanup);
    initialize();
    return 0;
}
