// roc 2009-12 0068be20  unit: ArchiveBinder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068be20
//
// 0068be20  6aff                 push -1
// 0068be22  6818649400           push 0x946418
// 0068be27  64a100000000         mov eax, dword ptr fs:[0]
// 0068be2d  50                   push eax
// 0068be2e  64892500000000       mov dword ptr fs:[0], esp
// 0068be35  83ec58               sub esp, 0x58
// 0068be38  8d0c24               lea ecx, [esp]
// 0068be3b  e850f7ffff           call 0x68b590
// 0068be40  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0068be44  8d0424               lea eax, [esp]
// 0068be47  50                   push eax
// 0068be48  51                   push ecx
// 0068be49  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0068be4d  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0068be55  e8d6b9faff           call 0x637830
// 0068be5a  8d0c24               lea ecx, [esp]
// 0068be5d  e87ef3ffff           call 0x68b1e0
// 0068be62  8d0c24               lea ecx, [esp]
// 0068be65  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0068be6d  e88efcffff           call 0x68bb00
// 0068be72  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0068be76  64890d00000000       mov dword ptr fs:[0], ecx
// 0068be7d  83c464               add esp, 0x64
// 0068be80  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?load@SerializerV2@@SAXPAVXmlElement@@PAVDataModel@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
