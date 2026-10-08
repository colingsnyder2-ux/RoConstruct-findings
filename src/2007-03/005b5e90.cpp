// roc 2007-03 005b5e90  unit: seg_005b0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5e90
//
// 005b5e90  8b442404             mov eax, dword ptr [esp + 4]
// 005b5e94  56                   push esi
// 005b5e95  50                   push eax
// 005b5e96  8bf1                 mov esi, ecx
// 005b5e98  e8b3aaf8ff           call 0x540950
// 005b5e9d  b001                 mov al, 1
// 005b5e9f  888634010000         mov byte ptr [esi + 0x134], al
// 005b5ea5  888601010000         mov byte ptr [esi + 0x101], al
// 005b5eab  888619010000         mov byte ptr [esi + 0x119], al
// 005b5eb1  5e                   pop esi
// 005b5eb2  c20400               ret 4
// library rbxgs/v8datamodel\PVInstance.cpp (function ?onDescendentAdded@PVInstance@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
