// roc 2010-06 00492760  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492760
//
// 00492760  55                   push ebp
// 00492761  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00492765  83ed01               sub ebp, 1
// 00492768  7829                 js 0x492793
// 0049276a  53                   push ebx
// 0049276b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0049276f  56                   push esi
// 00492770  8b742410             mov esi, dword ptr [esp + 0x10]
// 00492774  57                   push edi
// 00492775  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00492779  8da42400000000       lea esp, [esp]
// 00492780  57                   push edi
// 00492781  8bce                 mov ecx, esi
// 00492783  ff542428             call dword ptr [esp + 0x28]
// 00492787  03f3                 add esi, ebx
// 00492789  03fb                 add edi, ebx
// 0049278b  83ed01               sub ebp, 1
// 0049278e  79f0                 jns 0x492780
// 00492790  5f                   pop edi
// 00492791  5e                   pop esi
// 00492792  5b                   pop ebx
// 00492793  5d                   pop ebp
// 00492794  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
