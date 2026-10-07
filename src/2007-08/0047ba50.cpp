// roc 2007-08 0047ba50  unit: G3D::Win32Window  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ba50
//
// 0047ba50  81ecac000000         sub esp, 0xac
// 0047ba56  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047ba5b  33c4                 xor eax, esp
// 0047ba5d  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 0047ba64  56                   push esi
// 0047ba65  8bf1                 mov esi, ecx
// 0047ba67  85f6                 test esi, esi
// 0047ba69  57                   push edi
// 0047ba6a  7505                 jne 0x47ba71
// 0047ba6c  be55000000           mov esi, 0x55
// 0047ba71  689c000000           push 0x9c
// 0047ba76  8d442418             lea eax, [esp + 0x18]
// 0047ba7a  6a00                 push 0
// 0047ba7c  50                   push eax
// 0047ba7d  e80a511b00           call 0x630b8c
// 0047ba82  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 0047ba89  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 0047ba90  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0047ba97  8b3d44ed7700         mov edi, dword ptr [0x77ed44]
// 0047ba9d  89842490000000       mov dword ptr [esp + 0x90], eax
// 0047baa4  83c40c               add esp, 0xc
// 0047baa7  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 0047baae  83c8ff               or eax, 0xffffffff
// 0047bab1  894c2408             mov dword ptr [esp + 8], ecx
// 0047bab5  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 0047babd  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 0047bac5  66c74424389c00       mov word ptr [esp + 0x38], 0x9c
// 0047bacc  89942480000000       mov dword ptr [esp + 0x80], edx
// 0047bad3  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 0047badb  33f6                 xor esi, esi
// 0047badd  8d4900               lea ecx, [ecx]
// 0047bae0  85c0                 test eax, eax
// 0047bae2  744c                 je 0x47bb30
// 0047bae4  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 0047bae8  6a04                 push 4
// 0047baea  8d542418             lea edx, [esp + 0x18]
// 0047baee  52                   push edx
// 0047baef  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0047baf6  ffd7                 call edi
// 0047baf8  83c601               add esi, 1
// 0047bafb  83fe03               cmp esi, 3
// 0047bafe  7ce0                 jl 0x47bae0
// 0047bb00  85c0                 test eax, eax
// 0047bb02  742c                 je 0x47bb30
// 0047bb04  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 0047bb0c  33f6                 xor esi, esi
// 0047bb0e  8bff                 mov edi, edi
// 0047bb10  85c0                 test eax, eax
// 0047bb12  741c                 je 0x47bb30
// 0047bb14  8b44b408             mov eax, dword ptr [esp + esi*4 + 8]
// 0047bb18  6a04                 push 4
// 0047bb1a  8d4c2418             lea ecx, [esp + 0x18]
// 0047bb1e  51                   push ecx
// 0047bb1f  89842484000000       mov dword ptr [esp + 0x84], eax
// 0047bb26  ffd7                 call edi
// 0047bb28  83c601               add esi, 1
// 0047bb2b  83fe03               cmp esi, 3
// 0047bb2e  7ce0                 jl 0x47bb10
// 0047bb30  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0047bb37  33d2                 xor edx, edx
// 0047bb39  85c0                 test eax, eax
// 0047bb3b  5f                   pop edi
// 0047bb3c  0f94c2               sete dl
// 0047bb3f  5e                   pop esi
// 0047bb40  33cc                 xor ecx, esp
// 0047bb42  8ac2                 mov al, dl
// 0047bb44  e8d54e1b00           call 0x630a1e
// 0047bb49  81c4ac000000         add esp, 0xac
// 0047bb4f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
