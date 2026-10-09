// roc 2009-06 005ebfa0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebfa0
//
// 005ebfa0  64a100000000         mov eax, dword ptr fs:[0]
// 005ebfa6  6aff                 push -1
// 005ebfa8  68fe538600           push 0x8653fe
// 005ebfad  50                   push eax
// 005ebfae  b801000000           mov eax, 1
// 005ebfb3  64892500000000       mov dword ptr fs:[0], esp
// 005ebfba  8405c87ca400         test byte ptr [0xa47cc8], al
// 005ebfc0  7530                 jne 0x5ebff2
// 005ebfc2  0905c87ca400         or dword ptr [0xa47cc8], eax
// 005ebfc8  6824a1a100           push 0xa1a124
// 005ebfcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebfd5  e816e5e1ff           call 0x40a4f0
// 005ebfda  50                   push eax
// 005ebfdb  b9087ca400           mov ecx, 0xa47c08
// 005ebfe0  e8fbd70000           call 0x5f97e0
// 005ebfe5  68e0858900           push 0x8985e0
// 005ebfea  e80cdb1200           call 0x719afb
// 005ebfef  83c404               add esp, 4
// 005ebff2  8b0c24               mov ecx, dword ptr [esp]
// 005ebff5  b8087ca400           mov eax, 0xa47c08
// 005ebffa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec001  83c40c               add esp, 0xc
// 005ec004  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
