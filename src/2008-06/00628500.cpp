// from server: 100% by auto
// roc 2008-06 00628500  unit: seg_00620000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628500
//
// 00628500  56                   push esi
// 00628501  8b742408             mov esi, dword ptr [esp + 8]
// 00628505  57                   push edi
// 00628506  6a02                 push 2
// 00628508  56                   push esi
// 00628509  e8f292feff           call 0x611800
// 0062850e  6a05                 push 5
// 00628510  6a01                 push 1
// 00628512  56                   push esi
// 00628513  8bf8                 mov edi, eax
// 00628515  e82691feff           call 0x611640
// 0062851a  47                   inc edi
// 0062851b  57                   push edi
// 0062851c  56                   push esi
// 0062851d  e8fe9cfeff           call 0x612220
// 00628522  57                   push edi
// 00628523  6a01                 push 1
// 00628525  56                   push esi
// 00628526  e805a0feff           call 0x612530
// 0062852b  6aff                 push -1
// 0062852d  56                   push esi
// 0062852e  e8cd98feff           call 0x611e00
// 00628533  83c430               add esp, 0x30
// 00628536  f7d8                 neg eax
// 00628538  1bc0                 sbb eax, eax
// 0062853a  5f                   pop edi
// 0062853b  83e002               and eax, 2
// 0062853e  5e                   pop esi
// 0062853f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
