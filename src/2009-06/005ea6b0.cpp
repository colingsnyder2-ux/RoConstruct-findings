// roc 2009-06 005ea6b0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea6b0
//
// 005ea6b0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea6b6  6aff                 push -1
// 005ea6b8  68de4c8600           push 0x864cde
// 005ea6bd  50                   push eax
// 005ea6be  b801000000           mov eax, 1
// 005ea6c3  64892500000000       mov dword ptr fs:[0], esp
// 005ea6ca  84054050a400         test byte ptr [0xa45040], al
// 005ea6d0  7530                 jne 0x5ea702
// 005ea6d2  09054050a400         or dword ptr [0xa45040], eax
// 005ea6d8  681088a000           push 0xa08810
// 005ea6dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea6e5  e806fee1ff           call 0x40a4f0
// 005ea6ea  50                   push eax
// 005ea6eb  b9804fa400           mov ecx, 0xa44f80
// 005ea6f0  e8ebf00000           call 0x5f97e0
// 005ea6f5  6870898900           push 0x898970
// 005ea6fa  e8fcf31200           call 0x719afb
// 005ea6ff  83c404               add esp, 4
// 005ea702  8b0c24               mov ecx, dword ptr [esp]
// 005ea705  b8804fa400           mov eax, 0xa44f80
// 005ea70a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea711  83c40c               add esp, 0xc
// 005ea714  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
