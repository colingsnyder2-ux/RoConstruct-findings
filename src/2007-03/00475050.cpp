// roc 2007-03 00475050  unit: seg_00470000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475050
//
// 00475050  55                   push ebp
// 00475051  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00475055  83ed01               sub ebp, 1
// 00475058  7829                 js 0x475083
// 0047505a  53                   push ebx
// 0047505b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0047505f  56                   push esi
// 00475060  8b742410             mov esi, dword ptr [esp + 0x10]
// 00475064  57                   push edi
// 00475065  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00475069  8da42400000000       lea esp, [esp]
// 00475070  57                   push edi
// 00475071  8bce                 mov ecx, esi
// 00475073  ff542428             call dword ptr [esp + 0x28]
// 00475077  03f3                 add esi, ebx
// 00475079  03fb                 add edi, ebx
// 0047507b  83ed01               sub ebp, 1
// 0047507e  79f0                 jns 0x475070
// 00475080  5f                   pop edi
// 00475081  5e                   pop esi
// 00475082  5b                   pop ebx
// 00475083  5d                   pop ebp
// 00475084  c21400               ret 0x14
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ??__G@YGXPAX0IHP6EPAX00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp
