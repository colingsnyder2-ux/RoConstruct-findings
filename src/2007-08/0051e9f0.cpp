// roc 2007-08 0051e9f0  unit: seg_00510000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e9f0
//
// 0051e9f0  83ec58               sub esp, 0x58
// 0051e9f3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0051e9f8  33c4                 xor eax, esp
// 0051e9fa  89442454             mov dword ptr [esp + 0x54], eax
// 0051e9fe  8b542460             mov edx, dword ptr [esp + 0x60]
// 0051ea02  56                   push esi
// 0051ea03  8b742460             mov esi, dword ptr [esp + 0x60]
// 0051ea07  56                   push esi
// 0051ea08  8d442408             lea eax, [esp + 8]
// 0051ea0c  e87ffbffff           call 0x51e590
// 0051ea11  83c404               add esp, 4
// 0051ea14  8d442404             lea eax, [esp + 4]
// 0051ea18  50                   push eax
// 0051ea19  56                   push esi
// 0051ea1a  e8c1feffff           call 0x51e8e0
// 0051ea1f  5e                   pop esi
// library libpng-1.2.7/pngerror.c (function _png_chunk_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngerror.c
