// roc 2009-12 005f04b0  unit: seg_005f0000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f04b0
//
// 005f04b0  6aff                 push -1
// 005f04b2  6847f39300           push 0x93f347
// 005f04b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f04bd  50                   push eax
// 005f04be  64892500000000       mov dword ptr fs:[0], esp
// 005f04c5  81ecd8000000         sub esp, 0xd8
// 005f04cb  56                   push esi
// 005f04cc  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 005f04d3  6a00                 push 0
// 005f04d5  6a01                 push 1
// 005f04d7  56                   push esi
// 005f04d8  8d4c243c             lea ecx, [esp + 0x3c]
// 005f04dc  e80f4f0000           call 0x5f53f0
// 005f04e1  8b442468             mov eax, dword ptr [esp + 0x68]
// 005f04e5  c78424e400000000000000 mov dword ptr [esp + 0xe4], 0
// 005f04f0  85c0                 test eax, eax
// 005f04f2  7f3b                 jg 0x5f052f
// 005f04f4  6814259c00           push 0x9c2514
// 005f04f9  8d4c2418             lea ecx, [esp + 0x18]
// 005f04fd  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f0503  56                   push esi
// 005f0504  8d442418             lea eax, [esp + 0x18]
// 005f0508  50                   push eax
// 005f0509  8d8c2484000000       lea ecx, [esp + 0x84]
// 005f0510  c68424ec00000001     mov byte ptr [esp + 0xec], 1
// 005f0518  e82363edff           call 0x4c6840
// 005f051d  689014aa00           push 0xaa1490
// 005f0522  8d8c2480000000       lea ecx, [esp + 0x80]
// 005f0529  51                   push ecx
// 005f052a  e849432000           call 0x7f4878
// 005f052f  837c246400           cmp dword ptr [esp + 0x64], 0
// 005f0534  7626                 jbe 0x5f055c
// 005f0536  8d542404             lea edx, [esp + 4]
// 005f053a  52                   push edx
// 005f053b  8d4c240c             lea ecx, [esp + 0xc]
// 005f053f  c744240850329b00     mov dword ptr [esp + 8], 0x9b3250
// 005f0547  ff1548b79800         call dword ptr [0x98b748]
// 005f054d  68647da900           push 0xa97d64
// 005f0552  8d44240c             lea eax, [esp + 0xc]
// 005f0556  50                   push eax
// 005f0557  e81c432000           call 0x7f4878
// 005f055c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005f0560  6a08                 push 8
// 005f0562  50                   push eax
// 005f0563  51                   push ecx
// 005f0564  56                   push esi
// 005f0565  e806f1ffff           call 0x5ef670
// 005f056a  83c410               add esp, 0x10
// 005f056d  8d4c2430             lea ecx, [esp + 0x30]
// 005f0571  8bf0                 mov esi, eax
// 005f0573  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 005f057e  e8ad500000           call 0x5f5630
// 005f0583  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 005f058a  8bc6                 mov eax, esi
// 005f058c  5e                   pop esi
// 005f058d  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0594  81c4e4000000         add esp, 0xe4
// 005f059a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
