// roc 2009-06 005b6940  unit: seg_005b0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6940
//
// 005b6940  55                   push ebp
// 005b6941  8bec                 mov ebp, esp
// 005b6943  83ec0c               sub esp, 0xc
// 005b6946  894df8               mov dword ptr [ebp - 8], ecx
// 005b6949  c745fce3388e03       mov dword ptr [ebp - 4], 0x38e38e3
// 005b6950  837dfc00             cmp dword ptr [ebp - 4], 0
// 005b6954  7608                 jbe 0x5b695e
// 005b6956  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b6959  8945f4               mov dword ptr [ebp - 0xc], eax
// 005b695c  eb07                 jmp 0x5b6965
// 005b695e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 005b6965  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005b6968  8be5                 mov esp, ebp
// 005b696a  5d                   pop ebp
// 005b696b  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp