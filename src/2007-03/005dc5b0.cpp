// roc 2007-03 005dc5b0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc5b0
//
// 005dc5b0  64a100000000         mov eax, dword ptr fs:[0]
// 005dc5b6  6aff                 push -1
// 005dc5b8  686eba7500           push 0x75ba6e
// 005dc5bd  50                   push eax
// 005dc5be  b801000000           mov eax, 1
// 005dc5c3  64892500000000       mov dword ptr fs:[0], esp
// 005dc5ca  8405c8048c00         test byte ptr [0x8c04c8], al
// 005dc5d0  7530                 jne 0x5dc602
// 005dc5d2  0905c8048c00         or dword ptr [0x8c04c8], eax
// 005dc5d8  68089c8a00           push 0x8a9c08
// 005dc5dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc5e5  e876d5e3ff           call 0x419b60
// 005dc5ea  50                   push eax
// 005dc5eb  b940048c00           mov ecx, 0x8c0440
// 005dc5f0  e8eb47f9ff           call 0x570de0
// 005dc5f5  68b0b87700           push 0x77b8b0
// 005dc5fa  e8b42b0400           call 0x61f1b3
// 005dc5ff  83c404               add esp, 4
// 005dc602  8b0c24               mov ecx, dword ptr [esp]
// 005dc605  b840048c00           mov eax, 0x8c0440
// 005dc60a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc611  83c40c               add esp, 0xc
// 005dc614  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
