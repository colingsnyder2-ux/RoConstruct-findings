// from server: 100% by colin
// roc 2008-06 00530870  unit: seg_00530000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530870
//
// 00530870  8b442408             mov eax, dword ptr [esp + 8]
// 00530874  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00530877  51                   push ecx
// 00530878  ff15d4278000         call dword ptr [0x8027d4]
// 0053087e  59                   pop ecx
// 0053087f  c3                   ret 
// library g3d-6.09-ijg-dll/jmemansi.c (function _close_backing_store)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jmemansi.c
