// roc 2009-06 006b1710  unit: RBX::BlockBlockContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b1710
//
// 006b1710  53                   push ebx
// 006b1711  56                   push esi
// 006b1712  8bf1                 mov esi, ecx
// 006b1714  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b1717  57                   push edi
// 006b1718  e8b3d2fcff           call 0x67e9d0
// 006b171d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006b1721  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006b1725  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b1729  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b172d  8d442420             lea eax, [esp + 0x20]
// 006b1731  50                   push eax
// 006b1732  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b1736  53                   push ebx
// 006b1737  57                   push edi
// 006b1738  51                   push ecx
// 006b1739  52                   push edx
// 006b173a  50                   push eax
// 006b173b  8bce                 mov ecx, esi
// 006b173d  e80efcffff           call 0x6b1350
// 006b1742  807c242000           cmp byte ptr [esp + 0x20], 0
// 006b1747  7404                 je 0x6b174d
// 006b1749  33c0                 xor eax, eax
// 006b174b  eb04                 jmp 0x6b1751
// 006b174d  85c0                 test eax, eax
// 006b174f  7544                 jne 0x6b1795
// 006b1751  b901000000           mov ecx, 1
// 006b1756  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 006b175c  751a                 jne 0x6b1778
// 006b175e  d9ee                 fldz 
// 006b1760  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 006b1766  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006b176c  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006b1772  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 006b1778  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 006b177e  d91f                 fstp dword ptr [edi]
// 006b1780  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 006b1786  d95f04               fstp dword ptr [edi + 4]
// 006b1789  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 006b178f  d95f08               fstp dword ptr [edi + 8]
// 006b1792  c60300               mov byte ptr [ebx], 0
// 006b1795  5f                   pop edi
// 006b1796  5e                   pop esi
// 006b1797  5b                   pop ebx
// 006b1798  c21400               ret 0x14
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$Array@PBVPrimitive@RBX@@@5@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
