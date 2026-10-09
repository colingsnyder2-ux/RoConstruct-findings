// roc 2008-06 0060d6e0  unit: RBX::BlockBlockContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d6e0
//
// 0060d6e0  53                   push ebx
// 0060d6e1  56                   push esi
// 0060d6e2  8bf1                 mov esi, ecx
// 0060d6e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060d6e7  57                   push edi
// 0060d6e8  e833befdff           call 0x5e9520
// 0060d6ed  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0060d6f1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0060d6f5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060d6f9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0060d6fd  8d442420             lea eax, [esp + 0x20]
// 0060d701  50                   push eax
// 0060d702  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060d706  53                   push ebx
// 0060d707  57                   push edi
// 0060d708  51                   push ecx
// 0060d709  52                   push edx
// 0060d70a  50                   push eax
// 0060d70b  8bce                 mov ecx, esi
// 0060d70d  e8befbffff           call 0x60d2d0
// 0060d712  807c242000           cmp byte ptr [esp + 0x20], 0
// 0060d717  7404                 je 0x60d71d
// 0060d719  33c0                 xor eax, eax
// 0060d71b  eb04                 jmp 0x60d721
// 0060d71d  85c0                 test eax, eax
// 0060d71f  7544                 jne 0x60d765
// 0060d721  b901000000           mov ecx, 1
// 0060d726  840d50f09600         test byte ptr [0x96f050], cl
// 0060d72c  751a                 jne 0x60d748
// 0060d72e  d9ee                 fldz 
// 0060d730  090d50f09600         or dword ptr [0x96f050], ecx
// 0060d736  d91544f09600         fst dword ptr [0x96f044]
// 0060d73c  d91548f09600         fst dword ptr [0x96f048]
// 0060d742  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0060d748  d90544f09600         fld dword ptr [0x96f044]
// 0060d74e  d91f                 fstp dword ptr [edi]
// 0060d750  d90548f09600         fld dword ptr [0x96f048]
// 0060d756  d95f04               fstp dword ptr [edi + 4]
// 0060d759  d9054cf09600         fld dword ptr [0x96f04c]
// 0060d75f  d95f08               fstp dword ptr [edi + 8]
// 0060d762  c60300               mov byte ptr [ebx], 0
// 0060d765  5f                   pop edi
// 0060d766  5e                   pop esi
// 0060d767  5b                   pop ebx
// 0060d768  c21400               ret 0x14
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$Array@PBVPrimitive@RBX@@@5@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
