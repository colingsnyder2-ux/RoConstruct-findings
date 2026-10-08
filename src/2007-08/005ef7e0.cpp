// roc 2007-08 005ef7e0  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef7e0
//
// 005ef7e0  8b442404             mov eax, dword ptr [esp + 4]
// 005ef7e4  85c0                 test eax, eax
// 005ef7e6  53                   push ebx
// 005ef7e7  55                   push ebp
// 005ef7e8  56                   push esi
// 005ef7e9  8be9                 mov ebp, ecx
// 005ef7eb  7409                 je 0x5ef7f6
// 005ef7ed  8d70fc               lea esi, [eax - 4]
// 005ef7f0  89742410             mov dword ptr [esp + 0x10], esi
// 005ef7f4  eb0c                 jmp 0x5ef802
// 005ef7f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ef7fe  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ef802  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ef805  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005ef809  53                   push ebx
// 005ef80a  03ce                 add ecx, esi
// 005ef80c  e8cf38e8ff           call 0x4730e0
// 005ef811  84c0                 test al, al
// 005ef813  7445                 je 0x5ef85a
// 005ef815  8b4508               mov eax, dword ptr [ebp + 8]
// 005ef818  03c6                 add eax, esi
// 005ef81a  57                   push edi
// 005ef81b  8bf8                 mov edi, eax
// 005ef81d  b909000000           mov ecx, 9
// 005ef822  8bf3                 mov esi, ebx
// 005ef824  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ef826  d94324               fld dword ptr [ebx + 0x24]
// 005ef829  d95824               fstp dword ptr [eax + 0x24]
// 005ef82c  d94328               fld dword ptr [ebx + 0x28]
// 005ef82f  d95828               fstp dword ptr [eax + 0x28]
// 005ef832  d9432c               fld dword ptr [ebx + 0x2c]
// 005ef835  d9582c               fstp dword ptr [eax + 0x2c]
// 005ef838  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005ef83b  85c0                 test eax, eax
// 005ef83d  5f                   pop edi
// 005ef83e  740d                 je 0x5ef84d
// 005ef840  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ef843  51                   push ecx
// 005ef844  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005ef847  034c2414             add ecx, dword ptr [esp + 0x14]
// 005ef84b  ffd0                 call eax
// 005ef84d  8b5504               mov edx, dword ptr [ebp + 4]
// 005ef850  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ef854  52                   push edx
// 005ef855  e8b64ee5ff           call 0x444710
// 005ef85a  5e                   pop esi
// 005ef85b  5d                   pop ebp
// 005ef85c  5b                   pop ebx
// 005ef85d  c20800               ret 8
// library rbxgs/v8datamodel\Gyro.cpp (function ?setValue@?$BoundPropGetSet@VBodyGyro@RBX@@@?$BoundProp@VCoordinateFrame@G3D@@$00@Reflection@RBX@@UBEXPAVDescribedBase@34@ABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
