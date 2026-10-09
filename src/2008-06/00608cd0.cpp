// roc 2008-06 00608cd0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608cd0
//
// 00608cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00608cd4  8bd1                 mov edx, ecx
// 00608cd6  85c0                 test eax, eax
// 00608cd8  7405                 je 0x608cdf
// 00608cda  83c0ec               add eax, -0x14
// 00608cdd  eb02                 jmp 0x608ce1
// 00608cdf  33c0                 xor eax, eax
// 00608ce1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00608ce5  8b09                 mov ecx, dword ptr [ecx]
// 00608ce7  56                   push esi
// 00608ce8  8b7220               mov esi, dword ptr [edx + 0x20]
// 00608ceb  51                   push ecx
// 00608cec  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00608cf2  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00608cf5  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00608cf8  8b5218               mov edx, dword ptr [edx + 0x18]
// 00608cfb  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00608d02  ffd2                 call edx
// 00608d04  5e                   pop esi
// 00608d05  c20800               ret 8
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?setValue@?$GetSetImpl@P8PVInstance@RBX@@BE?AW4ControllerType@Controller@2@XZP812@AEXW4342@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABW4ControllerType@Controller@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
