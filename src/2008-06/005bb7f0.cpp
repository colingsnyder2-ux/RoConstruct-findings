// roc 2008-06 005bb7f0  unit: RBX::Soundscape::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb7f0
//
// 005bb7f0  64a100000000         mov eax, dword ptr fs:[0]
// 005bb7f6  6aff                 push -1
// 005bb7f8  682e3c7d00           push 0x7d3c2e
// 005bb7fd  50                   push eax
// 005bb7fe  b801000000           mov eax, 1
// 005bb803  64892500000000       mov dword ptr fs:[0], esp
// 005bb80a  840590739700         test byte ptr [0x977390], al
// 005bb810  7530                 jne 0x5bb842
// 005bb812  090590739700         or dword ptr [0x977390], eax
// 005bb818  68f4d29400           push 0x94d2f4
// 005bb81d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bb825  e856f5e4ff           call 0x40ad80
// 005bb82a  50                   push eax
// 005bb82b  b9d0729700           mov ecx, 0x9772d0
// 005bb830  e8bb50fbff           call 0x5708f0
// 005bb835  6890e47f00           push 0x7fe490
// 005bb83a  e8705f0e00           call 0x6a17af
// 005bb83f  83c404               add esp, 4
// 005bb842  8b0c24               mov ecx, dword ptr [esp]
// 005bb845  b8d0729700           mov eax, 0x9772d0
// 005bb84a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb851  83c40c               add esp, 0xc
// 005bb854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
