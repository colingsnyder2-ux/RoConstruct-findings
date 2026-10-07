// roc 2010-06 007377a0  unit: seg_00730000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007377a0
//
// 007377a0  56                   push esi
// 007377a1  8b742408             mov esi, dword ptr [esp + 8]
// 007377a5  57                   push edi
// 007377a6  6a02                 push 2
// 007377a8  56                   push esi
// 007377a9  e8b2b8feff           call 0x723060
// 007377ae  6a05                 push 5
// 007377b0  6a01                 push 1
// 007377b2  56                   push esi
// 007377b3  8bf8                 mov edi, eax
// 007377b5  e8e6b6feff           call 0x722ea0
// 007377ba  47                   inc edi
// 007377bb  57                   push edi
// 007377bc  56                   push esi
// 007377bd  e86e9dfeff           call 0x721530
// 007377c2  57                   push edi
// 007377c3  6a01                 push 1
// 007377c5  56                   push esi
// 007377c6  e875a0feff           call 0x721840
// 007377cb  6aff                 push -1
// 007377cd  56                   push esi
// 007377ce  e86d99feff           call 0x721140
// 007377d3  83c430               add esp, 0x30
// 007377d6  f7d8                 neg eax
// 007377d8  1bc0                 sbb eax, eax
// 007377da  5f                   pop edi
// 007377db  83e002               and eax, 2
// 007377de  5e                   pop esi
// 007377df  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
