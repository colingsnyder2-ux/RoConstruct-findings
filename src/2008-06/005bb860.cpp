// roc 2008-06 005bb860  unit: RBX::Soundscape::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb860
//
// 005bb860  64a100000000         mov eax, dword ptr fs:[0]
// 005bb866  6aff                 push -1
// 005bb868  684e3c7d00           push 0x7d3c4e
// 005bb86d  50                   push eax
// 005bb86e  b801000000           mov eax, 1
// 005bb873  64892500000000       mov dword ptr fs:[0], esp
// 005bb87a  840558749700         test byte ptr [0x977458], al
// 005bb880  7530                 jne 0x5bb8b2
// 005bb882  090558749700         or dword ptr [0x977458], eax
// 005bb888  6810d39400           push 0x94d310
// 005bb88d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bb895  e8e6f4e4ff           call 0x40ad80
// 005bb89a  50                   push eax
// 005bb89b  b998739700           mov ecx, 0x977398
// 005bb8a0  e84b50fbff           call 0x5708f0
// 005bb8a5  6880e47f00           push 0x7fe480
// 005bb8aa  e8005f0e00           call 0x6a17af
// 005bb8af  83c404               add esp, 4
// 005bb8b2  8b0c24               mov ecx, dword ptr [esp]
// 005bb8b5  b898739700           mov eax, 0x977398
// 005bb8ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb8c1  83c40c               add esp, 0xc
// 005bb8c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
