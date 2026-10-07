// roc 2008-06 005198d0  unit: G3D::_internal::DialogTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005198d0
//
// 005198d0  6aff                 push -1
// 005198d2  68496b7c00           push 0x7c6b49
// 005198d7  64a100000000         mov eax, dword ptr fs:[0]
// 005198dd  50                   push eax
// 005198de  64892500000000       mov dword ptr fs:[0], esp
// 005198e5  51                   push ecx
// 005198e6  53                   push ebx
// 005198e7  56                   push esi
// 005198e8  8bf1                 mov esi, ecx
// 005198ea  89742408             mov dword ptr [esp + 8], esi
// 005198ee  ff1560248000         call dword ptr [0x802460]
// 005198f4  33db                 xor ebx, ebx
// 005198f6  895c2414             mov dword ptr [esp + 0x14], ebx
// 005198fa  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005198fd  895e44               mov dword ptr [esi + 0x44], ebx
// 00519900  e87beffeff           call 0x508880
// 00519905  39442420             cmp dword ptr [esp + 0x20], eax
// 00519909  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051990d  0f95c0               setne al
// 00519910  51                   push ecx
// 00519911  8bce                 mov ecx, esi
// 00519913  88462c               mov byte ptr [esi + 0x2c], al
// 00519916  ff150c248000         call dword ptr [0x80240c]
// 0051991c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00519920  895e30               mov dword ptr [esi + 0x30], ebx
// 00519923  895e34               mov dword ptr [esi + 0x34], ebx
// 00519926  895e38               mov dword ptr [esi + 0x38], ebx
// 00519929  895e20               mov dword ptr [esi + 0x20], ebx
// 0051992c  885e24               mov byte ptr [esi + 0x24], bl
// 0051992f  895e28               mov dword ptr [esi + 0x28], ebx
// 00519932  885e1c               mov byte ptr [esi + 0x1c], bl
// 00519935  8bc6                 mov eax, esi
// 00519937  5e                   pop esi
// 00519938  5b                   pop ebx
// 00519939  64890d00000000       mov dword ptr fs:[0], ecx
// 00519940  83c410               add esp, 0x10
// 00519943  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0BinaryOutput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
