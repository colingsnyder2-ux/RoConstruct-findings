// roc 2012-06 006309f0  unit: G3D::BinaryInput  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006309f0
//
// 006309f0  51                   push ecx
// 006309f1  56                   push esi
// 006309f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006309f6  6a01                 push 1
// 006309f8  6a00                 push 0
// 006309fa  8d44240c             lea eax, [esp + 0xc]
// 006309fe  50                   push eax
// 006309ff  8bce                 mov ecx, esi
// 00630a01  c64424102a           mov byte ptr [esp + 0x10], 0x2a
// 00630a06  ff154425b200         call dword ptr [0xb22544]
// 00630a0c  8b0dec26b200         mov ecx, dword ptr [0xb226ec]
// 00630a12  3b01                 cmp eax, dword ptr [ecx]
// 00630a14  7525                 jne 0x630a3b
// 00630a16  6a01                 push 1
// 00630a18  6a00                 push 0
// 00630a1a  8d54240c             lea edx, [esp + 0xc]
// 00630a1e  52                   push edx
// 00630a1f  8bce                 mov ecx, esi
// 00630a21  c64424103f           mov byte ptr [esp + 0x10], 0x3f
// 00630a26  ff154425b200         call dword ptr [0xb22544]
// 00630a2c  8b0dec26b200         mov ecx, dword ptr [0xb226ec]
// 00630a32  3b01                 cmp eax, dword ptr [ecx]
// 00630a34  7505                 jne 0x630a3b
// 00630a36  33c0                 xor eax, eax
// 00630a38  5e                   pop esi
// 00630a39  59                   pop ecx
// 00630a3a  c3                   ret 
// 00630a3b  b801000000           mov eax, 1
// 00630a40  5e                   pop esi
// 00630a41  59                   pop ecx
// 00630a42  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?filenameContainsWildcards@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
