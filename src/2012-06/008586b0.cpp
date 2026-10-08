// from server: 100% by auto
// roc 2012-06 008586b0  unit: seg_00850000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008586b0
//
// 008586b0  56                   push esi
// 008586b1  8b742408             mov esi, dword ptr [esp + 8]
// 008586b5  68d442bd00           push 0xbd42d4
// 008586ba  6a02                 push 2
// 008586bc  56                   push esi
// 008586bd  e86ea8fdff           call 0x832f30
// 008586c2  6a01                 push 1
// 008586c4  56                   push esi
// 008586c5  e8e695fdff           call 0x831cb0
// 008586ca  6a01                 push 1
// 008586cc  6a00                 push 0
// 008586ce  56                   push esi
// 008586cf  e83ca1fdff           call 0x832810
// 008586d4  6aff                 push -1
// 008586d6  56                   push esi
// 008586d7  e80496fdff           call 0x831ce0
// 008586dc  83c428               add esp, 0x28
// 008586df  85c0                 test eax, eax
// 008586e1  750e                 jne 0x8586f1
// 008586e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008586e7  c70000000000         mov dword ptr [eax], 0
// 008586ed  33c0                 xor eax, eax
// 008586ef  5e                   pop esi
// 008586f0  c3                   ret 
// 008586f1  6aff                 push -1
// 008586f3  56                   push esi
// 008586f4  e89796fdff           call 0x831d90
// 008586f9  83c408               add esp, 8
// 008586fc  85c0                 test eax, eax
// 008586fe  741a                 je 0x85871a
// 00858700  6a03                 push 3
// 00858702  56                   push esi
// 00858703  e8e894fdff           call 0x831bf0
// 00858708  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085870c  51                   push ecx
// 0085870d  6a03                 push 3
// 0085870f  56                   push esi
// 00858710  e8db97fdff           call 0x831ef0
// 00858715  83c414               add esp, 0x14
// 00858718  5e                   pop esi
// 00858719  c3                   ret 
// 0085871a  68ac42bd00           push 0xbd42ac
// 0085871f  56                   push esi
// 00858720  e87ba7fdff           call 0x832ea0
// 00858725  83c408               add esp, 8
// 00858728  33c0                 xor eax, eax
// 0085872a  5e                   pop esi
// 0085872b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
