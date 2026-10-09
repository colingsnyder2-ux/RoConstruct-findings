// roc 2007-03 00532520  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532520
//
// 00532520  64a100000000         mov eax, dword ptr fs:[0]
// 00532526  6aff                 push -1
// 00532528  683e167500           push 0x75163e
// 0053252d  50                   push eax
// 0053252e  b801000000           mov eax, 1
// 00532533  64892500000000       mov dword ptr fs:[0], esp
// 0053253a  8405e8b28b00         test byte ptr [0x8bb2e8], al
// 00532540  7530                 jne 0x532572
// 00532542  0905e8b28b00         or dword ptr [0x8bb2e8], eax
// 00532548  68f84b7a00           push 0x7a4bf8
// 0053254d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00532555  e80676eeff           call 0x419b60
// 0053255a  50                   push eax
// 0053255b  b960b28b00           mov ecx, 0x8bb260
// 00532560  e87be80300           call 0x570de0
// 00532565  68b0937700           push 0x7793b0
// 0053256a  e844cc0e00           call 0x61f1b3
// 0053256f  83c404               add esp, 4
// 00532572  8b0c24               mov ecx, dword ptr [esp]
// 00532575  b860b28b00           mov eax, 0x8bb260
// 0053257a  64890d00000000       mov dword ptr fs:[0], ecx
// 00532581  83c40c               add esp, 0xc
// 00532584  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
