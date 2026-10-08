// roc 2007-08 005ffca0  unit: RBX::BallBallContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ffca0
//
// 005ffca0  53                   push ebx
// 005ffca1  56                   push esi
// 005ffca2  8bf1                 mov esi, ecx
// 005ffca4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ffca7  57                   push edi
// 005ffca8  e8a396faff           call 0x5a9350
// 005ffcad  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005ffcb1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ffcb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ffcb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ffcbd  8d442420             lea eax, [esp + 0x20]
// 005ffcc1  50                   push eax
// 005ffcc2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ffcc6  53                   push ebx
// 005ffcc7  57                   push edi
// 005ffcc8  51                   push ecx
// 005ffcc9  52                   push edx
// 005ffcca  50                   push eax
// 005ffccb  8bce                 mov ecx, esi
// 005ffccd  e8fefdffff           call 0x5ffad0
// 005ffcd2  807c242000           cmp byte ptr [esp + 0x20], 0
// 005ffcd7  7404                 je 0x5ffcdd
// 005ffcd9  33c0                 xor eax, eax
// 005ffcdb  eb04                 jmp 0x5ffce1
// 005ffcdd  85c0                 test eax, eax
// 005ffcdf  7544                 jne 0x5ffd25
// 005ffce1  b901000000           mov ecx, 1
// 005ffce6  840d38d18b00         test byte ptr [0x8bd138], cl
// 005ffcec  751a                 jne 0x5ffd08
// 005ffcee  d9ee                 fldz 
// 005ffcf0  090d38d18b00         or dword ptr [0x8bd138], ecx
// 005ffcf6  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005ffcfc  d91530d18b00         fst dword ptr [0x8bd130]
// 005ffd02  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005ffd08  d9052cd18b00         fld dword ptr [0x8bd12c]
// 005ffd0e  d91f                 fstp dword ptr [edi]
// 005ffd10  d90530d18b00         fld dword ptr [0x8bd130]
// 005ffd16  d95f04               fstp dword ptr [edi + 4]
// 005ffd19  d90534d18b00         fld dword ptr [0x8bd134]
// 005ffd1f  d95f08               fstp dword ptr [edi + 8]
// 005ffd22  c60300               mov byte ptr [ebx], 0
// 005ffd25  5f                   pop edi
// 005ffd26  5e                   pop esi
// 005ffd27  5b                   pop ebx
// 005ffd28  c21400               ret 0x14
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$Array@PBVPrimitive@RBX@@@5@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
