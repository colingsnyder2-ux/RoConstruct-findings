// roc 2007-08 005bb250  unit: RBX::VModelInstance::?$FactoryProduct  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb250
//
// 005bb250  53                   push ebx
// 005bb251  55                   push ebp
// 005bb252  56                   push esi
// 005bb253  57                   push edi
// 005bb254  8bd9                 mov ebx, ecx
// 005bb256  33ff                 xor edi, edi
// 005bb258  e8b3c9ecff           call 0x487c10
// 005bb25d  85c0                 test eax, eax
// 005bb25f  7666                 jbe 0x5bb2c7
// 005bb261  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005bb267  eb07                 jmp 0x5bb270
// 005bb269  8da42400000000       lea esp, [esp]
// 005bb270  8bb3c0000000         mov esi, dword ptr [ebx + 0xc0]
// 005bb276  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bb279  85c9                 test ecx, ecx
// 005bb27b  740c                 je 0x5bb289
// 005bb27d  8b4608               mov eax, dword ptr [esi + 8]
// 005bb280  2bc1                 sub eax, ecx
// 005bb282  c1f803               sar eax, 3
// 005bb285  3bf8                 cmp edi, eax
// 005bb287  7202                 jb 0x5bb28b
// 005bb289  ffd5                 call ebp
// 005bb28b  8b4604               mov eax, dword ptr [esi + 4]
// 005bb28e  8b04f8               mov eax, dword ptr [eax + edi*8]
// 005bb291  6a00                 push 0
// 005bb293  6840908900           push 0x899040
// 005bb298  684c1f8800           push 0x881f4c
// 005bb29d  6a00                 push 0
// 005bb29f  50                   push eax
// 005bb2a0  e8915a0700           call 0x630d36
// 005bb2a5  83c414               add esp, 0x14
// 005bb2a8  85c0                 test eax, eax
// 005bb2aa  740d                 je 0x5bb2b9
// 005bb2ac  8b10                 mov edx, dword ptr [eax]
// 005bb2ae  8bc8                 mov ecx, eax
// 005bb2b0  8b4204               mov eax, dword ptr [edx + 4]
// 005bb2b3  ffd0                 call eax
// 005bb2b5  84c0                 test al, al
// 005bb2b7  7515                 jne 0x5bb2ce
// 005bb2b9  8bcb                 mov ecx, ebx
// 005bb2bb  83c701               add edi, 1
// 005bb2be  e84dc9ecff           call 0x487c10
// 005bb2c3  3bf8                 cmp edi, eax
// 005bb2c5  72a9                 jb 0x5bb270
// 005bb2c7  5f                   pop edi
// 005bb2c8  5e                   pop esi
// 005bb2c9  5d                   pop ebp
// 005bb2ca  32c0                 xor al, al
// 005bb2cc  5b                   pop ebx
// 005bb2cd  c3                   ret 
// 005bb2ce  5f                   pop edi
// 005bb2cf  5e                   pop esi
// 005bb2d0  5d                   pop ebp
// 005bb2d1  b001                 mov al, 1
// 005bb2d3  5b                   pop ebx
// 005bb2d4  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ?computeIsControllable@PVInstance@RBX@@ABE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
