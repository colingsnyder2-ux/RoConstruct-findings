// roc 2010-06 0054f090  unit: G3D::Shader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f090
//
// 0054f090  6aff                 push -1
// 0054f092  68650c9900           push 0x990c65
// 0054f097  64a100000000         mov eax, dword ptr fs:[0]
// 0054f09d  50                   push eax
// 0054f09e  64892500000000       mov dword ptr fs:[0], esp
// 0054f0a5  83ec24               sub esp, 0x24
// 0054f0a8  56                   push esi
// 0054f0a9  8bf1                 mov esi, ecx
// 0054f0ab  8b4604               mov eax, dword ptr [esi + 4]
// 0054f0ae  3b4608               cmp eax, dword ptr [esi + 8]
// 0054f0b1  89742404             mov dword ptr [esp + 4], esi
// 0054f0b5  7d3e                 jge 0x54f0f5
// 0054f0b7  8b16                 mov edx, dword ptr [esi]
// 0054f0b9  8d0cc500000000       lea ecx, [eax*8]
// 0054f0c0  2bc8                 sub ecx, eax
// 0054f0c2  8d0c8a               lea ecx, [edx + ecx*4]
// 0054f0c5  894c2408             mov dword ptr [esp + 8], ecx
// 0054f0c9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0054f0d1  85c9                 test ecx, ecx
// 0054f0d3  740b                 je 0x54f0e0
// 0054f0d5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0054f0d9  50                   push eax
// 0054f0da  ff150ca49e00         call dword ptr [0x9ea40c]
// 0054f0e0  ff4604               inc dword ptr [esi + 4]
// 0054f0e3  5e                   pop esi
// 0054f0e4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054f0e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f0ef  83c430               add esp, 0x30
// 0054f0f2  c20400               ret 4
// 0054f0f5  8b0e                 mov ecx, dword ptr [esi]
// 0054f0f7  57                   push edi
// 0054f0f8  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0054f0fc  3bf9                 cmp edi, ecx
// 0054f0fe  7254                 jb 0x54f154
// 0054f100  8d14c500000000       lea edx, [eax*8]
// 0054f107  2bd0                 sub edx, eax
// 0054f109  8d0c91               lea ecx, [ecx + edx*4]
// 0054f10c  3bf9                 cmp edi, ecx
// 0054f10e  7344                 jae 0x54f154
// 0054f110  57                   push edi
// 0054f111  8d4c2414             lea ecx, [esp + 0x14]
// 0054f115  ff150ca49e00         call dword ptr [0x9ea40c]
// 0054f11b  8d542410             lea edx, [esp + 0x10]
// 0054f11f  52                   push edx
// 0054f120  8bce                 mov ecx, esi
// 0054f122  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0054f12a  e861ffffff           call 0x54f090
// 0054f12f  8d4c2410             lea ecx, [esp + 0x10]
// 0054f133  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0054f13b  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f141  5f                   pop edi
// 0054f142  5e                   pop esi
// 0054f143  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054f147  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f14e  83c430               add esp, 0x30
// 0054f151  c20400               ret 4
// 0054f154  6a00                 push 0
// 0054f156  40                   inc eax
// 0054f157  50                   push eax
// 0054f158  8bce                 mov ecx, esi
// 0054f15a  e891f0ffff           call 0x54e1f0
// 0054f15f  8b4604               mov eax, dword ptr [esi + 4]
// 0054f162  8b16                 mov edx, dword ptr [esi]
// 0054f164  8d0cc500000000       lea ecx, [eax*8]
// 0054f16b  2bc8                 sub ecx, eax
// 0054f16d  57                   push edi
// 0054f16e  8d4c8ae4             lea ecx, [edx + ecx*4 - 0x1c]
// 0054f172  ff1568a49e00         call dword ptr [0x9ea468]
// 0054f178  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054f17c  5f                   pop edi
// 0054f17d  5e                   pop esi
// 0054f17e  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f185  83c430               add esp, 0x30
// 0054f188  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?append@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
