// from server: 100% by auto
// roc 2007-08 0050bd90  unit: seg_00500000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bd90
//
// 0050bd90  807c240400           cmp byte ptr [esp + 4], 0
// 0050bd95  7424                 je 0x50bdbb
// 0050bd97  0fb64803             movzx ecx, byte ptr [eax + 3]
// 0050bd9b  0fb65002             movzx edx, byte ptr [eax + 2]
// 0050bd9f  884c2404             mov byte ptr [esp + 4], cl
// 0050bda3  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0050bda7  88542405             mov byte ptr [esp + 5], dl
// 0050bdab  0fb610               movzx edx, byte ptr [eax]
// 0050bdae  884c2406             mov byte ptr [esp + 6], cl
// 0050bdb2  88542407             mov byte ptr [esp + 7], dl
// 0050bdb6  8b442404             mov eax, dword ptr [esp + 4]
// 0050bdba  c3                   ret 
// 0050bdbb  8b00                 mov eax, dword ptr [eax]
// 0050bdbd  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
