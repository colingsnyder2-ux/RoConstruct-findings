// roc 2009-06 005ead40  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ead40
//
// 005ead40  64a100000000         mov eax, dword ptr fs:[0]
// 005ead46  6aff                 push -1
// 005ead48  68be4e8600           push 0x864ebe
// 005ead4d  50                   push eax
// 005ead4e  b801000000           mov eax, 1
// 005ead53  64892500000000       mov dword ptr fs:[0], esp
// 005ead5a  8405f85ba400         test byte ptr [0xa45bf8], al
// 005ead60  7530                 jne 0x5ead92
// 005ead62  0905f85ba400         or dword ptr [0xa45bf8], eax
// 005ead68  68f8e9a100           push 0xa1e9f8
// 005ead6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ead75  e876f7e1ff           call 0x40a4f0
// 005ead7a  50                   push eax
// 005ead7b  b9385ba400           mov ecx, 0xa45b38
// 005ead80  e85bea0000           call 0x5f97e0
// 005ead85  6880888900           push 0x898880
// 005ead8a  e86ced1200           call 0x719afb
// 005ead8f  83c404               add esp, 4
// 005ead92  8b0c24               mov ecx, dword ptr [esp]
// 005ead95  b8385ba400           mov eax, 0xa45b38
// 005ead9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eada1  83c40c               add esp, 0xc
// 005eada4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
