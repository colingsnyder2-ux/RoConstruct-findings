// from server: 100% by auto
// roc 2007-08 00474f30  unit: CInstanceRecord::CNameItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474f30
//
// 00474f30  55                   push ebp
// 00474f31  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00474f35  83ed01               sub ebp, 1
// 00474f38  7829                 js 0x474f63
// 00474f3a  53                   push ebx
// 00474f3b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00474f3f  56                   push esi
// 00474f40  8b742410             mov esi, dword ptr [esp + 0x10]
// 00474f44  57                   push edi
// 00474f45  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00474f49  8da42400000000       lea esp, [esp]
// 00474f50  57                   push edi
// 00474f51  8bce                 mov ecx, esi
// 00474f53  ff542428             call dword ptr [esp + 0x28]
// 00474f57  03f3                 add esi, ebx
// 00474f59  03fb                 add edi, ebx
// 00474f5b  83ed01               sub ebp, 1
// 00474f5e  79f0                 jns 0x474f50
// 00474f60  5f                   pop edi
// 00474f61  5e                   pop esi
// 00474f62  5b                   pop ebx
// 00474f63  5d                   pop ebp
// 00474f64  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
