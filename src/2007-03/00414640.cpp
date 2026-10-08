// roc 2007-03 00414640  unit: seg_00410000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00414640
//
// 00414640  56                   push esi
// 00414641  8bf1                 mov esi, ecx
// 00414643  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00414647  8b01                 mov eax, dword ptr [ecx]
// 00414649  8b5004               mov edx, dword ptr [eax + 4]
// 0041464c  ffd2                 call edx
// 0041464e  50                   push eax
// 0041464f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00414653  50                   push eax
// 00414654  56                   push esi
// 00414655  e816771500           call 0x56bd70
// 0041465a  83c40c               add esp, 0xc
// 0041465d  5e                   pop esi
// 0041465e  c20800               ret 8
// library rbxgs/util\standardout.cpp (function ?print@StandardOut@RBX@@QAEXW4MessageType@2@ABVexception@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
