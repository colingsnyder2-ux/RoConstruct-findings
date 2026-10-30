// roc 2009-12 008661c0  unit: CXTPPropertyGridItem  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008661c0
//
// 008661c0  53                   push ebx
// 008661c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008661c5  56                   push esi
// 008661c6  57                   push edi
// 008661c7  53                   push ebx
// 008661c8  8bf9                 mov edi, ecx
// 008661ca  e841ffffff           call 0x866110
// 008661cf  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 008661d5  e85650f4ff           call 0x7ab230
// 008661da  8bf0                 mov esi, eax
// 008661dc  83ee01               sub esi, 1
// 008661df  781e                 js 0x8661ff
// 008661e1  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 008661e7  56                   push esi
// 008661e8  e863180600           call 0x8c7a50
// 008661ed  8b10                 mov edx, dword ptr [eax]
// 008661ef  8bc8                 mov ecx, eax
// 008661f1  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008661f7  53                   push ebx
// 008661f8  ffd0                 call eax
// 008661fa  83ee01               sub esi, 1
// 008661fd  79e2                 jns 0x8661e1
// 008661ff  5f                   pop edi
// 00866200  5e                   pop esi
// 00866201  8bc3                 mov eax, ebx
// 00866203  5b                   pop ebx
// 00866204  c20400               ret 4
// copied from an identical function in another client (function ?GetValueRect@CXTPPropertyGridItem@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp