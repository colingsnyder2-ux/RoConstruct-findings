// roc 2008-06 0059f7e0  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f7e0
//
// 0059f7e0  64a100000000         mov eax, dword ptr fs:[0]
// 0059f7e6  6aff                 push -1
// 0059f7e8  680e287d00           push 0x7d280e
// 0059f7ed  50                   push eax
// 0059f7ee  b801000000           mov eax, 1
// 0059f7f3  64892500000000       mov dword ptr fs:[0], esp
// 0059f7fa  840508679700         test byte ptr [0x976708], al
// 0059f800  7530                 jne 0x59f832
// 0059f802  090508679700         or dword ptr [0x976708], eax
// 0059f808  68acaf9400           push 0x94afac
// 0059f80d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059f815  e866b5e6ff           call 0x40ad80
// 0059f81a  50                   push eax
// 0059f81b  b948669700           mov ecx, 0x976648
// 0059f820  e8cb10fdff           call 0x5708f0
// 0059f825  6880e07f00           push 0x7fe080
// 0059f82a  e8801f1000           call 0x6a17af
// 0059f82f  83c404               add esp, 4
// 0059f832  8b0c24               mov ecx, dword ptr [esp]
// 0059f835  b848669700           mov eax, 0x976648
// 0059f83a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f841  83c40c               add esp, 0xc
// 0059f844  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
