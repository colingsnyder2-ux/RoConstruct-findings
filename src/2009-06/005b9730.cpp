// roc 2009-06 005b9730  unit: seg_005b0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9730
//
// 005b9730  55                   push ebp
// 005b9731  8bec                 mov ebp, esp
// 005b9733  eb09                 jmp 0x5b973e
// 005b9735  8b4508               mov eax, dword ptr [ebp + 8]
// 005b9738  83c048               add eax, 0x48
// 005b973b  894508               mov dword ptr [ebp + 8], eax
// 005b973e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b9741  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 005b9744  740e                 je 0x5b9754
// 005b9746  8b5508               mov edx, dword ptr [ebp + 8]
// 005b9749  52                   push edx
// 005b974a  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005b974d  e82eaeffff           call 0x5b4580
// 005b9752  ebe1                 jmp 0x5b9735
// 005b9754  5d                   pop ebp
// 005b9755  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy_range@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@N@Wml@@0AAV?$allocator@VFace@?$ConvexClipper@N@Wml@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp