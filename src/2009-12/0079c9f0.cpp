// roc 2009-12 0079c9f0  unit: seg_00790000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079c9f0
//
// 0079c9f0  51                   push ecx
// 0079c9f1  56                   push esi
// 0079c9f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079c9f6  8d442404             lea eax, [esp + 4]
// 0079c9fa  50                   push eax
// 0079c9fb  6a01                 push 1
// 0079c9fd  56                   push esi
// 0079c9fe  e82ddefeff           call 0x78a830
// 0079ca03  dd1c24               fstp qword ptr [esp]
// 0079ca06  ff1508b99800         call dword ptr [0x98b908]
// 0079ca0c  dd5c2404             fstp qword ptr [esp + 4]
// 0079ca10  83c404               add esp, 4
// 0079ca13  56                   push esi
// 0079ca14  e847c3feff           call 0x788d60
// 0079ca19  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079ca1d  51                   push ecx
// 0079ca1e  56                   push esi
// 0079ca1f  e85cc3feff           call 0x788d80
// 0079ca24  83c414               add esp, 0x14
// 0079ca27  b802000000           mov eax, 2
// 0079ca2c  5e                   pop esi
// 0079ca2d  59                   pop ecx
// 0079ca2e  c3                   ret 
// copied from an identical function in another client (function _math_frexp)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lmathlib.c