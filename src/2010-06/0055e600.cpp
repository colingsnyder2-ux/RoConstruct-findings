// from server: 100% by auto
// roc 2010-06 0055e600  unit: G3D::TextInput::WrongSymbol  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e600
//
// 0055e600  83ec2c               sub esp, 0x2c
// 0055e603  53                   push ebx
// 0055e604  8d442404             lea eax, [esp + 4]
// 0055e608  50                   push eax
// 0055e609  e832ffffff           call 0x55e540
// 0055e60e  83782403             cmp dword ptr [eax + 0x24], 3
// 0055e612  8d4c2404             lea ecx, [esp + 4]
// 0055e616  0f95c3               setne bl
// 0055e619  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e61f  8ac3                 mov al, bl
// 0055e621  5b                   pop ebx
// 0055e622  83c42c               add esp, 0x2c
// 0055e625  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
