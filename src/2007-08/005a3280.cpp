// roc 2007-08 005a3280  unit: RBX::VTeams::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3280
//
// 005a3280  64a100000000         mov eax, dword ptr fs:[0]
// 005a3286  6aff                 push -1
// 005a3288  687e7f7500           push 0x757f7e
// 005a328d  50                   push eax
// 005a328e  b801000000           mov eax, 1
// 005a3293  64892500000000       mov dword ptr fs:[0], esp
// 005a329a  8405d0568c00         test byte ptr [0x8c56d0], al
// 005a32a0  7530                 jne 0x5a32d2
// 005a32a2  0905d0568c00         or dword ptr [0x8c56d0], eax
// 005a32a8  68084c7b00           push 0x7b4c08
// 005a32ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a32b5  e8d653e7ff           call 0x418690
// 005a32ba  50                   push eax
// 005a32bb  b948568c00           mov ecx, 0x8c5648
// 005a32c0  e83bd9fcff           call 0x570c00
// 005a32c5  68e0b27700           push 0x77b2e0
// 005a32ca  e854da0800           call 0x630d23
// 005a32cf  83c404               add esp, 4
// 005a32d2  8b0c24               mov ecx, dword ptr [esp]
// 005a32d5  b848568c00           mov eax, 0x8c5648
// 005a32da  64890d00000000       mov dword ptr fs:[0], ecx
// 005a32e1  83c40c               add esp, 0xc
// 005a32e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
