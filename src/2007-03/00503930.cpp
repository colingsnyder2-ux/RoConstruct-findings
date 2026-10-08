// roc 2007-03 00503930  unit: seg_00500000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503930
//
// 00503930  83ec2c               sub esp, 0x2c
// 00503933  53                   push ebx
// 00503934  8d442404             lea eax, [esp + 4]
// 00503938  50                   push eax
// 00503939  e802ffffff           call 0x503840
// 0050393e  83782403             cmp dword ptr [eax + 0x24], 3
// 00503942  8d4c2404             lea ecx, [esp + 4]
// 00503946  0f95c3               setne bl
// 00503949  ff158ce77700         call dword ptr [0x77e78c]
// 0050394f  8ac3                 mov al, bl
// 00503951  5b                   pop ebx
// 00503952  83c42c               add esp, 0x2c
// 00503955  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
