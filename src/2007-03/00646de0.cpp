// roc 2007-03 00646de0  unit: seg_00640000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00646de0
//
// 00646de0  8b442404             mov eax, dword ptr [esp + 4]
// 00646de4  56                   push esi
// 00646de5  50                   push eax
// 00646de6  8bf1                 mov esi, ecx
// 00646de8  e89f7ffdff           call 0x61ed8c
// 00646ded  8bce                 mov ecx, esi
// 00646def  e83ce4ffff           call 0x645230
// 00646df4  5e                   pop esi
// 00646df5  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?putInKernel@Contact@RBX@@EAEXPAVKernel@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
