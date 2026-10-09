// roc 2009-06 004bcf00  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bcf00
//
// 004bcf00  64a100000000         mov eax, dword ptr fs:[0]
// 004bcf06  6aff                 push -1
// 004bcf08  681e938500           push 0x85931e
// 004bcf0d  50                   push eax
// 004bcf0e  b801000000           mov eax, 1
// 004bcf13  64892500000000       mov dword ptr fs:[0], esp
// 004bcf1a  840578d8a300         test byte ptr [0xa3d878], al
// 004bcf20  7530                 jne 0x4bcf52
// 004bcf22  090578d8a300         or dword ptr [0xa3d878], eax
// 004bcf28  68983d8e00           push 0x8e3d98
// 004bcf2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bcf35  e856f5ffff           call 0x4bc490
// 004bcf3a  50                   push eax
// 004bcf3b  b9b8d7a300           mov ecx, 0xa3d7b8
// 004bcf40  e89bc81300           call 0x5f97e0
// 004bcf45  68e0508900           push 0x8950e0
// 004bcf4a  e8accb2500           call 0x719afb
// 004bcf4f  83c404               add esp, 4
// 004bcf52  8b0c24               mov ecx, dword ptr [esp]
// 004bcf55  b8b8d7a300           mov eax, 0xa3d7b8
// 004bcf5a  64890d00000000       mov dword ptr fs:[0], ecx
// 004bcf61  83c40c               add esp, 0xc
// 004bcf64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
