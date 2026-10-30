// roc 2009-06 005c0260  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0260
//
// 005c0260  55                   push ebp
// 005c0261  8bec                 mov ebp, esp
// 005c0263  51                   push ecx
// 005c0264  894dfc               mov dword ptr [ebp - 4], ecx
// 005c0267  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c026a  83c008               add eax, 8
// 005c026d  50                   push eax
// 005c026e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c0271  51                   push ecx
// 005c0272  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c0275  52                   push edx
// 005c0276  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0279  50                   push eax
// 005c027a  e821580000           call 0x5c5aa0
// 005c027f  83c410               add esp, 0x10
// 005c0282  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c0285  8b5508               mov edx, dword ptr [ebp + 8]
// 005c0288  8d048a               lea eax, [edx + ecx*4]
// 005c028b  8be5                 mov esp, ebp
// 005c028d  5d                   pop ebp
// 005c028e  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Ufill@?$vector@HV?$allocator@H@std@@@std@@IAEPAHPAHIABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp