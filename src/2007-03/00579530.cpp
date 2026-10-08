// roc 2007-03 00579530  unit: seg_00570000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579530
//
// 00579530  8b442404             mov eax, dword ptr [esp + 4]
// 00579534  56                   push esi
// 00579535  50                   push eax
// 00579536  8bf1                 mov esi, ecx
// 00579538  e883b8fbff           call 0x534dc0
// 0057953d  c6865002000001       mov byte ptr [esi + 0x250], 1
// 00579544  5e                   pop esi
// 00579545  c20400               ret 4
// library rbxgs/v8datamodel\RootInstance.cpp (function ?onDescendentAdded@RootInstance@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
