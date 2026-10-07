// roc 2007-08 0046d880  unit: RBX::LDraw2Lua::LuaWriter  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d880
//
// 0046d880  6aff                 push -1
// 0046d882  68a9427400           push 0x7442a9
// 0046d887  64a100000000         mov eax, dword ptr fs:[0]
// 0046d88d  50                   push eax
// 0046d88e  83ec20               sub esp, 0x20
// 0046d891  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d896  33c4                 xor eax, esp
// 0046d898  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046d89c  56                   push esi
// 0046d89d  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d8a2  33c4                 xor eax, esp
// 0046d8a4  50                   push eax
// 0046d8a5  8d442428             lea eax, [esp + 0x28]
// 0046d8a9  64a300000000         mov dword ptr fs:[0], eax
// 0046d8af  e81cfcffff           call 0x46d4d0
// 0046d8b4  50                   push eax
// 0046d8b5  8d4c240c             lea ecx, [esp + 0xc]
// 0046d8b9  ff159ce67700         call dword ptr [0x77e69c]
// 0046d8bf  8b35f8e57700         mov esi, dword ptr [0x77e5f8]
// 0046d8c5  8d442408             lea eax, [esp + 8]
// 0046d8c9  68c8667900           push 0x7966c8
// 0046d8ce  50                   push eax
// 0046d8cf  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0046d8d7  ffd6                 call esi
// 0046d8d9  83c408               add esp, 8
// 0046d8dc  84c0                 test al, al
// 0046d8de  8d4c2408             lea ecx, [esp + 8]
// 0046d8e2  7412                 je 0x46d8f6
// 0046d8e4  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d8ec  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d8f2  33c0                 xor eax, eax
// 0046d8f4  eb5f                 jmp 0x46d955
// 0046d8f6  68b4667900           push 0x7966b4
// 0046d8fb  51                   push ecx
// 0046d8fc  ffd6                 call esi
// 0046d8fe  83c408               add esp, 8
// 0046d901  84c0                 test al, al
// 0046d903  7419                 je 0x46d91e
// 0046d905  8d4c2408             lea ecx, [esp + 8]
// 0046d909  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d911  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d917  b801000000           mov eax, 1
// 0046d91c  eb37                 jmp 0x46d955
// 0046d91e  8d542408             lea edx, [esp + 8]
// 0046d922  68a8667900           push 0x7966a8
// 0046d927  52                   push edx
// 0046d928  ffd6                 call esi
// 0046d92a  83c408               add esp, 8
// 0046d92d  84c0                 test al, al
// 0046d92f  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d937  8d4c2408             lea ecx, [esp + 8]
// 0046d93b  740d                 je 0x46d94a
// 0046d93d  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d943  b802000000           mov eax, 2
// 0046d948  eb0b                 jmp 0x46d955
// 0046d94a  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d950  b803000000           mov eax, 3
// 0046d955  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046d959  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d960  59                   pop ecx
// 0046d961  5e                   pop esi
// 0046d962  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046d966  33cc                 xor ecx, esp
// 0046d968  e8b1301c00           call 0x630a1e
// 0046d96d  83c42c               add esp, 0x2c
// 0046d970  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
