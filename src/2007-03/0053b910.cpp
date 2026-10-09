// roc 2007-03 0053b910  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b910
//
// 0053b910  64a100000000         mov eax, dword ptr fs:[0]
// 0053b916  6aff                 push -1
// 0053b918  68ee1b7500           push 0x751bee
// 0053b91d  50                   push eax
// 0053b91e  b801000000           mov eax, 1
// 0053b923  64892500000000       mov dword ptr fs:[0], esp
// 0053b92a  8405d0b68b00         test byte ptr [0x8bb6d0], al
// 0053b930  7530                 jne 0x53b962
// 0053b932  0905d0b68b00         or dword ptr [0x8bb6d0], eax
// 0053b938  68f87c8900           push 0x897cf8
// 0053b93d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053b945  e816e2edff           call 0x419b60
// 0053b94a  50                   push eax
// 0053b94b  b948b68b00           mov ecx, 0x8bb648
// 0053b950  e88b540300           call 0x570de0
// 0053b955  68e0947700           push 0x7794e0
// 0053b95a  e854380e00           call 0x61f1b3
// 0053b95f  83c404               add esp, 4
// 0053b962  8b0c24               mov ecx, dword ptr [esp]
// 0053b965  b848b68b00           mov eax, 0x8bb648
// 0053b96a  64890d00000000       mov dword ptr fs:[0], ecx
// 0053b971  83c40c               add esp, 0xc
// 0053b974  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
