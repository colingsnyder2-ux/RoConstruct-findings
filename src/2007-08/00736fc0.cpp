// from server: 100% by auto
// roc 2007-08 00736fc0  unit: G3D::GFont  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736fc0
//
// 00736fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00736fc4  0fb610               movzx edx, byte ptr [eax]
// 00736fc7  89542404             mov dword ptr [esp + 4], edx
// 00736fcb  51                   push ecx
// 00736fcc  db442408             fild dword ptr [esp + 8]
// 00736fd0  d919                 fstp dword ptr [ecx]
// 00736fd2  0fb65001             movzx edx, byte ptr [eax + 1]
// 00736fd6  89542408             mov dword ptr [esp + 8], edx
// 00736fda  db442408             fild dword ptr [esp + 8]
// 00736fde  d95904               fstp dword ptr [ecx + 4]
// 00736fe1  0fb65002             movzx edx, byte ptr [eax + 2]
// 00736fe5  89542408             mov dword ptr [esp + 8], edx
// 00736fe9  db442408             fild dword ptr [esp + 8]
// 00736fed  d95908               fstp dword ptr [ecx + 8]
// 00736ff0  0fb64003             movzx eax, byte ptr [eax + 3]
// 00736ff4  89442408             mov dword ptr [esp + 8], eax
// 00736ff8  db442408             fild dword ptr [esp + 8]
// 00736ffc  d9590c               fstp dword ptr [ecx + 0xc]
// 00736fff  d905e40b7a00         fld dword ptr [0x7a0be4]
// 00737005  d91c24               fstp dword ptr [esp]
// 00737008  e8d3feffff           call 0x736ee0
// 0073700d  8bc1                 mov eax, ecx
// 0073700f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
