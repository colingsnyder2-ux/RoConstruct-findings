// roc 2008-06 0045dc70  unit: RBX::VCamera::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045dc70
//
// 0045dc70  64a100000000         mov eax, dword ptr fs:[0]
// 0045dc76  6aff                 push -1
// 0045dc78  687e2e7c00           push 0x7c2e7e
// 0045dc7d  50                   push eax
// 0045dc7e  b801000000           mov eax, 1
// 0045dc83  64892500000000       mov dword ptr fs:[0], esp
// 0045dc8a  840560df9600         test byte ptr [0x96df60], al
// 0045dc90  7530                 jne 0x45dcc2
// 0045dc92  090560df9600         or dword ptr [0x96df60], eax
// 0045dc98  686c0c9500           push 0x950c6c
// 0045dc9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0045dca5  e8d6d0faff           call 0x40ad80
// 0045dcaa  50                   push eax
// 0045dcab  b9a0de9600           mov ecx, 0x96dea0
// 0045dcb0  e83b2c1100           call 0x5708f0
// 0045dcb5  6830af7f00           push 0x7faf30
// 0045dcba  e8f03a2400           call 0x6a17af
// 0045dcbf  83c404               add esp, 4
// 0045dcc2  8b0c24               mov ecx, dword ptr [esp]
// 0045dcc5  b8a0de9600           mov eax, 0x96dea0
// 0045dcca  64890d00000000       mov dword ptr fs:[0], ecx
// 0045dcd1  83c40c               add esp, 0xc
// 0045dcd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
