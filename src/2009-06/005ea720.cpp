// roc 2009-06 005ea720  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea720
//
// 005ea720  64a100000000         mov eax, dword ptr fs:[0]
// 005ea726  6aff                 push -1
// 005ea728  68fe4c8600           push 0x864cfe
// 005ea72d  50                   push eax
// 005ea72e  b801000000           mov eax, 1
// 005ea733  64892500000000       mov dword ptr fs:[0], esp
// 005ea73a  84050851a400         test byte ptr [0xa45108], al
// 005ea740  7530                 jne 0x5ea772
// 005ea742  09050851a400         or dword ptr [0xa45108], eax
// 005ea748  681888a000           push 0xa08818
// 005ea74d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea755  e856ffffff           call 0x5ea6b0
// 005ea75a  50                   push eax
// 005ea75b  b94850a400           mov ecx, 0xa45048
// 005ea760  e87bf00000           call 0x5f97e0
// 005ea765  6860898900           push 0x898960
// 005ea76a  e88cf31200           call 0x719afb
// 005ea76f  83c404               add esp, 4
// 005ea772  8b0c24               mov ecx, dword ptr [esp]
// 005ea775  b84850a400           mov eax, 0xa45048
// 005ea77a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea781  83c40c               add esp, 0xc
// 005ea784  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
