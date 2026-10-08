// from server: 100% by auto
// roc 2009-06 0057d270  unit: G3D::_internal::DialogTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d270
//
// 0057d270  6aff                 push -1
// 0057d272  68991c8700           push 0x871c99
// 0057d277  64a100000000         mov eax, dword ptr fs:[0]
// 0057d27d  50                   push eax
// 0057d27e  64892500000000       mov dword ptr fs:[0], esp
// 0057d285  51                   push ecx
// 0057d286  53                   push ebx
// 0057d287  56                   push esi
// 0057d288  8bf1                 mov esi, ecx
// 0057d28a  89742408             mov dword ptr [esp + 8], esi
// 0057d28e  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057d294  33db                 xor ebx, ebx
// 0057d296  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057d29a  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0057d29d  895e44               mov dword ptr [esi + 0x44], ebx
// 0057d2a0  e83beafeff           call 0x56bce0
// 0057d2a5  39442420             cmp dword ptr [esp + 0x20], eax
// 0057d2a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057d2ad  0f95c0               setne al
// 0057d2b0  51                   push ecx
// 0057d2b1  8bce                 mov ecx, esi
// 0057d2b3  88462c               mov byte ptr [esi + 0x2c], al
// 0057d2b6  ff1564e48900         call dword ptr [0x89e464]
// 0057d2bc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057d2c0  895e30               mov dword ptr [esi + 0x30], ebx
// 0057d2c3  895e34               mov dword ptr [esi + 0x34], ebx
// 0057d2c6  895e38               mov dword ptr [esi + 0x38], ebx
// 0057d2c9  895e20               mov dword ptr [esi + 0x20], ebx
// 0057d2cc  885e24               mov byte ptr [esi + 0x24], bl
// 0057d2cf  895e28               mov dword ptr [esi + 0x28], ebx
// 0057d2d2  885e1c               mov byte ptr [esi + 0x1c], bl
// 0057d2d5  8bc6                 mov eax, esi
// 0057d2d7  5e                   pop esi
// 0057d2d8  5b                   pop ebx
// 0057d2d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d2e0  83c410               add esp, 0x10
// 0057d2e3  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0BinaryOutput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
