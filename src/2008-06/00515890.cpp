// from server: 100% by auto
// roc 2008-06 00515890  unit: seg_00510000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515890
//
// 00515890  807c240400           cmp byte ptr [esp + 4], 0
// 00515895  7424                 je 0x5158bb
// 00515897  0fb64803             movzx ecx, byte ptr [eax + 3]
// 0051589b  0fb65002             movzx edx, byte ptr [eax + 2]
// 0051589f  884c2404             mov byte ptr [esp + 4], cl
// 005158a3  0fb64801             movzx ecx, byte ptr [eax + 1]
// 005158a7  88542405             mov byte ptr [esp + 5], dl
// 005158ab  0fb610               movzx edx, byte ptr [eax]
// 005158ae  884c2406             mov byte ptr [esp + 6], cl
// 005158b2  88542407             mov byte ptr [esp + 7], dl
// 005158b6  8b442404             mov eax, dword ptr [esp + 4]
// 005158ba  c3                   ret 
// 005158bb  8b00                 mov eax, dword ptr [eax]
// 005158bd  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
