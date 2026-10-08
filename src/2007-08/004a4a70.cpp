// roc 2007-08 004a4a70  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4a70
//
// 004a4a70  8b442404             mov eax, dword ptr [esp + 4]
// 004a4a74  85c0                 test eax, eax
// 004a4a76  56                   push esi
// 004a4a77  57                   push edi
// 004a4a78  8bf1                 mov esi, ecx
// 004a4a7a  7405                 je 0x4a4a81
// 004a4a7c  8d78fc               lea edi, [eax - 4]
// 004a4a7f  eb02                 jmp 0x4a4a83
// 004a4a81  33ff                 xor edi, edi
// 004a4a83  8b4608               mov eax, dword ptr [esi + 8]
// 004a4a86  d90438               fld dword ptr [eax + edi]
// 004a4a89  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a4a8d  d902                 fld dword ptr [edx]
// 004a4a8f  8d0c38               lea ecx, [eax + edi]
// 004a4a92  dae9                 fucompp 
// 004a4a94  dfe0                 fnstsw ax
// 004a4a96  f6c444               test ah, 0x44
// 004a4a99  7b21                 jnp 0x4a4abc
// 004a4a9b  d902                 fld dword ptr [edx]
// 004a4a9d  d919                 fstp dword ptr [ecx]
// 004a4a9f  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a4aa2  85c0                 test eax, eax
// 004a4aa4  740b                 je 0x4a4ab1
// 004a4aa6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a4aa9  51                   push ecx
// 004a4aaa  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004a4aad  03cf                 add ecx, edi
// 004a4aaf  ffd0                 call eax
// 004a4ab1  8b5604               mov edx, dword ptr [esi + 4]
// 004a4ab4  52                   push edx
// 004a4ab5  8bcf                 mov ecx, edi
// 004a4ab7  e854fcf9ff           call 0x444710
// 004a4abc  5f                   pop edi
// 004a4abd  5e                   pop esi
// 004a4abe  c20800               ret 8
// library rbxgs/v8datamodel\Explosion.cpp (function ?setValue@?$BoundPropGetSet@VExplosion@RBX@@@?$BoundProp@M$00@Reflection@RBX@@UBEXPAVDescribedBase@34@ABM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
