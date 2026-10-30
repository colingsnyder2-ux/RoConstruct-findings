// roc 2009-06 005c0100  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0100
//
// 005c0100  55                   push ebp
// 005c0101  8bec                 mov ebp, esp
// 005c0103  83ec08               sub esp, 8
// 005c0106  894dfc               mov dword ptr [ebp - 4], ecx
// 005c0109  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c010c  83780c00             cmp dword ptr [eax + 0xc], 0
// 005c0110  7509                 jne 0x5c011b
// 005c0112  c745f800000000       mov dword ptr [ebp - 8], 0
// 005c0119  eb12                 jmp 0x5c012d
// 005c011b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c011e  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c0121  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005c0124  2b420c               sub eax, dword ptr [edx + 0xc]
// 005c0127  c1f802               sar eax, 2
// 005c012a  8945f8               mov dword ptr [ebp - 8], eax
// 005c012d  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c0130  8be5                 mov esp, ebp
// 005c0132  5d                   pop ebp
// 005c0133  c3                   ret 
// copied from an identical function in another client (function ?capacity@?$vector@HV?$allocator@H@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp