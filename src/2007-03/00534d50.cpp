// roc 2007-03 00534d50  unit: seg_00530000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534d50
//
// 00534d50  51                   push ecx
// 00534d51  56                   push esi
// 00534d52  8d442404             lea eax, [esp + 4]
// 00534d56  50                   push eax
// 00534d57  81c130010000         add ecx, 0x130
// 00534d5d  e8cefdffff           call 0x534b30
// 00534d62  8b30                 mov esi, dword ptr [eax]
// 00534d64  8b442404             mov eax, dword ptr [esp + 4]
// 00534d68  85c0                 test eax, eax
// 00534d6a  7427                 je 0x534d93
// 00534d6c  83c004               add eax, 4
// 00534d6f  50                   push eax
// 00534d70  ff15a8d27700         call dword ptr [0x77d2a8]
// 00534d76  85c0                 test eax, eax
// 00534d78  7519                 jne 0x534d93
// 00534d7a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534d7e  e83de6f2ff           call 0x4633c0
// 00534d83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534d87  85c9                 test ecx, ecx
// 00534d89  7408                 je 0x534d93
// 00534d8b  8b11                 mov edx, dword ptr [ecx]
// 00534d8d  8b02                 mov eax, dword ptr [edx]
// 00534d8f  6a01                 push 1
// 00534d91  ffd0                 call eax
// 00534d93  85f6                 test esi, esi
// 00534d95  7405                 je 0x534d9c
// 00534d97  8bc6                 mov eax, esi
// 00534d99  5e                   pop esi
// 00534d9a  59                   pop ecx
// 00534d9b  c3                   ret 
// 00534d9c  5e                   pop esi
// 00534d9d  83c404               add esp, 4
// 00534da0  e9abf6ffff           jmp 0x534450
// library rbxgs/humanoid\Humanoid.cpp (function ?getTopPVController@PVInstance@RBX@@QBEPAVController@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
