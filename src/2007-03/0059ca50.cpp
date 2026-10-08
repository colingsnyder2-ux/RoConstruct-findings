// roc 2007-03 0059ca50  unit: seg_00590000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059ca50
//
// 0059ca50  8b442408             mov eax, dword ptr [esp + 8]
// 0059ca54  83e003               and eax, 3
// 0059ca57  83f803               cmp eax, 3
// 0059ca5a  774d                 ja 0x59caa9
// 0059ca5c  ff2485b8ca5900       jmp dword ptr [eax*4 + 0x59cab8]
// 0059ca63  8b442404             mov eax, dword ptr [esp + 4]
// 0059ca67  d901                 fld dword ptr [ecx]
// 0059ca69  d918                 fstp dword ptr [eax]
// 0059ca6b  d94104               fld dword ptr [ecx + 4]
// 0059ca6e  d95804               fstp dword ptr [eax + 4]
// 0059ca71  c20800               ret 8
// 0059ca74  8b442404             mov eax, dword ptr [esp + 4]
// 0059ca78  d94108               fld dword ptr [ecx + 8]
// 0059ca7b  d918                 fstp dword ptr [eax]
// 0059ca7d  d94104               fld dword ptr [ecx + 4]
// 0059ca80  d95804               fstp dword ptr [eax + 4]
// 0059ca83  c20800               ret 8
// 0059ca86  8b442404             mov eax, dword ptr [esp + 4]
// 0059ca8a  d94108               fld dword ptr [ecx + 8]
// 0059ca8d  d918                 fstp dword ptr [eax]
// 0059ca8f  d9410c               fld dword ptr [ecx + 0xc]
// 0059ca92  d95804               fstp dword ptr [eax + 4]
// 0059ca95  c20800               ret 8
// 0059ca98  8b442404             mov eax, dword ptr [esp + 4]
// 0059ca9c  d901                 fld dword ptr [ecx]
// 0059ca9e  d918                 fstp dword ptr [eax]
// 0059caa0  d9410c               fld dword ptr [ecx + 0xc]
// 0059caa3  d95804               fstp dword ptr [eax + 4]
// 0059caa6  c20800               ret 8
// 0059caa9  d9ee                 fldz 
// 0059caab  8b442404             mov eax, dword ptr [esp + 4]
// 0059caaf  d910                 fst dword ptr [eax]
// 0059cab1  d95804               fstp dword ptr [eax + 4]
// 0059cab4  c20800               ret 8
// 0059cab7  90                   nop 
// 0059cab8  63ca                 arpl dx, cx
// 0059caba  59                   pop ecx
// 0059cabb  0074ca59             add byte ptr [edx + ecx*8 + 0x59], dh
// 0059cabf  0086ca590098         add byte ptr [esi - 0x67ffa636], al
// 0059cac5  ca5900               retf 0x59
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?corner@Rect2D@G3D@@QBE?AVVector2@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
