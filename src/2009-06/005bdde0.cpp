// roc 2009-06 005bdde0  unit: RBX::AggregateChunk  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdde0
//
// 005bdde0  55                   push ebp
// 005bdde1  8bec                 mov ebp, esp
// 005bdde3  51                   push ecx
// 005bdde4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bdde7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bddea  83780c00             cmp dword ptr [eax + 0xc], 0
// 005bddee  7438                 je 0x5bde28
// 005bddf0  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bddf3  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bddf6  52                   push edx
// 005bddf7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bddfa  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005bddfd  51                   push ecx
// 005bddfe  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bde01  e86a000000           call 0x5bde70
// 005bde06  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bde09  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bde0c  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005bde0f  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005bde12  c1f902               sar ecx, 2
// 005bde15  51                   push ecx
// 005bde16  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bde19  8b420c               mov eax, dword ptr [edx + 0xc]
// 005bde1c  50                   push eax
// 005bde1d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bde20  83c108               add ecx, 8
// 005bde23  e878000000           call 0x5bdea0
// 005bde28  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bde2b  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 005bde32  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bde35  c7421000000000       mov dword ptr [edx + 0x10], 0
// 005bde3c  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bde3f  c7401400000000       mov dword ptr [eax + 0x14], 0
// 005bde46  8be5                 mov esp, ebp
// 005bde48  5d                   pop ebp
// 005bde49  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@HV?$allocator@H@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp