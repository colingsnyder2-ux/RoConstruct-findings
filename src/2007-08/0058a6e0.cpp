// roc 2007-08 0058a6e0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058a6e0
//
// 0058a6e0  64a100000000         mov eax, dword ptr fs:[0]
// 0058a6e6  6aff                 push -1
// 0058a6e8  680e627500           push 0x75620e
// 0058a6ed  50                   push eax
// 0058a6ee  b801000000           mov eax, 1
// 0058a6f3  64892500000000       mov dword ptr fs:[0], esp
// 0058a6fa  840588358c00         test byte ptr [0x8c3588], al
// 0058a700  7530                 jne 0x58a732
// 0058a702  090588358c00         or dword ptr [0x8c3588], eax
// 0058a708  68c0288a00           push 0x8a28c0
// 0058a70d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a715  e876dfe8ff           call 0x418690
// 0058a71a  50                   push eax
// 0058a71b  b900358c00           mov ecx, 0x8c3500
// 0058a720  e8db64feff           call 0x570c00
// 0058a725  6830a87700           push 0x77a830
// 0058a72a  e8f4650a00           call 0x630d23
// 0058a72f  83c404               add esp, 4
// 0058a732  8b0c24               mov ecx, dword ptr [esp]
// 0058a735  b800358c00           mov eax, 0x8c3500
// 0058a73a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a741  83c40c               add esp, 0xc
// 0058a744  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
