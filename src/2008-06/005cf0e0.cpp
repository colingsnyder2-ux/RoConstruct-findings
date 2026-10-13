// roc 2008-06 005cf0e0  unit: DxUserInput  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf0e0
//
// 005cf0e0  8b442408             mov eax, dword ptr [esp + 8]
// 005cf0e4  83e003               and eax, 3
// 005cf0e7  83f803               cmp eax, 3
// 005cf0ea  774d                 ja 0x5cf139
// 005cf0ec  ff248548f15c00       jmp dword ptr [eax*4 + 0x5cf148]
// 005cf0f3  8b442404             mov eax, dword ptr [esp + 4]
// 005cf0f7  d901                 fld dword ptr [ecx]
// 005cf0f9  d918                 fstp dword ptr [eax]
// 005cf0fb  d94104               fld dword ptr [ecx + 4]
// 005cf0fe  d95804               fstp dword ptr [eax + 4]
// 005cf101  c20800               ret 8
// 005cf104  8b442404             mov eax, dword ptr [esp + 4]
// 005cf108  d94108               fld dword ptr [ecx + 8]
// 005cf10b  d918                 fstp dword ptr [eax]
// 005cf10d  d94104               fld dword ptr [ecx + 4]
// 005cf110  d95804               fstp dword ptr [eax + 4]
// 005cf113  c20800               ret 8
// 005cf116  8b442404             mov eax, dword ptr [esp + 4]
// 005cf11a  d94108               fld dword ptr [ecx + 8]
// 005cf11d  d918                 fstp dword ptr [eax]
// 005cf11f  d9410c               fld dword ptr [ecx + 0xc]
// 005cf122  d95804               fstp dword ptr [eax + 4]
// 005cf125  c20800               ret 8
// 005cf128  8b442404             mov eax, dword ptr [esp + 4]
// 005cf12c  d901                 fld dword ptr [ecx]
// 005cf12e  d918                 fstp dword ptr [eax]
// 005cf130  d9410c               fld dword ptr [ecx + 0xc]
// 005cf133  d95804               fstp dword ptr [eax + 4]
// 005cf136  c20800               ret 8
// 005cf139  d9ee                 fldz 
// 005cf13b  8b442404             mov eax, dword ptr [esp + 4]
// 005cf13f  d910                 fst dword ptr [eax]
// 005cf141  d95804               fstp dword ptr [eax + 4]
// 005cf144  c20800               ret 8
// 005cf147  90                   nop 
// library g3d-6.09-rbx2008/GLG3Dcpp\Draw.cpp (function ?corner@Rect2D@G3D@@QBE?AVVector2@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Draw.cpp
