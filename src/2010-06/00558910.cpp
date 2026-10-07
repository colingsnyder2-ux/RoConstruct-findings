// roc 2010-06 00558910  unit: seg_00550000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558910
//
// 00558910  807c240400           cmp byte ptr [esp + 4], 0
// 00558915  7424                 je 0x55893b
// 00558917  0fb64803             movzx ecx, byte ptr [eax + 3]
// 0055891b  0fb65002             movzx edx, byte ptr [eax + 2]
// 0055891f  884c2404             mov byte ptr [esp + 4], cl
// 00558923  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00558927  88542405             mov byte ptr [esp + 5], dl
// 0055892b  0fb610               movzx edx, byte ptr [eax]
// 0055892e  884c2406             mov byte ptr [esp + 6], cl
// 00558932  88542407             mov byte ptr [esp + 7], dl
// 00558936  8b442404             mov eax, dword ptr [esp + 4]
// 0055893a  c3                   ret 
// 0055893b  8b00                 mov eax, dword ptr [eax]
// 0055893d  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
