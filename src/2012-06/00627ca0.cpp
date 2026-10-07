// roc 2012-06 00627ca0  unit: G3D::Log  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00627ca0
//
// 00627ca0  684084e200           push 0xe28440
// 00627ca5  ff159c3bb200         call dword ptr [0xb23b9c]
// 00627cab  a15c84e200           mov eax, dword ptr [0xe2845c]
// 00627cb0  8b0d5884e200         mov ecx, dword ptr [0xe28458]
// 00627cb6  50                   push eax
// 00627cb7  51                   push ecx
// 00627cb8  ff157c3bb200         call dword ptr [0xb23b7c]
// 00627cbe  8b153c84e200         mov edx, dword ptr [0xe2843c]
// 00627cc4  52                   push edx
// 00627cc5  ff15783bb200         call dword ptr [0xb23b78]
// 00627ccb  a15484e200           mov eax, dword ptr [0xe28454]
// 00627cd0  85c0                 test eax, eax
// 00627cd2  7d1d                 jge 0x627cf1
// 00627cd4  56                   push esi
// 00627cd5  33f6                 xor esi, esi
// 00627cd7  85c0                 test eax, eax
// 00627cd9  7d15                 jge 0x627cf0
// 00627cdb  57                   push edi
// 00627cdc  8b3da83bb200         mov edi, dword ptr [0xb23ba8]
// 00627ce2  6a00                 push 0
// 00627ce4  ffd7                 call edi
// 00627ce6  4e                   dec esi
// 00627ce7  3b355484e200         cmp esi, dword ptr [0xe28454]
// 00627ced  7ff3                 jg 0x627ce2
// 00627cef  5f                   pop edi
// 00627cf0  5e                   pop esi
// 00627cf1  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
