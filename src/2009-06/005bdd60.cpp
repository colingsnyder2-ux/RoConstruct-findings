// roc 2009-06 005bdd60  unit: RBX::AggregateChunk  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdd60
//
// 005bdd60  55                   push ebp
// 005bdd61  8bec                 mov ebp, esp
// 005bdd63  51                   push ecx
// 005bdd64  894dfc               mov dword ptr [ebp - 4], ecx
// 005bdd67  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bdd6a  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 005bdd71  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bdd74  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 005bdd7b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bdd7e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 005bdd85  837d0800             cmp dword ptr [ebp + 8], 0
// 005bdd89  7506                 jne 0x5bdd91
// 005bdd8b  32c0                 xor al, al
// 005bdd8d  eb4b                 jmp 0x5bddda
// 005bdd8f  eb47                 jmp 0x5bddd8
// 005bdd91  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bdd94  e8b7000000           call 0x5bde50
// 005bdd99  3b4508               cmp eax, dword ptr [ebp + 8]
// 005bdd9c  7307                 jae 0x5bdda5
// 005bdd9e  e86d83ffff           call 0x5b6110
// 005bdda3  eb33                 jmp 0x5bddd8
// 005bdda5  8b4508               mov eax, dword ptr [ebp + 8]
// 005bdda8  50                   push eax
// 005bdda9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bddac  83c108               add ecx, 8
// 005bddaf  e80c010000           call 0x5bdec0
// 005bddb4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bddb7  89410c               mov dword ptr [ecx + 0xc], eax
// 005bddba  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bddbd  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bddc0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005bddc3  894a10               mov dword ptr [edx + 0x10], ecx
// 005bddc6  8b55fc               mov edx, dword ptr [ebp - 4]
// 005bddc9  8b420c               mov eax, dword ptr [edx + 0xc]
// 005bddcc  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bddcf  8d1488               lea edx, [eax + ecx*4]
// 005bddd2  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bddd5  895014               mov dword ptr [eax + 0x14], edx
// 005bddd8  b001                 mov al, 1
// 005bddda  8be5                 mov esp, ebp
// 005bdddc  5d                   pop ebp
// 005bdddd  c20400               ret 4
// copied from an identical function in another client (function ?_Buy@?$vector@HV?$allocator@H@std@@@std@@IAE_NI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp