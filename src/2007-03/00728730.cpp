// roc 2007-03 00728730  unit: seg_00720000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728730
//
// 00728730  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00728734  83ec08               sub esp, 8
// 00728737  80790c00             cmp byte ptr [ecx + 0xc], 0
// 0072873b  56                   push esi
// 0072873c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00728740  7511                 jne 0x728753
// 00728742  8b4604               mov eax, dword ptr [esi + 4]
// 00728745  8b16                 mov edx, dword ptr [esi]
// 00728747  50                   push eax
// 00728748  52                   push edx
// 00728749  8d44240c             lea eax, [esp + 0xc]
// 0072874d  50                   push eax
// 0072874e  e86dffffff           call 0x7286c0
// 00728753  56                   push esi
// 00728754  e89759efff           call 0x61e0f0
// 00728759  83c404               add esp, 4
// 0072875c  5e                   pop esi
// 0072875d  83c408               add esp, 8
// 00728760  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?signal_disconnected@trackable@signals@boost@@CAXPAX0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
