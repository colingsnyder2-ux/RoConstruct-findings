// roc 2007-08 0072ed70  unit: seg_00720000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072ed70
//
// 0072ed70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072ed74  d901                 fld dword ptr [ecx]
// 0072ed76  53                   push ebx
// 0072ed77  55                   push ebp
// 0072ed78  56                   push esi
// 0072ed79  57                   push edi
// 0072ed7a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072ed7e  8d87a8040000         lea eax, [edi + 0x4a8]
// 0072ed84  d918                 fstp dword ptr [eax]
// 0072ed86  50                   push eax
// 0072ed87  d94104               fld dword ptr [ecx + 4]
// 0072ed8a  d95804               fstp dword ptr [eax + 4]
// 0072ed8d  d94108               fld dword ptr [ecx + 8]
// 0072ed90  d95808               fstp dword ptr [eax + 8]
// 0072ed93  d9410c               fld dword ptr [ecx + 0xc]
// 0072ed96  d9580c               fstp dword ptr [eax + 0xc]
// 0072ed99  ff150ceb7700         call dword ptr [0x77eb0c]
// 0072ed9f  6a05                 push 5
// 0072eda1  8bcf                 mov ecx, edi
// 0072eda3  e89890d4ff           call 0x477e40
// 0072eda8  d9ee                 fldz 
// 0072edaa  8b1db0eb7700         mov ebx, dword ptr [0x77ebb0]
// 0072edb0  83ec08               sub esp, 8
// 0072edb3  d9542404             fst dword ptr [esp + 4]
// 0072edb7  d91c24               fstp dword ptr [esp]
// 0072edba  ffd3                 call ebx
// 0072edbc  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072edc0  d94604               fld dword ptr [esi + 4]
// 0072edc3  8b2d3cea7700         mov ebp, dword ptr [0x77ea3c]
// 0072edc9  83ec08               sub esp, 8
// 0072edcc  d95c2404             fstp dword ptr [esp + 4]
// 0072edd0  d906                 fld dword ptr [esi]
// 0072edd2  d91c24               fstp dword ptr [esp]
// 0072edd5  ffd5                 call ebp
// 0072edd7  d9e8                 fld1 
// 0072edd9  83ec08               sub esp, 8
// 0072eddc  d95c2404             fstp dword ptr [esp + 4]
// 0072ede0  d9ee                 fldz 
// 0072ede2  d91c24               fstp dword ptr [esp]
// 0072ede5  ffd3                 call ebx
// 0072ede7  d9460c               fld dword ptr [esi + 0xc]
// 0072edea  83ec08               sub esp, 8
// 0072eded  d95c2404             fstp dword ptr [esp + 4]
// 0072edf1  d906                 fld dword ptr [esi]
// 0072edf3  d91c24               fstp dword ptr [esp]
// 0072edf6  ffd5                 call ebp
// 0072edf8  d9e8                 fld1 
// 0072edfa  83ec08               sub esp, 8
// 0072edfd  d9542404             fst dword ptr [esp + 4]
// 0072ee01  d91c24               fstp dword ptr [esp]
// 0072ee04  ffd3                 call ebx
// 0072ee06  d9460c               fld dword ptr [esi + 0xc]
// 0072ee09  83ec08               sub esp, 8
// 0072ee0c  d95c2404             fstp dword ptr [esp + 4]
// 0072ee10  d94608               fld dword ptr [esi + 8]
// 0072ee13  d91c24               fstp dword ptr [esp]
// 0072ee16  ffd5                 call ebp
// 0072ee18  d9ee                 fldz 
// 0072ee1a  83ec08               sub esp, 8
// 0072ee1d  d95c2404             fstp dword ptr [esp + 4]
// 0072ee21  d9e8                 fld1 
// 0072ee23  d91c24               fstp dword ptr [esp]
// 0072ee26  ffd3                 call ebx
// 0072ee28  d94604               fld dword ptr [esi + 4]
// 0072ee2b  83ec08               sub esp, 8
// 0072ee2e  d95c2404             fstp dword ptr [esp + 4]
// 0072ee32  d94608               fld dword ptr [esi + 8]
// 0072ee35  d91c24               fstp dword ptr [esp]
// 0072ee38  ffd5                 call ebp
// 0072ee3a  8bcf                 mov ecx, edi
// 0072ee3c  e8af69d4ff           call 0x4757f0
// 0072ee41  83477008             add dword ptr [edi + 0x70], 8
// 0072ee45  5f                   pop edi
// 0072ee46  5e                   pop esi
// 0072ee47  5d                   pop ebp
// 0072ee48  5b                   pop ebx
// 0072ee49  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?fastRect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
