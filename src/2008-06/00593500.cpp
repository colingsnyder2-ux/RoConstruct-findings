// roc 2008-06 00593500  unit: ArchiveBinder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593500
//
// 00593500  6aff                 push -1
// 00593502  68f81d7d00           push 0x7d1df8
// 00593507  64a100000000         mov eax, dword ptr fs:[0]
// 0059350d  50                   push eax
// 0059350e  64892500000000       mov dword ptr fs:[0], esp
// 00593515  83ec58               sub esp, 0x58
// 00593518  8d0c24               lea ecx, [esp]
// 0059351b  e820f4ffff           call 0x592940
// 00593520  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00593524  8d0424               lea eax, [esp]
// 00593527  50                   push eax
// 00593528  51                   push ecx
// 00593529  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0059352d  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00593535  e86681fcff           call 0x55b6a0
// 0059353a  8d0c24               lea ecx, [esp]
// 0059353d  e8def1ffff           call 0x592720
// 00593542  8d0c24               lea ecx, [esp]
// 00593545  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0059354d  e88efcffff           call 0x5931e0
// 00593552  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00593556  64890d00000000       mov dword ptr fs:[0], ecx
// 0059355d  83c464               add esp, 0x64
// 00593560  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?load@SerializerV2@@SAXPAVXmlElement@@PAVDataModel@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
