// roc 2007-03 0055dbc0  unit: seg_00550000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055dbc0
//
// 0055dbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0055dbc4  56                   push esi
// 0055dbc5  50                   push eax
// 0055dbc6  8bf1                 mov esi, ecx
// 0055dbc8  e8f330ffff           call 0x550cc0
// 0055dbcd  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0055dbd3  8d8e68010000         lea ecx, [esi + 0x168]
// 0055dbd9  5e                   pop esi
// 0055dbda  c744240401000000     mov dword ptr [esp + 4], 1
// 0055dbe2  8b4204               mov eax, dword ptr [edx + 4]
// 0055dbe5  ffe0                 jmp eax
// library rbxgs/v8datamodel\DataModel.cpp (function ?onDescendentAdded@DataModel@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
