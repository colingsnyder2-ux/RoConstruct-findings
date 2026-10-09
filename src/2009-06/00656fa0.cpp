// roc 2009-06 00656fa0  unit: RBX::Stats::Item  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00656fa0
//
// 00656fa0  64a100000000         mov eax, dword ptr fs:[0]
// 00656fa6  6aff                 push -1
// 00656fa8  685ebb8600           push 0x86bb5e
// 00656fad  50                   push eax
// 00656fae  b801000000           mov eax, 1
// 00656fb3  64892500000000       mov dword ptr fs:[0], esp
// 00656fba  840590c8a400         test byte ptr [0xa4c890], al
// 00656fc0  7530                 jne 0x656ff2
// 00656fc2  090590c8a400         or dword ptr [0xa4c890], eax
// 00656fc8  68c8098e00           push 0x8e09c8
// 00656fcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00656fd5  e8565ae0ff           call 0x45ca30
// 00656fda  50                   push eax
// 00656fdb  b9d0c7a400           mov ecx, 0xa4c7d0
// 00656fe0  e8fb27faff           call 0x5f97e0
// 00656fe5  6800a88900           push 0x89a800
// 00656fea  e80c2b0c00           call 0x719afb
// 00656fef  83c404               add esp, 4
// 00656ff2  8b0c24               mov ecx, dword ptr [esp]
// 00656ff5  b8d0c7a400           mov eax, 0xa4c7d0
// 00656ffa  64890d00000000       mov dword ptr fs:[0], ecx
// 00657001  83c40c               add esp, 0xc
// 00657004  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
