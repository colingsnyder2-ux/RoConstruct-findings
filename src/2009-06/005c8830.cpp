// roc 2009-06 005c8830  unit: seg_005c0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8830
//
// 005c8830  55                   push ebp
// 005c8831  8bec                 mov ebp, esp
// 005c8833  51                   push ecx
// 005c8834  33c0                 xor eax, eax
// 005c8836  8845ff               mov byte ptr [ebp - 1], al
// 005c8839  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005c883d  51                   push ecx
// 005c883e  8d5508               lea edx, [ebp + 8]
// 005c8841  52                   push edx
// 005c8842  8d45fe               lea eax, [ebp - 2]
// 005c8845  50                   push eax
// 005c8846  e815f5ffff           call 0x5c7d60
// 005c884b  83c408               add esp, 8
// 005c884e  0fb608               movzx ecx, byte ptr [eax]
// 005c8851  51                   push ecx
// 005c8852  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c8855  52                   push edx
// 005c8856  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c8859  50                   push eax
// 005c885a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c885d  51                   push ecx
// 005c885e  e8dd010000           call 0x5c8a40
// 005c8863  83c414               add esp, 0x14
// 005c8866  8be5                 mov esp, ebp
// 005c8868  5d                   pop ebp
// 005c8869  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_fill_n@PAHIH@stdext@@YAXPAHIABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp