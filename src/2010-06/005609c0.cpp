// roc 2010-06 005609c0  unit: G3D::_internal::DialogTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005609c0
//
// 005609c0  6aff                 push -1
// 005609c2  6889009a00           push 0x9a0089
// 005609c7  64a100000000         mov eax, dword ptr fs:[0]
// 005609cd  50                   push eax
// 005609ce  64892500000000       mov dword ptr fs:[0], esp
// 005609d5  51                   push ecx
// 005609d6  53                   push ebx
// 005609d7  56                   push esi
// 005609d8  8bf1                 mov esi, ecx
// 005609da  89742408             mov dword ptr [esp + 8], esi
// 005609de  ff1504a49e00         call dword ptr [0x9ea404]
// 005609e4  33db                 xor ebx, ebx
// 005609e6  895c2414             mov dword ptr [esp + 0x14], ebx
// 005609ea  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005609ed  895e44               mov dword ptr [esi + 0x44], ebx
// 005609f0  e8fbd9feff           call 0x54e3f0
// 005609f5  39442420             cmp dword ptr [esp + 0x20], eax
// 005609f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005609fd  0f95c0               setne al
// 00560a00  51                   push ecx
// 00560a01  8bce                 mov ecx, esi
// 00560a03  88462c               mov byte ptr [esi + 0x2c], al
// 00560a06  ff1568a49e00         call dword ptr [0x9ea468]
// 00560a0c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00560a10  895e30               mov dword ptr [esi + 0x30], ebx
// 00560a13  895e34               mov dword ptr [esi + 0x34], ebx
// 00560a16  895e38               mov dword ptr [esi + 0x38], ebx
// 00560a19  895e20               mov dword ptr [esi + 0x20], ebx
// 00560a1c  885e24               mov byte ptr [esi + 0x24], bl
// 00560a1f  895e28               mov dword ptr [esi + 0x28], ebx
// 00560a22  885e1c               mov byte ptr [esi + 0x1c], bl
// 00560a25  8bc6                 mov eax, esi
// 00560a27  5e                   pop esi
// 00560a28  5b                   pop ebx
// 00560a29  64890d00000000       mov dword ptr fs:[0], ecx
// 00560a30  83c410               add esp, 0x10
// 00560a33  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0BinaryOutput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
