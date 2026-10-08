// from server: 100% by auto
// roc 2012-06 00858590  unit: seg_00850000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858590
//
// 00858590  56                   push esi
// 00858591  8b742408             mov esi, dword ptr [esp + 8]
// 00858595  57                   push edi
// 00858596  6a02                 push 2
// 00858598  56                   push esi
// 00858599  e8c2b4fdff           call 0x833a60
// 0085859e  6a05                 push 5
// 008585a0  6a01                 push 1
// 008585a2  56                   push esi
// 008585a3  8bf8                 mov edi, eax
// 008585a5  e8f6b2fdff           call 0x8338a0
// 008585aa  47                   inc edi
// 008585ab  57                   push edi
// 008585ac  56                   push esi
// 008585ad  e81e9bfdff           call 0x8320d0
// 008585b2  57                   push edi
// 008585b3  6a01                 push 1
// 008585b5  56                   push esi
// 008585b6  e8259efdff           call 0x8323e0
// 008585bb  6aff                 push -1
// 008585bd  56                   push esi
// 008585be  e81d97fdff           call 0x831ce0
// 008585c3  83c430               add esp, 0x30
// 008585c6  f7d8                 neg eax
// 008585c8  1bc0                 sbb eax, eax
// 008585ca  5f                   pop edi
// 008585cb  83e002               and eax, 2
// 008585ce  5e                   pop esi
// 008585cf  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
