// roc 2007-03 0047e100  unit: seg_00470000  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e100
//
// 0047e100  6aff                 push -1
// 0047e102  68577e7400           push 0x747e57
// 0047e107  64a100000000         mov eax, dword ptr fs:[0]
// 0047e10d  50                   push eax
// 0047e10e  81eca8010000         sub esp, 0x1a8
// 0047e114  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e119  33c4                 xor eax, esp
// 0047e11b  898424a4010000       mov dword ptr [esp + 0x1a4], eax
// 0047e122  53                   push ebx
// 0047e123  56                   push esi
// 0047e124  57                   push edi
// 0047e125  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e12a  33c4                 xor eax, esp
// 0047e12c  50                   push eax
// 0047e12d  8d8424b8010000       lea eax, [esp + 0x1b8]
// 0047e134  64a300000000         mov dword ptr fs:[0], eax
// 0047e13a  8bbc24c8010000       mov edi, dword ptr [esp + 0x1c8]
// 0047e141  8b9c24cc010000       mov ebx, dword ptr [esp + 0x1cc]
// 0047e148  8d4c2444             lea ecx, [esp + 0x44]
// 0047e14c  ff1584e77700         call dword ptr [0x77e784]
// 0047e152  33f6                 xor esi, esi
// 0047e154  89742470             mov dword ptr [esp + 0x70], esi
// 0047e158  89742474             mov dword ptr [esp + 0x74], esi
// 0047e15c  8974246c             mov dword ptr [esp + 0x6c], esi
// 0047e160  8b03                 mov eax, dword ptr [ebx]
// 0047e162  8b08                 mov ecx, dword ptr [eax]
// 0047e164  56                   push esi
// 0047e165  8d542444             lea edx, [esp + 0x44]
// 0047e169  52                   push edx
// 0047e16a  8d5704               lea edx, [edi + 4]
// 0047e16d  52                   push edx
// 0047e16e  50                   push eax
// 0047e16f  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047e172  c78424d001000001000000 mov dword ptr [esp + 0x1d0], 1
// 0047e17d  ffd0                 call eax
// 0047e17f  85c0                 test eax, eax
// 0047e181  0f85d1000000         jne 0x47e258
// 0047e187  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047e18b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0047e18e  8b08                 mov ecx, dword ptr [eax]
// 0047e190  6a06                 push 6
// 0047e192  52                   push edx
// 0047e193  50                   push eax
// 0047e194  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0047e197  ffd0                 call eax
// 0047e199  85c0                 test eax, eax
// 0047e19b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047e19f  8b08                 mov ecx, dword ptr [eax]
// 0047e1a1  7515                 jne 0x47e1b8
// 0047e1a3  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0047e1a6  68a87a7900           push 0x797aa8
// 0047e1ab  50                   push eax
// 0047e1ac  ffd2                 call edx
// 0047e1ae  85c0                 test eax, eax
// 0047e1b0  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047e1b4  740d                 je 0x47e1c3
// 0047e1b6  8b08                 mov ecx, dword ptr [eax]
// 0047e1b8  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e1bb  50                   push eax
// 0047e1bc  ffd2                 call edx
// 0047e1be  e995000000           jmp 0x47e258
// 0047e1c3  8d542414             lea edx, [esp + 0x14]
// 0047e1c7  c74424142c000000     mov dword ptr [esp + 0x14], 0x2c
// 0047e1cf  8b08                 mov ecx, dword ptr [eax]
// 0047e1d1  52                   push edx
// 0047e1d2  50                   push eax
// 0047e1d3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047e1d6  ffd0                 call eax
// 0047e1d8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047e1dc  81c72c010000         add edi, 0x12c
// 0047e1e2  894c2468             mov dword ptr [esp + 0x68], ecx
// 0047e1e6  57                   push edi
// 0047e1e7  8d4c2448             lea ecx, [esp + 0x48]
// 0047e1eb  ff15f0e67700         call dword ptr [0x77e6f0]
// 0047e1f1  bf3c010000           mov edi, 0x13c
// 0047e1f6  eb08                 jmp 0x47e200
// 0047e1f8  8da42400000000       lea esp, [esp]
// 0047e1ff  90                   nop 
// 0047e200  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047e204  6a01                 push 1
// 0047e206  8d0cb500000000       lea ecx, [esi*4]
// 0047e20d  51                   push ecx
// 0047e20e  8d8c2480000000       lea ecx, [esp + 0x80]
// 0047e215  89bc2480000000       mov dword ptr [esp + 0x80], edi
// 0047e21c  8b10                 mov edx, dword ptr [eax]
// 0047e21e  8b5238               mov edx, dword ptr [edx + 0x38]
// 0047e221  51                   push ecx
// 0047e222  50                   push eax
// 0047e223  ffd2                 call edx
// 0047e225  85c0                 test eax, eax
// 0047e227  7512                 jne 0x47e23b
// 0047e229  8d442410             lea eax, [esp + 0x10]
// 0047e22d  50                   push eax
// 0047e22e  8d4c2470             lea ecx, [esp + 0x70]
// 0047e232  89742414             mov dword ptr [esp + 0x14], esi
// 0047e236  e8c5d7ffff           call 0x47ba00
// 0047e23b  83c601               add esi, 1
// 0047e23e  83fe08               cmp esi, 8
// 0047e241  72bd                 jb 0x47e200
// 0047e243  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0047e247  8d542440             lea edx, [esp + 0x40]
// 0047e24b  894c2464             mov dword ptr [esp + 0x64], ecx
// 0047e24f  52                   push edx
// 0047e250  8d4b04               lea ecx, [ebx + 4]
// 0047e253  e8a8fdffff           call 0x47e000
// 0047e258  8d4c2440             lea ecx, [esp + 0x40]
// 0047e25c  c78424c0010000ffffffff mov dword ptr [esp + 0x1c0], 0xffffffff
// 0047e267  e8c4c8ffff           call 0x47ab30
// 0047e26c  b801000000           mov eax, 1
// 0047e271  8b8c24b8010000       mov ecx, dword ptr [esp + 0x1b8]
// 0047e278  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e27f  59                   pop ecx
// 0047e280  5f                   pop edi
// 0047e281  5e                   pop esi
// 0047e282  5b                   pop ebx
// 0047e283  8b8c24a4010000       mov ecx, dword ptr [esp + 0x1a4]
// 0047e28a  33cc                 xor ecx, esp
// 0047e28c  e8150c1a00           call 0x61eea6
// 0047e291  81c4b4010000         add esp, 0x1b4
// 0047e297  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
