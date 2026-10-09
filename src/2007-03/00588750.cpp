// roc 2007-03 00588750  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588750
//
// 00588750  64a100000000         mov eax, dword ptr fs:[0]
// 00588756  6aff                 push -1
// 00588758  687e757500           push 0x75757e
// 0058875d  50                   push eax
// 0058875e  b801000000           mov eax, 1
// 00588763  64892500000000       mov dword ptr fs:[0], esp
// 0058876a  840578dd8b00         test byte ptr [0x8bdd78], al
// 00588770  7530                 jne 0x5887a2
// 00588772  090578dd8b00         or dword ptr [0x8bdd78], eax
// 00588778  6810457b00           push 0x7b4510
// 0058877d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588785  e8d613e9ff           call 0x419b60
// 0058878a  50                   push eax
// 0058878b  b9f0dc8b00           mov ecx, 0x8bdcf0
// 00588790  e84b86feff           call 0x570de0
// 00588795  68a0a57700           push 0x77a5a0
// 0058879a  e8146a0900           call 0x61f1b3
// 0058879f  83c404               add esp, 4
// 005887a2  8b0c24               mov ecx, dword ptr [esp]
// 005887a5  b8f0dc8b00           mov eax, 0x8bdcf0
// 005887aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005887b1  83c40c               add esp, 0xc
// 005887b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
