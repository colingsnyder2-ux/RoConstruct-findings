// roc 2011-06 00804040  unit: W4_D3DFORMAT::?$EnumDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00804040
//
// 00804040  6aff                 push -1
// 00804042  68191da000           push 0xa01d19
// 00804047  64a100000000         mov eax, dword ptr fs:[0]
// 0080404d  50                   push eax
// 0080404e  83ec44               sub esp, 0x44
// 00804051  a12058c900           mov eax, dword ptr [0xc95820]
// 00804056  33c4                 xor eax, esp
// 00804058  50                   push eax
// 00804059  8d442448             lea eax, [esp + 0x48]
// 0080405d  64a300000000         mov dword ptr fs:[0], eax
// 00804063  68b0dfa500           push 0xa5dfb0
// 00804068  8d4c2408             lea ecx, [esp + 8]
// 0080406c  ff15c404a400         call dword ptr [0xa404c4]
// 00804072  8d442404             lea eax, [esp + 4]
// 00804076  50                   push eax
// 00804077  8d4c2424             lea ecx, [esp + 0x24]
// 0080407b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00804083  e868d3bfff           call 0x4013f0
// 00804088  687073b800           push 0xb87370
// 0080408d  8d4c2424             lea ecx, [esp + 0x24]
// 00804091  51                   push ecx
// 00804092  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0080409a  e80d700000           call 0x80b0ac
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
