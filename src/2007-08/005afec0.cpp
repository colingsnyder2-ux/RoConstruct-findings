// roc 2007-08 005afec0  unit: RBX::P8Camera::?$GetSetImpl  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afec0
//
// 005afec0  8bc1                 mov eax, ecx
// 005afec2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005afec6  85c9                 test ecx, ecx
// 005afec8  7405                 je 0x5afecf
// 005afeca  8d51fc               lea edx, [ecx - 4]
// 005afecd  eb02                 jmp 0x5afed1
// 005afecf  33d2                 xor edx, edx
// 005afed1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005afed4  8b4008               mov eax, dword ptr [eax + 8]
// 005afed7  56                   push esi
// 005afed8  57                   push edi
// 005afed9  03ca                 add ecx, edx
// 005afedb  ffd0                 call eax
// 005afedd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005afee1  8bf0                 mov esi, eax
// 005afee3  56                   push esi
// 005afee4  8bcf                 mov ecx, edi
// 005afee6  e8e596f5ff           call 0x5095d0
// 005afeeb  d94624               fld dword ptr [esi + 0x24]
// 005afeee  d95f24               fstp dword ptr [edi + 0x24]
// 005afef1  8bc7                 mov eax, edi
// 005afef3  d94628               fld dword ptr [esi + 0x28]
// 005afef6  d95f28               fstp dword ptr [edi + 0x28]
// 005afef9  d9462c               fld dword ptr [esi + 0x2c]
// 005afefc  d95f2c               fstp dword ptr [edi + 0x2c]
// 005afeff  5f                   pop edi
// 005aff00  5e                   pop esi
// 005aff01  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?getValue@?$GetSetImpl@P8Camera@RBX@@BEABVCoordinateFrame@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VCamera@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@UBE?AVCoordinateFrame@G3D@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
