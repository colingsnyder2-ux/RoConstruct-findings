// roc 2009-06 005ea8e0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea8e0
//
// 005ea8e0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea8e6  6aff                 push -1
// 005ea8e8  687e4d8600           push 0x864d7e
// 005ea8ed  50                   push eax
// 005ea8ee  b801000000           mov eax, 1
// 005ea8f3  64892500000000       mov dword ptr fs:[0], esp
// 005ea8fa  84052854a400         test byte ptr [0xa45428], al
// 005ea900  7530                 jne 0x5ea932
// 005ea902  09052854a400         or dword ptr [0xa45428], eax
// 005ea908  68b84da100           push 0xa14db8
// 005ea90d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea915  e856ffffff           call 0x5ea870
// 005ea91a  50                   push eax
// 005ea91b  b96853a400           mov ecx, 0xa45368
// 005ea920  e8bbee0000           call 0x5f97e0
// 005ea925  6820898900           push 0x898920
// 005ea92a  e8ccf11200           call 0x719afb
// 005ea92f  83c404               add esp, 4
// 005ea932  8b0c24               mov ecx, dword ptr [esp]
// 005ea935  b86853a400           mov eax, 0xa45368
// 005ea93a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea941  83c40c               add esp, 0xc
// 005ea944  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
