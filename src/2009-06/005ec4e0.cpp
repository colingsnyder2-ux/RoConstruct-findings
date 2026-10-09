// roc 2009-06 005ec4e0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec4e0
//
// 005ec4e0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec4e6  6aff                 push -1
// 005ec4e8  687e558600           push 0x86557e
// 005ec4ed  50                   push eax
// 005ec4ee  b801000000           mov eax, 1
// 005ec4f3  64892500000000       mov dword ptr fs:[0], esp
// 005ec4fa  84052886a400         test byte ptr [0xa48628], al
// 005ec500  7530                 jne 0x5ec532
// 005ec502  09052886a400         or dword ptr [0xa48628], eax
// 005ec508  68200fa200           push 0xa20f20
// 005ec50d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec515  e856e3ffff           call 0x5ea870
// 005ec51a  50                   push eax
// 005ec51b  b96885a400           mov ecx, 0xa48568
// 005ec520  e8bbd20000           call 0x5f97e0
// 005ec525  6820858900           push 0x898520
// 005ec52a  e8ccd51200           call 0x719afb
// 005ec52f  83c404               add esp, 4
// 005ec532  8b0c24               mov ecx, dword ptr [esp]
// 005ec535  b86885a400           mov eax, 0xa48568
// 005ec53a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec541  83c40c               add esp, 0xc
// 005ec544  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
