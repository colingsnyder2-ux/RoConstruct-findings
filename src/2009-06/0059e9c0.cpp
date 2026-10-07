// roc 2009-06 0059e9c0  unit: seg_00590000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e9c0
//
// 0059e9c0  8b442404             mov eax, dword ptr [esp + 4]
// 0059e9c4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0059e9c7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e9cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e9cf  51                   push ecx
// 0059e9d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059e9d4  52                   push edx
// 0059e9d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059e9d9  6a00                 push 0
// 0059e9db  50                   push eax
// 0059e9dc  8b02                 mov eax, dword ptr [edx]
// 0059e9de  51                   push ecx
// 0059e9df  50                   push eax
// 0059e9e0  e85bb4feff           call 0x589e40
// 0059e9e5  83c418               add esp, 0x18
// 0059e9e8  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
