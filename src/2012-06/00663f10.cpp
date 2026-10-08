// from server: 100% by auto
// roc 2012-06 00663f10  unit: seg_00660000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663f10
//
// 00663f10  8b442404             mov eax, dword ptr [esp + 4]
// 00663f14  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00663f17  8b542414             mov edx, dword ptr [esp + 0x14]
// 00663f1b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663f1f  51                   push ecx
// 00663f20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663f24  52                   push edx
// 00663f25  8b542410             mov edx, dword ptr [esp + 0x10]
// 00663f29  6a00                 push 0
// 00663f2b  50                   push eax
// 00663f2c  8b02                 mov eax, dword ptr [edx]
// 00663f2e  51                   push ecx
// 00663f2f  50                   push eax
// 00663f30  e8abf5feff           call 0x6534e0
// 00663f35  83c418               add esp, 0x18
// 00663f38  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
