// roc 2009-06 005ea9c0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea9c0
//
// 005ea9c0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea9c6  6aff                 push -1
// 005ea9c8  68be4d8600           push 0x864dbe
// 005ea9cd  50                   push eax
// 005ea9ce  b801000000           mov eax, 1
// 005ea9d3  64892500000000       mov dword ptr fs:[0], esp
// 005ea9da  8405b855a400         test byte ptr [0xa455b8], al
// 005ea9e0  7530                 jne 0x5eaa12
// 005ea9e2  0905b855a400         or dword ptr [0xa455b8], eax
// 005ea9e8  682499a000           push 0xa09924
// 005ea9ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea9f5  e8f6fae1ff           call 0x40a4f0
// 005ea9fa  50                   push eax
// 005ea9fb  b9f854a400           mov ecx, 0xa454f8
// 005eaa00  e8dbed0000           call 0x5f97e0
// 005eaa05  6800898900           push 0x898900
// 005eaa0a  e8ecf01200           call 0x719afb
// 005eaa0f  83c404               add esp, 4
// 005eaa12  8b0c24               mov ecx, dword ptr [esp]
// 005eaa15  b8f854a400           mov eax, 0xa454f8
// 005eaa1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaa21  83c40c               add esp, 0xc
// 005eaa24  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
