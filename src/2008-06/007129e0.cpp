// roc 2008-06 007129e0  unit: CXTPPropertyGridItem  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007129e0
//
// 007129e0  53                   push ebx
// 007129e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007129e5  56                   push esi
// 007129e6  57                   push edi
// 007129e7  53                   push ebx
// 007129e8  8bf9                 mov edi, ecx
// 007129ea  e841ffffff           call 0x712930
// 007129ef  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 007129f5  e856130800           call 0x793d50
// 007129fa  8bf0                 mov esi, eax
// 007129fc  83ee01               sub esi, 1
// 007129ff  781e                 js 0x712a1f
// 00712a01  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 00712a07  56                   push esi
// 00712a08  e8731d0600           call 0x774780
// 00712a0d  8b10                 mov edx, dword ptr [eax]
// 00712a0f  8bc8                 mov ecx, eax
// 00712a11  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00712a17  53                   push ebx
// 00712a18  ffd0                 call eax
// 00712a1a  83ee01               sub esi, 1
// 00712a1d  79e2                 jns 0x712a01
// 00712a1f  5f                   pop edi
// 00712a20  5e                   pop esi
// 00712a21  8bc3                 mov eax, ebx
// 00712a23  5b                   pop ebx
// 00712a24  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetValueRect@CXTPPropertyGridItem@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
