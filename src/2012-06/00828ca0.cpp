// roc 2012-06 00828ca0  unit: RBX::BallBallContact  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00828ca0
//
// 00828ca0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00828ca4  83ec0c               sub esp, 0xc
// 00828ca7  85c9                 test ecx, ecx
// 00828ca9  7716                 ja 0x828cc1
// 00828cab  33c9                 xor ecx, ecx
// 00828cad  8d14cd00000000       lea edx, [ecx*8]
// 00828cb4  52                   push edx
// 00828cb5  e860941500           call 0x98211a
// 00828cba  83c404               add esp, 4
// 00828cbd  83c40c               add esp, 0xc
// 00828cc0  c3                   ret 
// 00828cc1  83c8ff               or eax, 0xffffffff
// 00828cc4  33d2                 xor edx, edx
// 00828cc6  f7f1                 div ecx
// 00828cc8  83f808               cmp eax, 8
// 00828ccb  73e0                 jae 0x828cad
// 00828ccd  8d442410             lea eax, [esp + 0x10]
// 00828cd1  50                   push eax
// 00828cd2  8d4c2404             lea ecx, [esp + 4]
// 00828cd6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00828cde  ff15d029b200         call dword ptr [0xb229d0]
// 00828ce4  685861cd00           push 0xcd6158
// 00828ce9  8d4c2404             lea ecx, [esp + 4]
// 00828ced  51                   push ecx
// 00828cee  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 00828cf6  e849a41500           call 0x983144
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
