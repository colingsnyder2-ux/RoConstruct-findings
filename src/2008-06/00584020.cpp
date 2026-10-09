// roc 2008-06 00584020  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584020
//
// 00584020  8b442404             mov eax, dword ptr [esp + 4]
// 00584024  8bd1                 mov edx, ecx
// 00584026  85c0                 test eax, eax
// 00584028  7405                 je 0x58402f
// 0058402a  83c0ec               add eax, -0x14
// 0058402d  eb02                 jmp 0x584031
// 0058402f  33c0                 xor eax, eax
// 00584031  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00584037  56                   push esi
// 00584038  8b7210               mov esi, dword ptr [edx + 0x10]
// 0058403b  8b0c31               mov ecx, dword ptr [ecx + esi]
// 0058403e  034a0c               add ecx, dword ptr [edx + 0xc]
// 00584041  8b5208               mov edx, dword ptr [edx + 8]
// 00584044  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 0058404b  ffd2                 call edx
// 0058404d  5e                   pop esi
// 0058404e  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?getValue@?$GetSetImpl@P8PVInstance@RBX@@BE?AW4ControllerType@Controller@2@XZP812@AEXW4342@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@UBE?AW4ControllerType@Controller@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
