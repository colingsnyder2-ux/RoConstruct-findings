// roc 2007-08 00413730  unit: std::runtime_error  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413730
//
// 00413730  56                   push esi
// 00413731  8bf1                 mov esi, ecx
// 00413733  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00413737  8b01                 mov eax, dword ptr [ecx]
// 00413739  8b5004               mov edx, dword ptr [eax + 4]
// 0041373c  ffd2                 call edx
// 0041373e  50                   push eax
// 0041373f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00413743  50                   push eax
// 00413744  56                   push esi
// 00413745  e856891500           call 0x56c0a0
// 0041374a  83c40c               add esp, 0xc
// 0041374d  5e                   pop esi
// 0041374e  c20800               ret 8
// library rbxgs/util\standardout.cpp (function ?print@StandardOut@RBX@@QAEXW4MessageType@2@ABVexception@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
