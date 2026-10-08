// roc 2007-03 0047a3e0  unit: seg_00470000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a3e0
//
// 0047a3e0  81ecac000000         sub esp, 0xac
// 0047a3e6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047a3eb  33c4                 xor eax, esp
// 0047a3ed  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 0047a3f4  56                   push esi
// 0047a3f5  8bf1                 mov esi, ecx
// 0047a3f7  85f6                 test esi, esi
// 0047a3f9  57                   push edi
// 0047a3fa  7505                 jne 0x47a401
// 0047a3fc  be55000000           mov esi, 0x55
// 0047a401  689c000000           push 0x9c
// 0047a406  8d442418             lea eax, [esp + 0x18]
// 0047a40a  6a00                 push 0
// 0047a40c  50                   push eax
// 0047a40d  e80a4c1a00           call 0x61f01c
// 0047a412  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 0047a419  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 0047a420  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0047a427  8b3deced7700         mov edi, dword ptr [0x77edec]
// 0047a42d  89842490000000       mov dword ptr [esp + 0x90], eax
// 0047a434  83c40c               add esp, 0xc
// 0047a437  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 0047a43e  83c8ff               or eax, 0xffffffff
// 0047a441  894c2408             mov dword ptr [esp + 8], ecx
// 0047a445  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 0047a44d  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 0047a455  66c74424389c00       mov word ptr [esp + 0x38], 0x9c
// 0047a45c  89942480000000       mov dword ptr [esp + 0x80], edx
// 0047a463  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 0047a46b  33f6                 xor esi, esi
// 0047a46d  8d4900               lea ecx, [ecx]
// 0047a470  85c0                 test eax, eax
// 0047a472  744c                 je 0x47a4c0
// 0047a474  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 0047a478  6a04                 push 4
// 0047a47a  8d542418             lea edx, [esp + 0x18]
// 0047a47e  52                   push edx
// 0047a47f  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0047a486  ffd7                 call edi
// 0047a488  83c601               add esi, 1
// 0047a48b  83fe03               cmp esi, 3
// 0047a48e  7ce0                 jl 0x47a470
// 0047a490  85c0                 test eax, eax
// 0047a492  742c                 je 0x47a4c0
// 0047a494  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 0047a49c  33f6                 xor esi, esi
// 0047a49e  8bff                 mov edi, edi
// 0047a4a0  85c0                 test eax, eax
// 0047a4a2  741c                 je 0x47a4c0
// 0047a4a4  8b44b408             mov eax, dword ptr [esp + esi*4 + 8]
// 0047a4a8  6a04                 push 4
// 0047a4aa  8d4c2418             lea ecx, [esp + 0x18]
// 0047a4ae  51                   push ecx
// 0047a4af  89842484000000       mov dword ptr [esp + 0x84], eax
// 0047a4b6  ffd7                 call edi
// 0047a4b8  83c601               add esi, 1
// 0047a4bb  83fe03               cmp esi, 3
// 0047a4be  7ce0                 jl 0x47a4a0
// 0047a4c0  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0047a4c7  33d2                 xor edx, edx
// 0047a4c9  85c0                 test eax, eax
// 0047a4cb  5f                   pop edi
// 0047a4cc  0f94c2               sete dl
// 0047a4cf  5e                   pop esi
// 0047a4d0  33cc                 xor ecx, esp
// 0047a4d2  8ac2                 mov al, dl
// 0047a4d4  e8cd491a00           call 0x61eea6
// 0047a4d9  81c4ac000000         add esp, 0xac
// 0047a4df  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
