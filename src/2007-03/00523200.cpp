// roc 2007-03 00523200  unit: seg_00520000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523200
//
// 00523200  8b442404             mov eax, dword ptr [esp + 4]
// 00523204  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00523207  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052320b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052320f  51                   push ecx
// 00523210  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00523214  52                   push edx
// 00523215  8b542410             mov edx, dword ptr [esp + 0x10]
// 00523219  6a00                 push 0
// 0052321b  50                   push eax
// 0052321c  8b02                 mov eax, dword ptr [edx]
// 0052321e  51                   push ecx
// 0052321f  50                   push eax
// 00523220  e81b14ffff           call 0x514640
// 00523225  83c418               add esp, 0x18
// 00523228  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
