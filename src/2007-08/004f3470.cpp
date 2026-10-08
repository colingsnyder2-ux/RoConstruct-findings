// roc 2007-08 004f3470  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3470
//
// 004f3470  83ec18               sub esp, 0x18
// 004f3473  8d0424               lea eax, [esp]
// 004f3476  50                   push eax
// 004f3477  ff1524d27700         call dword ptr [0x77d224]
// 004f347d  85c0                 test eax, eax
// 004f347f  7459                 je 0x4f34da
// 004f3481  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3485  8b1424               mov edx, dword ptr [esp]
// 004f3488  53                   push ebx
// 004f3489  56                   push esi
// 004f348a  57                   push edi
// 004f348b  6a00                 push 0
// 004f348d  68e8030000           push 0x3e8
// 004f3492  51                   push ecx
// 004f3493  52                   push edx
// 004f3494  e817dd1300           call 0x6311b0
// 004f3499  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f349d  6a00                 push 0
// 004f349f  51                   push ecx
// 004f34a0  52                   push edx
// 004f34a1  50                   push eax
// 004f34a2  e8a9d71300           call 0x630c50
// 004f34a7  8b3d28d27700         mov edi, dword ptr [0x77d228]
// 004f34ad  8bda                 mov ebx, edx
// 004f34af  8d54241c             lea edx, [esp + 0x1c]
// 004f34b3  52                   push edx
// 004f34b4  8bf0                 mov esi, eax
// 004f34b6  ffd7                 call edi
// 004f34b8  8d442414             lea eax, [esp + 0x14]
// 004f34bc  50                   push eax
// 004f34bd  ffd7                 call edi
// 004f34bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f34c3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 004f34c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f34cb  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 004f34cf  3bc6                 cmp eax, esi
// 004f34d1  7504                 jne 0x4f34d7
// 004f34d3  3bcb                 cmp ecx, ebx
// 004f34d5  74e1                 je 0x4f34b8
// 004f34d7  5f                   pop edi
// 004f34d8  5e                   pop esi
// 004f34d9  5b                   pop ebx
// 004f34da  83c418               add esp, 0x18
// 004f34dd  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
