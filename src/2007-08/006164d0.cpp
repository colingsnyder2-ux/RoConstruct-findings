// roc 2007-08 006164d0  unit: seg_00610000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006164d0
//
// 006164d0  83ec30               sub esp, 0x30
// 006164d3  56                   push esi
// 006164d4  e817250000           call 0x6189f0
// 006164d9  8d44241c             lea eax, [esp + 0x1c]
// 006164dd  8bce                 mov ecx, esi
// 006164df  e80cffffff           call 0x6163f0
// 006164e4  57                   push edi
// 006164e5  50                   push eax
// 006164e6  8d44240c             lea eax, [esp + 0xc]
// 006164ea  50                   push eax
// 006164eb  8bc6                 mov eax, esi
// 006164ed  e86ee4ffff           call 0x614960
// 006164f2  8b4630               mov eax, dword ptr [esi + 0x30]
// 006164f5  8d4c2410             lea ecx, [esp + 0x10]
// 006164f9  51                   push ecx
// 006164fa  8d54242c             lea edx, [esp + 0x2c]
// 006164fe  52                   push edx
// 006164ff  50                   push eax
// 00616500  e87b300100           call 0x629580
// 00616505  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00616508  57                   push edi
// 00616509  51                   push ecx
// 0061650a  e8b1270100           call 0x628cc0
// 0061650f  83c454               add esp, 0x54
// 00616512  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
