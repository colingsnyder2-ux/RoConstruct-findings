// roc 2007-08 0058a7c0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058a7c0
//
// 0058a7c0  64a100000000         mov eax, dword ptr fs:[0]
// 0058a7c6  6aff                 push -1
// 0058a7c8  684e627500           push 0x75624e
// 0058a7cd  50                   push eax
// 0058a7ce  b801000000           mov eax, 1
// 0058a7d3  64892500000000       mov dword ptr fs:[0], esp
// 0058a7da  8405a8368c00         test byte ptr [0x8c36a8], al
// 0058a7e0  7530                 jne 0x58a812
// 0058a7e2  0905a8368c00         or dword ptr [0x8c36a8], eax
// 0058a7e8  68d0288a00           push 0x8a28d0
// 0058a7ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a7f5  e856ffffff           call 0x58a750
// 0058a7fa  50                   push eax
// 0058a7fb  b920368c00           mov ecx, 0x8c3620
// 0058a800  e8fb63feff           call 0x570c00
// 0058a805  6810a87700           push 0x77a810
// 0058a80a  e814650a00           call 0x630d23
// 0058a80f  83c404               add esp, 4
// 0058a812  8b0c24               mov ecx, dword ptr [esp]
// 0058a815  b820368c00           mov eax, 0x8c3620
// 0058a81a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a821  83c40c               add esp, 0xc
// 0058a824  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
