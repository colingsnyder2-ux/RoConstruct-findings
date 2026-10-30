// roc 2009-12 006209f0  unit: seg_00620000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006209f0
//
// 006209f0  8b442404             mov eax, dword ptr [esp + 4]
// 006209f4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 006209f7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006209fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006209ff  51                   push ecx
// 00620a00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00620a04  52                   push edx
// 00620a05  8b542410             mov edx, dword ptr [esp + 0x10]
// 00620a09  6a00                 push 0
// 00620a0b  50                   push eax
// 00620a0c  8b02                 mov eax, dword ptr [edx]
// 00620a0e  51                   push ecx
// 00620a0f  50                   push eax
// 00620a10  e87bb2feff           call 0x60bc90
// 00620a15  83c418               add esp, 0x18
// 00620a18  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
