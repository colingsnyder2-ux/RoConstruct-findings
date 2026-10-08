// from server: 35% by colin
// roc 2007-08 0049eca2  unit: RBX::Network::Server  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049eca2
//
// 0049eca2  b801000000           mov eax, 1
// 0049eca7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049ecaa  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ecb1  59                   pop ecx
// 0049ecb2  5f                   pop edi
// 0049ecb3  5e                   pop esi
// 0049ecb4  5b                   pop ebx
// 0049ecb5  8b8d28020000         mov ecx, dword ptr [ebp + 0x228]
// 0049ecbb  33cd                 xor ecx, ebp
// 0049ecbd  e85c1d1900           call 0x630a1e
// 0049ecc2  81c52c020000         add ebp, 0x22c
// 0049ecc8  8be5                 mov esp, ebp
// 0049ecca  5d                   pop ebp
// 0049eccb  c20800               ret 8

extern "C" void __cdecl _seh_epilogue();

struct RBX_Network_Server {
    int f(int, int);
};

int RBX_Network_Server::f(int a, int b)
{
    _seh_epilogue();
    return 1;
}
