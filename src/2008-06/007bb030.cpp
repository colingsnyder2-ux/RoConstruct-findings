// roc 2008-06 007bb030  unit: G3D::H::PAV?$Array::?$Set  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bb030
//
// 007bb030  8b442404             mov eax, dword ptr [esp + 4]
// 007bb034  0fb610               movzx edx, byte ptr [eax]
// 007bb037  89542404             mov dword ptr [esp + 4], edx
// 007bb03b  51                   push ecx
// 007bb03c  db442408             fild dword ptr [esp + 8]
// 007bb040  d919                 fstp dword ptr [ecx]
// 007bb042  0fb65001             movzx edx, byte ptr [eax + 1]
// 007bb046  89542408             mov dword ptr [esp + 8], edx
// 007bb04a  db442408             fild dword ptr [esp + 8]
// 007bb04e  d95904               fstp dword ptr [ecx + 4]
// 007bb051  0fb65002             movzx edx, byte ptr [eax + 2]
// 007bb055  89542408             mov dword ptr [esp + 8], edx
// 007bb059  db442408             fild dword ptr [esp + 8]
// 007bb05d  d95908               fstp dword ptr [ecx + 8]
// 007bb060  0fb64003             movzx eax, byte ptr [eax + 3]
// 007bb064  89442408             mov dword ptr [esp + 8], eax
// 007bb068  db442408             fild dword ptr [esp + 8]
// 007bb06c  d9590c               fstp dword ptr [ecx + 0xc]
// 007bb06f  d905bc888200         fld dword ptr [0x8288bc]
// 007bb075  d91c24               fstp dword ptr [esp]
// 007bb078  e8d3feffff           call 0x7baf50
// 007bb07d  8bc1                 mov eax, ecx
// 007bb07f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
