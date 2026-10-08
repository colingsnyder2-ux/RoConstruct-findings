// roc 2007-03 00739630  unit: seg_00730000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00739630
//
// 00739630  8b442404             mov eax, dword ptr [esp + 4]
// 00739634  0fb610               movzx edx, byte ptr [eax]
// 00739637  89542404             mov dword ptr [esp + 4], edx
// 0073963b  51                   push ecx
// 0073963c  db442408             fild dword ptr [esp + 8]
// 00739640  d919                 fstp dword ptr [ecx]
// 00739642  0fb65001             movzx edx, byte ptr [eax + 1]
// 00739646  89542408             mov dword ptr [esp + 8], edx
// 0073964a  db442408             fild dword ptr [esp + 8]
// 0073964e  d95904               fstp dword ptr [ecx + 4]
// 00739651  0fb65002             movzx edx, byte ptr [eax + 2]
// 00739655  89542408             mov dword ptr [esp + 8], edx
// 00739659  db442408             fild dword ptr [esp + 8]
// 0073965d  d95908               fstp dword ptr [ecx + 8]
// 00739660  0fb64003             movzx eax, byte ptr [eax + 3]
// 00739664  89442408             mov dword ptr [esp + 8], eax
// 00739668  db442408             fild dword ptr [esp + 8]
// 0073966c  d9590c               fstp dword ptr [ecx + 0xc]
// 0073966f  d905d4037a00         fld dword ptr [0x7a03d4]
// 00739675  d91c24               fstp dword ptr [esp]
// 00739678  e8d3feffff           call 0x739550
// 0073967d  8bc1                 mov eax, ecx
// 0073967f  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Color4.cpp (function ??0Color4@G3D@@QAE@ABVColor4uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color4.cpp
