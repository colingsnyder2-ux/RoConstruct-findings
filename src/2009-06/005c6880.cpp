// roc 2009-06 005c6880  unit: seg_005c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6880
//
// 005c6880  55                   push ebp
// 005c6881  8bec                 mov ebp, esp
// 005c6883  51                   push ecx
// 005c6884  894dfc               mov dword ptr [ebp - 4], ecx
// 005c6887  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c688a  83c008               add eax, 8
// 005c688d  50                   push eax
// 005c688e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c6891  51                   push ecx
// 005c6892  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c6895  52                   push edx
// 005c6896  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6899  50                   push eax
// 005c689a  e851180000           call 0x5c80f0
// 005c689f  83c410               add esp, 0x10
// 005c68a2  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c68a5  8b5508               mov edx, dword ptr [ebp + 8]
// 005c68a8  8d048a               lea eax, [edx + ecx*4]
// 005c68ab  8be5                 mov esp, ebp
// 005c68ad  5d                   pop ebp
// 005c68ae  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Ufill@?$vector@HV?$allocator@H@std@@@std@@IAEPAHPAHIABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp