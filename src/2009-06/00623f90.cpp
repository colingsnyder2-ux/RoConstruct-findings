// roc 2009-06 00623f90  unit: ArchiveBinder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623f90
//
// 00623f90  6aff                 push -1
// 00623f92  68988b8600           push 0x868b98
// 00623f97  64a100000000         mov eax, dword ptr fs:[0]
// 00623f9d  50                   push eax
// 00623f9e  64892500000000       mov dword ptr fs:[0], esp
// 00623fa5  83ec58               sub esp, 0x58
// 00623fa8  8d0c24               lea ecx, [esp]
// 00623fab  e890f3ffff           call 0x623340
// 00623fb0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00623fb4  8d0424               lea eax, [esp]
// 00623fb7  50                   push eax
// 00623fb8  51                   push ecx
// 00623fb9  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00623fbd  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00623fc5  e8f6e8faff           call 0x5d28c0
// 00623fca  8d0c24               lea ecx, [esp]
// 00623fcd  e83eefffff           call 0x622f10
// 00623fd2  8d0c24               lea ecx, [esp]
// 00623fd5  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00623fdd  e88efcffff           call 0x623c70
// 00623fe2  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00623fe6  64890d00000000       mov dword ptr fs:[0], ecx
// 00623fed  83c464               add esp, 0x64
// 00623ff0  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?load@SerializerV2@@SAXPAVXmlElement@@PAVDataModel@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
