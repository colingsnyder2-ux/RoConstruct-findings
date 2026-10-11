// roc 2007-03 004891d0  unit: seg_00480000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004891d0
//
// 004891d0  8b442408             mov eax, dword ptr [esp + 8]
// 004891d4  85c0                 test eax, eax
// 004891d6  56                   push esi
// 004891d7  8bf1                 mov esi, ecx
// 004891d9  740b                 je 0x4891e6
// 004891db  50                   push eax
// 004891dc  e8fffeffff           call 0x4890e0
// 004891e1  83c404               add esp, 4
// 004891e4  eb02                 jmp 0x4891e8
// 004891e6  33c0                 xor eax, eax
// 004891e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004891eb  8d54240c             lea edx, [esp + 0xc]
// 004891ef  8944240c             mov dword ptr [esp + 0xc], eax
// 004891f3  8b01                 mov eax, dword ptr [ecx]
// 004891f5  8b4008               mov eax, dword ptr [eax + 8]
// 004891f8  52                   push edx
// 004891f9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004891fd  52                   push edx
// 004891fe  ffd0                 call eax
// 00489200  5e                   pop esi
// 00489201  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
