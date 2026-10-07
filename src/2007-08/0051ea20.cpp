// roc 2007-08 0051ea20  unit: seg_00510000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ea20
//
// 0051ea20  83ec58               sub esp, 0x58
// 0051ea23  a188518b00           mov eax, dword ptr [0x8b5188]
// 0051ea28  33c4                 xor eax, esp
// 0051ea2a  89442454             mov dword ptr [esp + 0x54], eax
// 0051ea2e  8b542460             mov edx, dword ptr [esp + 0x60]
// 0051ea32  56                   push esi
// 0051ea33  8b742460             mov esi, dword ptr [esp + 0x60]
// 0051ea37  56                   push esi
// 0051ea38  8d442408             lea eax, [esp + 8]
// 0051ea3c  e84ffbffff           call 0x51e590
// 0051ea41  8d442408             lea eax, [esp + 8]
// 0051ea45  50                   push eax
// 0051ea46  56                   push esi
// 0051ea47  e844ffffff           call 0x51e990
// 0051ea4c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0051ea50  83c40c               add esp, 0xc
// 0051ea53  5e                   pop esi
// 0051ea54  33cc                 xor ecx, esp
// 0051ea56  e8c31f1100           call 0x630a1e
// 0051ea5b  83c458               add esp, 0x58
// 0051ea5e  c3                   ret 
// library libpng-1.2.7/pngerror.c (function _png_chunk_warning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngerror.c
