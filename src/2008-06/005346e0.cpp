// from server: 100% by auto
// roc 2008-06 005346e0  unit: seg_00530000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005346e0
//
// 005346e0  8b442404             mov eax, dword ptr [esp + 4]
// 005346e4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 005346e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 005346eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 005346ef  51                   push ecx
// 005346f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005346f4  52                   push edx
// 005346f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005346f9  6a00                 push 0
// 005346fb  50                   push eax
// 005346fc  8b02                 mov eax, dword ptr [edx]
// 005346fe  51                   push ecx
// 005346ff  50                   push eax
// 00534700  e82b14ffff           call 0x525b30
// 00534705  83c418               add esp, 0x18
// 00534708  c3                   ret 
// library jpeg-6b/jdcolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
