// roc 2008-06 00599db0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599db0
//
// 00599db0  8b442404             mov eax, dword ptr [esp + 4]
// 00599db4  8bd1                 mov edx, ecx
// 00599db6  85c0                 test eax, eax
// 00599db8  7405                 je 0x599dbf
// 00599dba  83c0ec               add eax, -0x14
// 00599dbd  eb02                 jmp 0x599dc1
// 00599dbf  33c0                 xor eax, eax
// 00599dc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00599dc5  0fb609               movzx ecx, byte ptr [ecx]
// 00599dc8  56                   push esi
// 00599dc9  8b7220               mov esi, dword ptr [edx + 0x20]
// 00599dcc  51                   push ecx
// 00599dcd  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00599dd3  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00599dd6  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00599dd9  8b5218               mov edx, dword ptr [edx + 0x18]
// 00599ddc  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00599de3  ffd2                 call edx
// 00599de5  5e                   pop esi
// 00599de6  c20800               ret 8
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?setValue@?$GetSetImpl@P8PVInstance@RBX@@BE_NXZP812@AEX_N@Z@?$PropDescriptor@VPVInstance@RBX@@_N@Reflection@RBX@@UBEXPAVDescribedBase@34@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
