// roc 2011-06 00803540  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00803540
//
// 00803540  6aff                 push -1
// 00803542  68ce1ba000           push 0xa01bce
// 00803547  64a100000000         mov eax, dword ptr fs:[0]
// 0080354d  50                   push eax
// 0080354e  a12058c900           mov eax, dword ptr [0xc95820]
// 00803553  33c4                 xor eax, esp
// 00803555  50                   push eax
// 00803556  8d442404             lea eax, [esp + 4]
// 0080355a  64a300000000         mov dword ptr fs:[0], eax
// 00803560  b801000000           mov eax, 1
// 00803565  8405fc70d100         test byte ptr [0xd170fc], al
// 0080356b  7525                 jne 0x803592
// 0080356d  0905fc70d100         or dword ptr [0xd170fc], eax
// 00803573  b95870d100           mov ecx, 0xd17058
// 00803578  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00803580  e8cb180000           call 0x804e50
// 00803585  6820faa300           push 0xa3fa20
// 0080358a  e8ce7b0000           call 0x80b15d
// 0080358f  83c404               add esp, 4
// 00803592  b85870d100           mov eax, 0xd17058
// 00803597  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0080359b  64890d00000000       mov dword ptr fs:[0], ecx
// 008035a2  59                   pop ecx
// 008035a3  83c40c               add esp, 0xc
// 008035a6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
