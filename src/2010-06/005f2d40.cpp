// roc 2010-06 005f2d40  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2d40
//
// 005f2d40  6aff                 push -1
// 005f2d42  68a3879900           push 0x9987a3
// 005f2d47  64a100000000         mov eax, dword ptr fs:[0]
// 005f2d4d  50                   push eax
// 005f2d4e  64892500000000       mov dword ptr fs:[0], esp
// 005f2d55  83ec08               sub esp, 8
// 005f2d58  56                   push esi
// 005f2d59  8bf1                 mov esi, ecx
// 005f2d5b  89742408             mov dword ptr [esp + 8], esi
// 005f2d5f  e82c18e5ff           call 0x444590
// 005f2d64  8d442407             lea eax, [esp + 7]
// 005f2d68  50                   push eax
// 005f2d69  8d54240b             lea edx, [esp + 0xb]
// 005f2d6d  8d4e1c               lea ecx, [esi + 0x1c]
// 005f2d70  52                   push edx
// 005f2d71  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005f2d79  c706bcefa200         mov dword ptr [esi], 0xa2efbc
// 005f2d7f  e82ccc1700           call 0x76f9b0
// 005f2d84  8d4e3c               lea ecx, [esi + 0x3c]
// 005f2d87  c644241401           mov byte ptr [esp + 0x14], 1
// 005f2d8c  e81ffaffff           call 0x5f27b0
// 005f2d91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2d95  8bc6                 mov eax, esi
// 005f2d97  5e                   pop esi
// 005f2d98  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2d9f  83c414               add esp, 0x14
// 005f2da2  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
