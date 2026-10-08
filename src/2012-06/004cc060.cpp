// from server: 100% by auto
// roc 2012-06 004cc060  unit: Ogre::RbxSceneManagerFactory  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cc060
//
// 004cc060  6aff                 push -1
// 004cc062  688866aa00           push 0xaa6688
// 004cc067  64a100000000         mov eax, dword ptr fs:[0]
// 004cc06d  50                   push eax
// 004cc06e  64892500000000       mov dword ptr fs:[0], esp
// 004cc075  51                   push ecx
// 004cc076  56                   push esi
// 004cc077  8bf1                 mov esi, ecx
// 004cc079  89742404             mov dword ptr [esp + 4], esi
// 004cc07d  8d4e1c               lea ecx, [esi + 0x1c]
// 004cc080  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cc088  e883ffffff           call 0x4cc010
// 004cc08d  8bce                 mov ecx, esi
// 004cc08f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004cc097  e8447c1a00           call 0x673ce0
// 004cc09c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cc0a0  5e                   pop esi
// 004cc0a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc0a8  83c410               add esp, 0x10
// 004cc0ab  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1data@?$object_cache@KV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
