// roc 2009-06 005b4430  unit: seg_005b0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4430
//
// 005b4430  55                   push ebp
// 005b4431  8bec                 mov ebp, esp
// 005b4433  51                   push ecx
// 005b4434  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4437  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b443a  50                   push eax
// 005b443b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b443e  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b4441  52                   push edx
// 005b4442  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b4445  e8a6d00000           call 0x5c14f0
// 005b444a  8b4508               mov eax, dword ptr [ebp + 8]
// 005b444d  8be5                 mov esp, ebp
// 005b444f  5d                   pop ebp
// 005b4450  c20400               ret 4
// copied from an identical function in another client (function ?end@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp