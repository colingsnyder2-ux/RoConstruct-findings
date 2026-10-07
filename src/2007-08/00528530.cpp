// roc 2007-08 00528530  unit: seg_00520000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528530
//
// 00528530  8b442404             mov eax, dword ptr [esp + 4]
// 00528534  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00528537  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052853b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052853f  51                   push ecx
// 00528540  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00528544  52                   push edx
// 00528545  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528549  6a00                 push 0
// 0052854b  50                   push eax
// 0052854c  8b02                 mov eax, dword ptr [edx]
// 0052854e  51                   push ecx
// 0052854f  50                   push eax
// 00528550  e82b5dffff           call 0x51e280
// 00528555  83c418               add esp, 0x18
// 00528558  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
