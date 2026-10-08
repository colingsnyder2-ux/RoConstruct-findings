// from server: 100% by auto
// roc 2010-06 00582550  unit: seg_00580000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582550
//
// 00582550  8b442404             mov eax, dword ptr [esp + 4]
// 00582554  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00582557  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058255b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058255f  51                   push ecx
// 00582560  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00582564  52                   push edx
// 00582565  8b542410             mov edx, dword ptr [esp + 0x10]
// 00582569  6a00                 push 0
// 0058256b  50                   push eax
// 0058256c  8b02                 mov eax, dword ptr [edx]
// 0058256e  51                   push ecx
// 0058256f  50                   push eax
// 00582570  e8fbadfeff           call 0x56d370
// 00582575  83c418               add esp, 0x18
// 00582578  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
