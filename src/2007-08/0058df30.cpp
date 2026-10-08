// roc 2007-08 0058df30  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058df30
//
// 0058df30  64a100000000         mov eax, dword ptr fs:[0]
// 0058df36  6aff                 push -1
// 0058df38  68be677500           push 0x7567be
// 0058df3d  50                   push eax
// 0058df3e  b801000000           mov eax, 1
// 0058df43  64892500000000       mov dword ptr fs:[0], esp
// 0058df4a  8405a0398c00         test byte ptr [0x8c39a0], al
// 0058df50  7530                 jne 0x58df82
// 0058df52  0905a0398c00         or dword ptr [0x8c39a0], eax
// 0058df58  68102d7b00           push 0x7b2d10
// 0058df5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058df65  e826a7e8ff           call 0x418690
// 0058df6a  50                   push eax
// 0058df6b  b918398c00           mov ecx, 0x8c3918
// 0058df70  e88b2cfeff           call 0x570c00
// 0058df75  6870aa7700           push 0x77aa70
// 0058df7a  e8a42d0a00           call 0x630d23
// 0058df7f  83c404               add esp, 4
// 0058df82  8b0c24               mov ecx, dword ptr [esp]
// 0058df85  b818398c00           mov eax, 0x8c3918
// 0058df8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058df91  83c40c               add esp, 0xc
// 0058df94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
