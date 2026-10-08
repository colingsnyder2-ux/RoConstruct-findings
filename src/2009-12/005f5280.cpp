// roc 2009-12 005f5280  unit: seg_005f0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5280
//
// 005f5280  807c240400           cmp byte ptr [esp + 4], 0
// 005f5285  7424                 je 0x5f52ab
// 005f5287  0fb64803             movzx ecx, byte ptr [eax + 3]
// 005f528b  0fb65002             movzx edx, byte ptr [eax + 2]
// 005f528f  884c2404             mov byte ptr [esp + 4], cl
// 005f5293  0fb64801             movzx ecx, byte ptr [eax + 1]
// 005f5297  88542405             mov byte ptr [esp + 5], dl
// 005f529b  0fb610               movzx edx, byte ptr [eax]
// 005f529e  884c2406             mov byte ptr [esp + 6], cl
// 005f52a2  88542407             mov byte ptr [esp + 7], dl
// 005f52a6  8b442404             mov eax, dword ptr [esp + 4]
// 005f52aa  c3                   ret 
// 005f52ab  8b00                 mov eax, dword ptr [eax]
// 005f52ad  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
