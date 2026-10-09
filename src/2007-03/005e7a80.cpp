// roc 2007-03 005e7a80  unit: seg_005e0000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7a80
//
// 005e7a80  53                   push ebx
// 005e7a81  56                   push esi
// 005e7a82  8bf1                 mov esi, ecx
// 005e7a84  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e7a87  57                   push edi
// 005e7a88  e84355fcff           call 0x5acfd0
// 005e7a8d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005e7a91  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e7a95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e7a99  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e7a9d  8d442420             lea eax, [esp + 0x20]
// 005e7aa1  50                   push eax
// 005e7aa2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e7aa6  53                   push ebx
// 005e7aa7  57                   push edi
// 005e7aa8  51                   push ecx
// 005e7aa9  52                   push edx
// 005e7aaa  50                   push eax
// 005e7aab  8bce                 mov ecx, esi
// 005e7aad  e8eefcffff           call 0x5e77a0
// 005e7ab2  807c242000           cmp byte ptr [esp + 0x20], 0
// 005e7ab7  7404                 je 0x5e7abd
// 005e7ab9  33c0                 xor eax, eax
// 005e7abb  eb04                 jmp 0x5e7ac1
// 005e7abd  85c0                 test eax, eax
// 005e7abf  7544                 jne 0x5e7b05
// 005e7ac1  b901000000           mov ecx, 1
// 005e7ac6  840d00788b00         test byte ptr [0x8b7800], cl
// 005e7acc  751a                 jne 0x5e7ae8
// 005e7ace  d9ee                 fldz 
// 005e7ad0  090d00788b00         or dword ptr [0x8b7800], ecx
// 005e7ad6  d915f4778b00         fst dword ptr [0x8b77f4]
// 005e7adc  d915f8778b00         fst dword ptr [0x8b77f8]
// 005e7ae2  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005e7ae8  d905f4778b00         fld dword ptr [0x8b77f4]
// 005e7aee  d91f                 fstp dword ptr [edi]
// 005e7af0  d905f8778b00         fld dword ptr [0x8b77f8]
// 005e7af6  d95f04               fstp dword ptr [edi + 4]
// 005e7af9  d905fc778b00         fld dword ptr [0x8b77fc]
// 005e7aff  d95f08               fstp dword ptr [edi + 8]
// 005e7b02  c60300               mov byte ptr [ebx], 0
// 005e7b05  5f                   pop edi
// 005e7b06  5e                   pop esi
// 005e7b07  5b                   pop ebx
// 005e7b08  c21400               ret 0x14
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$Array@PBVPrimitive@RBX@@@5@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
