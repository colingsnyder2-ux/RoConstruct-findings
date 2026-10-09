// roc 2009-06 005d85f0  unit: RBX::VTeam::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d85f0
//
// 005d85f0  64a100000000         mov eax, dword ptr fs:[0]
// 005d85f6  6aff                 push -1
// 005d85f8  68ae318600           push 0x8631ae
// 005d85fd  50                   push eax
// 005d85fe  b801000000           mov eax, 1
// 005d8603  64892500000000       mov dword ptr fs:[0], esp
// 005d860a  84056844a400         test byte ptr [0xa44468], al
// 005d8610  7530                 jne 0x5d8642
// 005d8612  09056844a400         or dword ptr [0xa44468], eax
// 005d8618  68e8548d00           push 0x8d54e8
// 005d861d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d8625  e8c61ee3ff           call 0x40a4f0
// 005d862a  50                   push eax
// 005d862b  b9a843a400           mov ecx, 0xa443a8
// 005d8630  e8ab110200           call 0x5f97e0
// 005d8635  6830788900           push 0x897830
// 005d863a  e8bc141400           call 0x719afb
// 005d863f  83c404               add esp, 4
// 005d8642  8b0c24               mov ecx, dword ptr [esp]
// 005d8645  b8a843a400           mov eax, 0xa443a8
// 005d864a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8651  83c40c               add esp, 0xc
// 005d8654  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
