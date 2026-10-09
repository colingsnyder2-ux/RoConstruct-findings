// roc 2009-06 00657080  unit: RBX::Stats::Item  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00657080
//
// 00657080  64a100000000         mov eax, dword ptr fs:[0]
// 00657086  6aff                 push -1
// 00657088  689ebb8600           push 0x86bb9e
// 0065708d  50                   push eax
// 0065708e  b801000000           mov eax, 1
// 00657093  64892500000000       mov dword ptr fs:[0], esp
// 0065709a  840520caa400         test byte ptr [0xa4ca20], al
// 006570a0  7530                 jne 0x6570d2
// 006570a2  090520caa400         or dword ptr [0xa4ca20], eax
// 006570a8  68fc098e00           push 0x8e09fc
// 006570ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006570b5  e87659e0ff           call 0x45ca30
// 006570ba  50                   push eax
// 006570bb  b960c9a400           mov ecx, 0xa4c960
// 006570c0  e81b27faff           call 0x5f97e0
// 006570c5  68e0a78900           push 0x89a7e0
// 006570ca  e82c2a0c00           call 0x719afb
// 006570cf  83c404               add esp, 4
// 006570d2  8b0c24               mov ecx, dword ptr [esp]
// 006570d5  b860c9a400           mov eax, 0xa4c960
// 006570da  64890d00000000       mov dword ptr fs:[0], ecx
// 006570e1  83c40c               add esp, 0xc
// 006570e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
