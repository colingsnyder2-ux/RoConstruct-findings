// roc 2008-06 0066fd40  unit: RBX::AdornRbxGfx  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066fd40
//
// 0066fd40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066fd44  83ec0c               sub esp, 0xc
// 0066fd47  85c9                 test ecx, ecx
// 0066fd49  7716                 ja 0x66fd61
// 0066fd4b  33c9                 xor ecx, ecx
// 0066fd4d  8d14cd00000000       lea edx, [ecx*8]
// 0066fd54  52                   push edx
// 0066fd55  e8c60b0300           call 0x6a0920
// 0066fd5a  83c404               add esp, 4
// 0066fd5d  83c40c               add esp, 0xc
// 0066fd60  c3                   ret 
// 0066fd61  83c8ff               or eax, 0xffffffff
// 0066fd64  33d2                 xor edx, edx
// 0066fd66  f7f1                 div ecx
// 0066fd68  83f808               cmp eax, 8
// 0066fd6b  73e0                 jae 0x66fd4d
// 0066fd6d  8d442410             lea eax, [esp + 0x10]
// 0066fd71  50                   push eax
// 0066fd72  8d4c2404             lea ecx, [esp + 4]
// 0066fd76  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066fd7e  ff15a4288000         call dword ptr [0x8028a4]
// 0066fd84  68d8078d00           push 0x8d07d8
// 0066fd89  8d4c2404             lea ecx, [esp + 4]
// 0066fd8d  51                   push ecx
// 0066fd8e  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 0066fd96  e8f1170300           call 0x6a158c
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
