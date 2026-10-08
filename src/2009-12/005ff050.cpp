// roc 2009-12 005ff050  unit: G3D::_internal::DialogTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff050
//
// 005ff050  6aff                 push -1
// 005ff052  68598c9300           push 0x938c59
// 005ff057  64a100000000         mov eax, dword ptr fs:[0]
// 005ff05d  50                   push eax
// 005ff05e  64892500000000       mov dword ptr fs:[0], esp
// 005ff065  51                   push ecx
// 005ff066  53                   push ebx
// 005ff067  56                   push esi
// 005ff068  8bf1                 mov esi, ecx
// 005ff06a  89742408             mov dword ptr [esp + 8], esi
// 005ff06e  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ff074  33db                 xor ebx, ebx
// 005ff076  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ff07a  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005ff07d  895e44               mov dword ptr [esi + 0x44], ebx
// 005ff080  e88bbdfeff           call 0x5eae10
// 005ff085  39442420             cmp dword ptr [esp + 0x20], eax
// 005ff089  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ff08d  0f95c0               setne al
// 005ff090  51                   push ecx
// 005ff091  8bce                 mov ecx, esi
// 005ff093  88462c               mov byte ptr [esi + 0x2c], al
// 005ff096  ff159cb69800         call dword ptr [0x98b69c]
// 005ff09c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ff0a0  895e30               mov dword ptr [esi + 0x30], ebx
// 005ff0a3  895e34               mov dword ptr [esi + 0x34], ebx
// 005ff0a6  895e38               mov dword ptr [esi + 0x38], ebx
// 005ff0a9  895e20               mov dword ptr [esi + 0x20], ebx
// 005ff0ac  885e24               mov byte ptr [esi + 0x24], bl
// 005ff0af  895e28               mov dword ptr [esi + 0x28], ebx
// 005ff0b2  885e1c               mov byte ptr [esi + 0x1c], bl
// 005ff0b5  8bc6                 mov eax, esi
// 005ff0b7  5e                   pop esi
// 005ff0b8  5b                   pop ebx
// 005ff0b9  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff0c0  83c410               add esp, 0x10
// 005ff0c3  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0BinaryOutput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4G3DEndian@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
