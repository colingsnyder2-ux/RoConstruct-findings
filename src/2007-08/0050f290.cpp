// from server: 100% by auto
// roc 2007-08 0050f290  unit: G3D::TextInput::WrongSymbol  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f290
//
// 0050f290  83ec2c               sub esp, 0x2c
// 0050f293  53                   push ebx
// 0050f294  8d442404             lea eax, [esp + 4]
// 0050f298  50                   push eax
// 0050f299  e802ffffff           call 0x50f1a0
// 0050f29e  83782403             cmp dword ptr [eax + 0x24], 3
// 0050f2a2  8d4c2404             lea ecx, [esp + 4]
// 0050f2a6  0f95c3               setne bl
// 0050f2a9  ff15ace67700         call dword ptr [0x77e6ac]
// 0050f2af  8ac3                 mov al, bl
// 0050f2b1  5b                   pop ebx
// 0050f2b2  83c42c               add esp, 0x2c
// 0050f2b5  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
