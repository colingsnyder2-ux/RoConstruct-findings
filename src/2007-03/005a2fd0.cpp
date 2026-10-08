// roc 2007-03 005a2fd0  unit: seg_005a0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2fd0
//
// 005a2fd0  8b442404             mov eax, dword ptr [esp + 4]
// 005a2fd4  50                   push eax
// 005a2fd5  e856c7eeff           call 0x48f730
// 005a2fda  83c404               add esp, 4
// 005a2fdd  89442404             mov dword ptr [esp + 4], eax
// 005a2fe1  e91afeffff           jmp 0x5a2e00
// library rbxgs/humanoid\Humanoid.cpp (function ?getLocalHeadFromContext@Humanoid@RBX@@SAPAVPartInstance@2@PBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
