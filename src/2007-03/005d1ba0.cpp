// roc 2007-03 005d1ba0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d1ba0
//
// 005d1ba0  64a100000000         mov eax, dword ptr fs:[0]
// 005d1ba6  6aff                 push -1
// 005d1ba8  682eaf7500           push 0x75af2e
// 005d1bad  50                   push eax
// 005d1bae  b801000000           mov eax, 1
// 005d1bb3  64892500000000       mov dword ptr fs:[0], esp
// 005d1bba  840568028c00         test byte ptr [0x8c0268], al
// 005d1bc0  7530                 jne 0x5d1bf2
// 005d1bc2  090568028c00         or dword ptr [0x8c0268], eax
// 005d1bc8  6870b47b00           push 0x7bb470
// 005d1bcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d1bd5  e836c4fcff           call 0x59e010
// 005d1bda  50                   push eax
// 005d1bdb  b9e0018c00           mov ecx, 0x8c01e0
// 005d1be0  e8fbf1f9ff           call 0x570de0
// 005d1be5  6880b67700           push 0x77b680
// 005d1bea  e8c4d50400           call 0x61f1b3
// 005d1bef  83c404               add esp, 4
// 005d1bf2  8b0c24               mov ecx, dword ptr [esp]
// 005d1bf5  b8e0018c00           mov eax, 0x8c01e0
// 005d1bfa  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1c01  83c40c               add esp, 0xc
// 005d1c04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
