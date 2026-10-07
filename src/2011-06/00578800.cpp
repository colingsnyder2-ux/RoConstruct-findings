// roc 2011-06 00578800  unit: seg_00570000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578800
//
// 00578800  8b442404             mov eax, dword ptr [esp + 4]
// 00578804  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00578807  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057880b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057880f  51                   push ecx
// 00578810  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00578814  52                   push edx
// 00578815  8b542410             mov edx, dword ptr [esp + 0x10]
// 00578819  6a00                 push 0
// 0057881b  50                   push eax
// 0057881c  8b02                 mov eax, dword ptr [edx]
// 0057881e  51                   push ecx
// 0057881f  50                   push eax
// 00578820  e8abf5feff           call 0x567dd0
// 00578825  83c418               add esp, 0x18
// 00578828  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
