// roc 2007-03 00588910  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588910
//
// 00588910  64a100000000         mov eax, dword ptr fs:[0]
// 00588916  6aff                 push -1
// 00588918  68fe757500           push 0x7575fe
// 0058891d  50                   push eax
// 0058891e  b801000000           mov eax, 1
// 00588923  64892500000000       mov dword ptr fs:[0], esp
// 0058892a  8405b8df8b00         test byte ptr [0x8bdfb8], al
// 00588930  7530                 jne 0x588962
// 00588932  0905b8df8b00         or dword ptr [0x8bdfb8], eax
// 00588938  6834238a00           push 0x8a2334
// 0058893d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588945  e81612e9ff           call 0x419b60
// 0058894a  50                   push eax
// 0058894b  b930df8b00           mov ecx, 0x8bdf30
// 00588950  e88b84feff           call 0x570de0
// 00588955  6860a57700           push 0x77a560
// 0058895a  e854680900           call 0x61f1b3
// 0058895f  83c404               add esp, 4
// 00588962  8b0c24               mov ecx, dword ptr [esp]
// 00588965  b830df8b00           mov eax, 0x8bdf30
// 0058896a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588971  83c40c               add esp, 0xc
// 00588974  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
