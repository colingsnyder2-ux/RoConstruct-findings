// roc 2008-06 0059c7f0  unit: RBX::PartInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c7f0
//
// 0059c7f0  64a100000000         mov eax, dword ptr fs:[0]
// 0059c7f6  6aff                 push -1
// 0059c7f8  688e267d00           push 0x7d268e
// 0059c7fd  50                   push eax
// 0059c7fe  b801000000           mov eax, 1
// 0059c803  64892500000000       mov dword ptr fs:[0], esp
// 0059c80a  840540669700         test byte ptr [0x976640], al
// 0059c810  7530                 jne 0x59c842
// 0059c812  090540669700         or dword ptr [0x976640], eax
// 0059c818  6840a29400           push 0x94a240
// 0059c81d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059c825  e86688feff           call 0x585090
// 0059c82a  50                   push eax
// 0059c82b  b980659700           mov ecx, 0x976580
// 0059c830  e8bb40fdff           call 0x5708f0
// 0059c835  6870de7f00           push 0x7fde70
// 0059c83a  e8704f1000           call 0x6a17af
// 0059c83f  83c404               add esp, 4
// 0059c842  8b0c24               mov ecx, dword ptr [esp]
// 0059c845  b880659700           mov eax, 0x976580
// 0059c84a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c851  83c40c               add esp, 0xc
// 0059c854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
