// from server: 100% by auto
// roc 2008-06 004781f0  unit: CInstanceRecord::CNameItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004781f0
//
// 004781f0  55                   push ebp
// 004781f1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004781f5  83ed01               sub ebp, 1
// 004781f8  7829                 js 0x478223
// 004781fa  53                   push ebx
// 004781fb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004781ff  56                   push esi
// 00478200  8b742410             mov esi, dword ptr [esp + 0x10]
// 00478204  57                   push edi
// 00478205  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00478209  8da42400000000       lea esp, [esp]
// 00478210  57                   push edi
// 00478211  8bce                 mov ecx, esi
// 00478213  ff542428             call dword ptr [esp + 0x28]
// 00478217  03f3                 add esi, ebx
// 00478219  03fb                 add edi, ebx
// 0047821b  83ed01               sub ebp, 1
// 0047821e  79f0                 jns 0x478210
// 00478220  5f                   pop edi
// 00478221  5e                   pop esi
// 00478222  5b                   pop ebx
// 00478223  5d                   pop ebp
// 00478224  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
