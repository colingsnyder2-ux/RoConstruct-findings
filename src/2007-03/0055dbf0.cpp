// roc 2007-03 0055dbf0  unit: seg_00550000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055dbf0
//
// 0055dbf0  8b442404             mov eax, dword ptr [esp + 4]
// 0055dbf4  56                   push esi
// 0055dbf5  50                   push eax
// 0055dbf6  8bf1                 mov esi, ecx
// 0055dbf8  e8e330ffff           call 0x550ce0
// 0055dbfd  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0055dc03  8d8e68010000         lea ecx, [esi + 0x168]
// 0055dc09  5e                   pop esi
// 0055dc0a  c744240401000000     mov dword ptr [esp + 4], 1
// 0055dc12  8b4204               mov eax, dword ptr [edx + 4]
// 0055dc15  ffe0                 jmp eax
// library rbxgs/v8datamodel\DataModel.cpp (function ?onDescendentAdded@DataModel@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
