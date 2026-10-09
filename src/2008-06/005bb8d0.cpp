// roc 2008-06 005bb8d0  unit: RBX::Soundscape::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb8d0
//
// 005bb8d0  64a100000000         mov eax, dword ptr fs:[0]
// 005bb8d6  6aff                 push -1
// 005bb8d8  686e3c7d00           push 0x7d3c6e
// 005bb8dd  50                   push eax
// 005bb8de  b801000000           mov eax, 1
// 005bb8e3  64892500000000       mov dword ptr fs:[0], esp
// 005bb8ea  840520759700         test byte ptr [0x977520], al
// 005bb8f0  7530                 jne 0x5bb922
// 005bb8f2  090520759700         or dword ptr [0x977520], eax
// 005bb8f8  6804d39400           push 0x94d304
// 005bb8fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bb905  e856ffffff           call 0x5bb860
// 005bb90a  50                   push eax
// 005bb90b  b960749700           mov ecx, 0x977460
// 005bb910  e8db4ffbff           call 0x5708f0
// 005bb915  6870e47f00           push 0x7fe470
// 005bb91a  e8905e0e00           call 0x6a17af
// 005bb91f  83c404               add esp, 4
// 005bb922  8b0c24               mov ecx, dword ptr [esp]
// 005bb925  b860749700           mov eax, 0x977460
// 005bb92a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb931  83c40c               add esp, 0xc
// 005bb934  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
