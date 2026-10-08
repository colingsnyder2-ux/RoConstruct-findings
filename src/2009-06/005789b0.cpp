// from server: 100% by auto
// roc 2009-06 005789b0  unit: G3D::LineSegment  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005789b0
//
// 005789b0  8b442404             mov eax, dword ptr [esp + 4]
// 005789b4  0fb610               movzx edx, byte ptr [eax]
// 005789b7  89542404             mov dword ptr [esp + 4], edx
// 005789bb  51                   push ecx
// 005789bc  db442408             fild dword ptr [esp + 8]
// 005789c0  d919                 fstp dword ptr [ecx]
// 005789c2  0fb65001             movzx edx, byte ptr [eax + 1]
// 005789c6  89542408             mov dword ptr [esp + 8], edx
// 005789ca  db442408             fild dword ptr [esp + 8]
// 005789ce  d95904               fstp dword ptr [ecx + 4]
// 005789d1  0fb65002             movzx edx, byte ptr [eax + 2]
// 005789d5  89542408             mov dword ptr [esp + 8], edx
// 005789d9  db442408             fild dword ptr [esp + 8]
// 005789dd  d95908               fstp dword ptr [ecx + 8]
// 005789e0  0fb64003             movzx eax, byte ptr [eax + 3]
// 005789e4  89442408             mov dword ptr [esp + 8], eax
// 005789e8  db442408             fild dword ptr [esp + 8]
// 005789ec  d9590c               fstp dword ptr [ecx + 0xc]
// 005789ef  d90570b88c00         fld dword ptr [0x8cb870]
// 005789f5  d91c24               fstp dword ptr [esp]
// 005789f8  e893feffff           call 0x578890
// 005789fd  8bc1                 mov eax, ecx
// 005789ff  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
