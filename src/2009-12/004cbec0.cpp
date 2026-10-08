// roc 2009-12 004cbec0  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbec0
//
// 004cbec0  55                   push ebp
// 004cbec1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cbec5  83ed01               sub ebp, 1
// 004cbec8  7829                 js 0x4cbef3
// 004cbeca  53                   push ebx
// 004cbecb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004cbecf  56                   push esi
// 004cbed0  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cbed4  57                   push edi
// 004cbed5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cbed9  8da42400000000       lea esp, [esp]
// 004cbee0  57                   push edi
// 004cbee1  8bce                 mov ecx, esi
// 004cbee3  ff542428             call dword ptr [esp + 0x28]
// 004cbee7  03f3                 add esi, ebx
// 004cbee9  03fb                 add edi, ebx
// 004cbeeb  83ed01               sub ebp, 1
// 004cbeee  79f0                 jns 0x4cbee0
// 004cbef0  5f                   pop edi
// 004cbef1  5e                   pop esi
// 004cbef2  5b                   pop ebx
// 004cbef3  5d                   pop ebp
// 004cbef4  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
