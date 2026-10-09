// roc 2009-06 005ec320  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec320
//
// 005ec320  64a100000000         mov eax, dword ptr fs:[0]
// 005ec326  6aff                 push -1
// 005ec328  68fe548600           push 0x8654fe
// 005ec32d  50                   push eax
// 005ec32e  b801000000           mov eax, 1
// 005ec333  64892500000000       mov dword ptr fs:[0], esp
// 005ec33a  84050883a400         test byte ptr [0xa48308], al
// 005ec340  7530                 jne 0x5ec372
// 005ec342  09050883a400         or dword ptr [0xa48308], eax
// 005ec348  68c021a100           push 0xa121c0
// 005ec34d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec355  e896e1e1ff           call 0x40a4f0
// 005ec35a  50                   push eax
// 005ec35b  b94882a400           mov ecx, 0xa48248
// 005ec360  e87bd40000           call 0x5f97e0
// 005ec365  6860858900           push 0x898560
// 005ec36a  e88cd71200           call 0x719afb
// 005ec36f  83c404               add esp, 4
// 005ec372  8b0c24               mov ecx, dword ptr [esp]
// 005ec375  b84882a400           mov eax, 0xa48248
// 005ec37a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec381  83c40c               add esp, 0xc
// 005ec384  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
