// roc 2009-12 00402b50  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402b50
//
// 00402b50  56                   push esi
// 00402b51  8b742410             mov esi, dword ptr [esp + 0x10]
// 00402b55  56                   push esi
// 00402b56  ff1538b29800         call dword ptr [0x98b238]
// 00402b5c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00402b60  8d440002             lea eax, [eax + eax + 2]
// 00402b64  50                   push eax
// 00402b65  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00402b69  56                   push esi
// 00402b6a  8d1409               lea edx, [ecx + ecx]
// 00402b6d  52                   push edx
// 00402b6e  50                   push eax
// 00402b6f  ff157cb79800         call dword ptr [0x98b77c]
// 00402b75  83c410               add esp, 0x10
// 00402b78  f7d8                 neg eax
// 00402b7a  1bc0                 sbb eax, eax
// 00402b7c  40                   inc eax
// 00402b7d  5e                   pop esi
// 00402b7e  c3                   ret 
// copied from an identical function in another client (function ?ocscpy_s@@YA_NPA_WIPB_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp