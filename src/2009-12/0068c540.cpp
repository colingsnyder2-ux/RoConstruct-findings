// roc 2009-12 0068c540  unit: ArchiveBinder  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068c540
//
// 0068c540  83ec0c               sub esp, 0xc
// 0068c543  56                   push esi
// 0068c544  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068c548  8bce                 mov ecx, esi
// 0068c54a  e861540f00           call 0x7819b0
// 0068c54f  8bce                 mov ecx, esi
// 0068c551  e8fa560f00           call 0x781c50
// 0068c556  837c242400           cmp dword ptr [esp + 0x24], 0
// 0068c55b  751f                 jne 0x68c57c
// 0068c55d  8d442418             lea eax, [esp + 0x18]
// 0068c561  50                   push eax
// 0068c562  8d4c2408             lea ecx, [esp + 8]
// 0068c566  51                   push ecx
// 0068c567  8bce                 mov ecx, esi
// 0068c569  e802550f00           call 0x781a70
// 0068c56e  8bce                 mov ecx, esi
// 0068c570  e83b550f00           call 0x781ab0
// 0068c575  5e                   pop esi
// 0068c576  83c40c               add esp, 0xc
// 0068c579  c21400               ret 0x14
// 0068c57c  8d542418             lea edx, [esp + 0x18]
// 0068c580  52                   push edx
// 0068c581  8d442408             lea eax, [esp + 8]
// 0068c585  50                   push eax
// 0068c586  8bce                 mov ecx, esi
// 0068c588  e853580f00           call 0x781de0
// 0068c58d  8bce                 mov ecx, esi
// 0068c58f  e81c550f00           call 0x781ab0
// 0068c594  5e                   pop esi
// 0068c595  83c40c               add esp, 0xc
// 0068c598  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
