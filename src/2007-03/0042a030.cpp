// roc 2007-03 0042a030  unit: seg_00420000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042a030
//
// 0042a030  56                   push esi
// 0042a031  8b742408             mov esi, dword ptr [esp + 8]
// 0042a035  57                   push edi
// 0042a036  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042a03a  3bf7                 cmp esi, edi
// 0042a03c  7416                 je 0x42a054
// 0042a03e  53                   push ebx
// 0042a03f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0042a043  53                   push ebx
// 0042a044  8bce                 mov ecx, esi
// 0042a046  ff154ce77700         call dword ptr [0x77e74c]
// 0042a04c  83c61c               add esi, 0x1c
// 0042a04f  3bf7                 cmp esi, edi
// 0042a051  75f0                 jne 0x42a043
// 0042a053  5b                   pop ebx
// 0042a054  5f                   pop edi
// 0042a055  5e                   pop esi
// 0042a056  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??$_Fill@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@YAXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0ABV10@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
