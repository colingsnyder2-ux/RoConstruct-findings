// roc 2007-03 00579440  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579440
//
// 00579440  83ec0c               sub esp, 0xc
// 00579443  56                   push esi
// 00579444  8b742414             mov esi, dword ptr [esp + 0x14]
// 00579448  8bce                 mov ecx, esi
// 0057944a  e871fc0500           call 0x5d90c0
// 0057944f  8bce                 mov ecx, esi
// 00579451  e8eafd0500           call 0x5d9240
// 00579456  837c242400           cmp dword ptr [esp + 0x24], 0
// 0057945b  751f                 jne 0x57947c
// 0057945d  8d442418             lea eax, [esp + 0x18]
// 00579461  50                   push eax
// 00579462  8d4c2408             lea ecx, [esp + 8]
// 00579466  51                   push ecx
// 00579467  8bce                 mov ecx, esi
// 00579469  e852ff0500           call 0x5d93c0
// 0057946e  8bce                 mov ecx, esi
// 00579470  e88b050600           call 0x5d9a00
// 00579475  5e                   pop esi
// 00579476  83c40c               add esp, 0xc
// 00579479  c21400               ret 0x14
// 0057947c  8d542418             lea edx, [esp + 0x18]
// 00579480  52                   push edx
// 00579481  8d442408             lea eax, [esp + 8]
// 00579485  50                   push eax
// 00579486  8bce                 mov ecx, esi
// 00579488  e8b3ff0500           call 0x5d9440
// 0057948d  8bce                 mov ecx, esi
// 0057948f  e86c050600           call 0x5d9a00
// 00579494  5e                   pop esi
// 00579495  83c40c               add esp, 0xc
// 00579498  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
