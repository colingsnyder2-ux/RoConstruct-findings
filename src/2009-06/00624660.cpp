// roc 2009-06 00624660  unit: ArchiveBinder  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624660
//
// 00624660  8b442408             mov eax, dword ptr [esp + 8]
// 00624664  83e003               and eax, 3
// 00624667  83f803               cmp eax, 3
// 0062466a  774d                 ja 0x6246b9
// 0062466c  ff2485c8466200       jmp dword ptr [eax*4 + 0x6246c8]
// 00624673  8b442404             mov eax, dword ptr [esp + 4]
// 00624677  d901                 fld dword ptr [ecx]
// 00624679  d918                 fstp dword ptr [eax]
// 0062467b  d94104               fld dword ptr [ecx + 4]
// 0062467e  d95804               fstp dword ptr [eax + 4]
// 00624681  c20800               ret 8
// 00624684  8b442404             mov eax, dword ptr [esp + 4]
// 00624688  d94108               fld dword ptr [ecx + 8]
// 0062468b  d918                 fstp dword ptr [eax]
// 0062468d  d94104               fld dword ptr [ecx + 4]
// 00624690  d95804               fstp dword ptr [eax + 4]
// 00624693  c20800               ret 8
// 00624696  8b442404             mov eax, dword ptr [esp + 4]
// 0062469a  d94108               fld dword ptr [ecx + 8]
// 0062469d  d918                 fstp dword ptr [eax]
// 0062469f  d9410c               fld dword ptr [ecx + 0xc]
// 006246a2  d95804               fstp dword ptr [eax + 4]
// 006246a5  c20800               ret 8
// 006246a8  8b442404             mov eax, dword ptr [esp + 4]
// 006246ac  d901                 fld dword ptr [ecx]
// 006246ae  d918                 fstp dword ptr [eax]
// 006246b0  d9410c               fld dword ptr [ecx + 0xc]
// 006246b3  d95804               fstp dword ptr [eax + 4]
// 006246b6  c20800               ret 8
// 006246b9  d9ee                 fldz 
// 006246bb  8b442404             mov eax, dword ptr [esp + 4]
// 006246bf  d910                 fst dword ptr [eax]
// 006246c1  d95804               fstp dword ptr [eax + 4]
// 006246c4  c20800               ret 8
// 006246c7  90                   nop 
// 006246c8  7346                 jae 0x624710
// 006246ca  6200                 bound eax, qword ptr [eax]
// 006246cc  844662               test byte ptr [esi + 0x62], al
// 006246cf  0096466200a8         add byte ptr [esi - 0x57ff9dba], dl
// 006246d5  46                   inc esi
// 006246d6  6200                 bound eax, qword ptr [eax]
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?corner@Rect2D@G3D@@QBE?AVVector2@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
