// roc 2007-03 0055db90  unit: seg_00550000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055db90
//
// 0055db90  8b442408             mov eax, dword ptr [esp + 8]
// 0055db94  56                   push esi
// 0055db95  8bf1                 mov esi, ecx
// 0055db97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055db9b  50                   push eax
// 0055db9c  51                   push ecx
// 0055db9d  8bce                 mov ecx, esi
// 0055db9f  e81c13feff           call 0x53eec0
// 0055dba4  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0055dbaa  8b4204               mov eax, dword ptr [edx + 4]
// 0055dbad  8d8e68010000         lea ecx, [esi + 0x168]
// 0055dbb3  6a01                 push 1
// 0055dbb5  ffd0                 call eax
// 0055dbb7  5e                   pop esi
// 0055dbb8  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?onChildChanged@DataModel@RBX@@MAEXPAVInstance@2@ABVPropertyChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
