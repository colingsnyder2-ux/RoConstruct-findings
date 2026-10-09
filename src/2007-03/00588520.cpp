// roc 2007-03 00588520  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588520
//
// 00588520  64a100000000         mov eax, dword ptr fs:[0]
// 00588526  6aff                 push -1
// 00588528  68de747500           push 0x7574de
// 0058852d  50                   push eax
// 0058852e  b801000000           mov eax, 1
// 00588533  64892500000000       mov dword ptr fs:[0], esp
// 0058853a  8405a8da8b00         test byte ptr [0x8bdaa8], al
// 00588540  7530                 jne 0x588572
// 00588542  0905a8da8b00         or dword ptr [0x8bdaa8], eax
// 00588548  68fc1c8a00           push 0x8a1cfc
// 0058854d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588555  e80616e9ff           call 0x419b60
// 0058855a  50                   push eax
// 0058855b  b920da8b00           mov ecx, 0x8bda20
// 00588560  e87b88feff           call 0x570de0
// 00588565  68f0a57700           push 0x77a5f0
// 0058856a  e8446c0900           call 0x61f1b3
// 0058856f  83c404               add esp, 4
// 00588572  8b0c24               mov ecx, dword ptr [esp]
// 00588575  b820da8b00           mov eax, 0x8bda20
// 0058857a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588581  83c40c               add esp, 0xc
// 00588584  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
