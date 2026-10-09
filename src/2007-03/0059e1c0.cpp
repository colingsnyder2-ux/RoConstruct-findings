// roc 2007-03 0059e1c0  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e1c0
//
// 0059e1c0  64a100000000         mov eax, dword ptr fs:[0]
// 0059e1c6  6aff                 push -1
// 0059e1c8  68be8b7500           push 0x758bbe
// 0059e1cd  50                   push eax
// 0059e1ce  b801000000           mov eax, 1
// 0059e1d3  64892500000000       mov dword ptr fs:[0], esp
// 0059e1da  840500eb8b00         test byte ptr [0x8beb00], al
// 0059e1e0  7530                 jne 0x59e212
// 0059e1e2  090500eb8b00         or dword ptr [0x8beb00], eax
// 0059e1e8  6858207b00           push 0x7b2058
// 0059e1ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059e1f5  e816feffff           call 0x59e010
// 0059e1fa  50                   push eax
// 0059e1fb  b978ea8b00           mov ecx, 0x8bea78
// 0059e200  e8db2bfdff           call 0x570de0
// 0059e205  6890aa7700           push 0x77aa90
// 0059e20a  e8a40f0800           call 0x61f1b3
// 0059e20f  83c404               add esp, 4
// 0059e212  8b0c24               mov ecx, dword ptr [esp]
// 0059e215  b878ea8b00           mov eax, 0x8bea78
// 0059e21a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e221  83c40c               add esp, 0xc
// 0059e224  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
