// roc 2008-06 0051c640  unit: G3D::_internal::DialogTemplate  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c640
//
// 0051c640  51                   push ecx
// 0051c641  53                   push ebx
// 0051c642  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051c646  53                   push ebx
// 0051c647  e864360000           call 0x51fcb0
// 0051c64c  83c404               add esp, 4
// 0051c64f  85c0                 test eax, eax
// 0051c651  7e41                 jle 0x51c694
// 0051c653  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 0051c659  55                   push ebp
// 0051c65a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051c65e  56                   push esi
// 0051c65f  57                   push edi
// 0051c660  89442410             mov dword ptr [esp + 0x10], eax
// 0051c664  33f6                 xor esi, esi
// 0051c666  8bfd                 mov edi, ebp
// 0051c668  85c9                 test ecx, ecx
// 0051c66a  761e                 jbe 0x51c68a
// 0051c66c  8d642400             lea esp, [esp]
// 0051c670  8b07                 mov eax, dword ptr [edi]
// 0051c672  50                   push eax
// 0051c673  53                   push ebx
// 0051c674  e8a7f6ffff           call 0x51bd20
// 0051c679  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 0051c67f  46                   inc esi
// 0051c680  83c408               add esp, 8
// 0051c683  83c704               add edi, 4
// 0051c686  3bf1                 cmp esi, ecx
// 0051c688  72e6                 jb 0x51c670
// 0051c68a  836c241001           sub dword ptr [esp + 0x10], 1
// 0051c68f  75d3                 jne 0x51c664
// 0051c691  5f                   pop edi
// 0051c692  5e                   pop esi
// 0051c693  5d                   pop ebp
// 0051c694  5b                   pop ebx
// 0051c695  59                   pop ecx
// 0051c696  c3                   ret 
// library libpng-1.2.5/pngwrite.c (function _png_write_image)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwrite.c
