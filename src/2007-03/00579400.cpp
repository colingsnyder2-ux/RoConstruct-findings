// roc 2007-03 00579400  unit: seg_00570000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579400
//
// 00579400  8b442404             mov eax, dword ptr [esp + 4]
// 00579404  83ec0c               sub esp, 0xc
// 00579407  56                   push esi
// 00579408  8bf1                 mov esi, ecx
// 0057940a  50                   push eax
// 0057940b  8d4c2408             lea ecx, [esp + 8]
// 0057940f  51                   push ecx
// 00579410  e85b080600           call 0x5d9c70
// 00579415  d900                 fld dword ptr [eax]
// 00579417  d99e68020000         fstp dword ptr [esi + 0x268]
// 0057941d  83c408               add esp, 8
// 00579420  d94004               fld dword ptr [eax + 4]
// 00579423  d99e6c020000         fstp dword ptr [esi + 0x26c]
// 00579429  d94008               fld dword ptr [eax + 8]
// 0057942c  d99e70020000         fstp dword ptr [esi + 0x270]
// 00579432  5e                   pop esi
// 00579433  83c40c               add esp, 0xc
// 00579436  c20400               ret 4
// library rbxgs/v8datamodel\RootInstance.cpp (function ?setInsertPoint@RootInstance@RBX@@QAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
