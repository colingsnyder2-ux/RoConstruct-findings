// roc 2007-08 0058a750  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058a750
//
// 0058a750  64a100000000         mov eax, dword ptr fs:[0]
// 0058a756  6aff                 push -1
// 0058a758  682e627500           push 0x75622e
// 0058a75d  50                   push eax
// 0058a75e  b801000000           mov eax, 1
// 0058a763  64892500000000       mov dword ptr fs:[0], esp
// 0058a76a  840518368c00         test byte ptr [0x8c3618], al
// 0058a770  7530                 jne 0x58a7a2
// 0058a772  090518368c00         or dword ptr [0x8c3618], eax
// 0058a778  68dc288a00           push 0x8a28dc
// 0058a77d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a785  e806dfe8ff           call 0x418690
// 0058a78a  50                   push eax
// 0058a78b  b990358c00           mov ecx, 0x8c3590
// 0058a790  e86b64feff           call 0x570c00
// 0058a795  6820a87700           push 0x77a820
// 0058a79a  e884650a00           call 0x630d23
// 0058a79f  83c404               add esp, 4
// 0058a7a2  8b0c24               mov ecx, dword ptr [esp]
// 0058a7a5  b890358c00           mov eax, 0x8c3590
// 0058a7aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a7b1  83c40c               add esp, 0xc
// 0058a7b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
