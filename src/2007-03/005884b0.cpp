// roc 2007-03 005884b0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005884b0
//
// 005884b0  64a100000000         mov eax, dword ptr fs:[0]
// 005884b6  6aff                 push -1
// 005884b8  68be747500           push 0x7574be
// 005884bd  50                   push eax
// 005884be  b801000000           mov eax, 1
// 005884c3  64892500000000       mov dword ptr fs:[0], esp
// 005884ca  840518da8b00         test byte ptr [0x8bda18], al
// 005884d0  7530                 jne 0x588502
// 005884d2  090518da8b00         or dword ptr [0x8bda18], eax
// 005884d8  68d8a88a00           push 0x8aa8d8
// 005884dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005884e5  e856ffffff           call 0x588440
// 005884ea  50                   push eax
// 005884eb  b990d98b00           mov ecx, 0x8bd990
// 005884f0  e8eb88feff           call 0x570de0
// 005884f5  6800a67700           push 0x77a600
// 005884fa  e8b46c0900           call 0x61f1b3
// 005884ff  83c404               add esp, 4
// 00588502  8b0c24               mov ecx, dword ptr [esp]
// 00588505  b890d98b00           mov eax, 0x8bd990
// 0058850a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588511  83c40c               add esp, 0xc
// 00588514  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
