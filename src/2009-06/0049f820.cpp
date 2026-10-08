// from server: 100% by auto
// roc 2009-06 0049f820  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f820
//
// 0049f820  55                   push ebp
// 0049f821  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0049f825  83ed01               sub ebp, 1
// 0049f828  7829                 js 0x49f853
// 0049f82a  53                   push ebx
// 0049f82b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0049f82f  56                   push esi
// 0049f830  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049f834  57                   push edi
// 0049f835  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0049f839  8da42400000000       lea esp, [esp]
// 0049f840  57                   push edi
// 0049f841  8bce                 mov ecx, esi
// 0049f843  ff542428             call dword ptr [esp + 0x28]
// 0049f847  03f3                 add esi, ebx
// 0049f849  03fb                 add edi, ebx
// 0049f84b  83ed01               sub ebp, 1
// 0049f84e  79f0                 jns 0x49f840
// 0049f850  5f                   pop edi
// 0049f851  5e                   pop esi
// 0049f852  5b                   pop ebx
// 0049f853  5d                   pop ebp
// 0049f854  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
