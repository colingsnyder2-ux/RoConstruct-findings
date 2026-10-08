// roc 2010-06 005f33a0  unit: ArchiveBinder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f33a0
//
// 005f33a0  6aff                 push -1
// 005f33a2  6878889900           push 0x998878
// 005f33a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f33ad  50                   push eax
// 005f33ae  64892500000000       mov dword ptr fs:[0], esp
// 005f33b5  83ec58               sub esp, 0x58
// 005f33b8  8d0c24               lea ecx, [esp]
// 005f33bb  e880f9ffff           call 0x5f2d40
// 005f33c0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005f33c4  8d0424               lea eax, [esp]
// 005f33c7  50                   push eax
// 005f33c8  51                   push ecx
// 005f33c9  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005f33cd  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005f33d5  e88664faff           call 0x599860
// 005f33da  8d0c24               lea ecx, [esp]
// 005f33dd  e87ef5ffff           call 0x5f2960
// 005f33e2  8d0c24               lea ecx, [esp]
// 005f33e5  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 005f33ed  e81efcffff           call 0x5f3010
// 005f33f2  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005f33f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005f33fd  83c464               add esp, 0x64
// 005f3400  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?load@SerializerV2@@SAXPAVXmlElement@@PAVDataModel@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
