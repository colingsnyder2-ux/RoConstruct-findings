// from server: 100% by auto
// roc 2010-06 007814d0  unit: seg_00780000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007814d0
//
// 007814d0  83ec30               sub esp, 0x30
// 007814d3  56                   push esi
// 007814d4  e8a7240000           call 0x783980
// 007814d9  8d44241c             lea eax, [esp + 0x1c]
// 007814dd  8bce                 mov ecx, esi
// 007814df  e80cffffff           call 0x7813f0
// 007814e4  57                   push edi
// 007814e5  50                   push eax
// 007814e6  8d44240c             lea eax, [esp + 0xc]
// 007814ea  50                   push eax
// 007814eb  8bc6                 mov eax, esi
// 007814ed  e84ee4ffff           call 0x77f940
// 007814f2  8b4630               mov eax, dword ptr [esi + 0x30]
// 007814f5  8d4c2410             lea ecx, [esp + 0x10]
// 007814f9  51                   push ecx
// 007814fa  8d54242c             lea edx, [esp + 0x2c]
// 007814fe  52                   push edx
// 007814ff  50                   push eax
// 00781500  e85bee0000           call 0x790360
// 00781505  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00781508  57                   push edi
// 00781509  51                   push ecx
// 0078150a  e891e50000           call 0x78faa0
// 0078150f  83c454               add esp, 0x54
// 00781512  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
