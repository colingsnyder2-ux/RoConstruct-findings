// from server: 100% by auto
// roc 2008-06 004782a0  unit: CInstanceRecord::CNameItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004782a0
//
// 004782a0  b801000000           mov eax, 1
// 004782a5  840550f09600         test byte ptr [0x96f050], al
// 004782ab  751a                 jne 0x4782c7
// 004782ad  d9ee                 fldz 
// 004782af  090550f09600         or dword ptr [0x96f050], eax
// 004782b5  d91544f09600         fst dword ptr [0x96f044]
// 004782bb  d91548f09600         fst dword ptr [0x96f048]
// 004782c1  d91d4cf09600         fstp dword ptr [0x96f04c]
// 004782c7  b844f09600           mov eax, 0x96f044
// 004782cc  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
