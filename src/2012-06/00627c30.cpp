// from server: 100% by auto
// roc 2012-06 00627c30  unit: G3D::Log  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00627c30
//
// 00627c30  57                   push edi
// 00627c31  685884e200           push 0xe28458
// 00627c36  ff158c3ab200         call dword ptr [0xb23a8c]
// 00627c3c  8b3da83bb200         mov edi, dword ptr [0xb23ba8]
// 00627c42  6a01                 push 1
// 00627c44  ffd7                 call edi
// 00627c46  48                   dec eax
// 00627c47  83f8ff               cmp eax, -1
// 00627c4a  a35484e200           mov dword ptr [0xe28454], eax
// 00627c4f  7d10                 jge 0x627c61
// 00627c51  56                   push esi
// 00627c52  83ceff               or esi, 0xffffffff
// 00627c55  2bf0                 sub esi, eax
// 00627c57  6a01                 push 1
// 00627c59  ffd7                 call edi
// 00627c5b  83ee01               sub esi, 1
// 00627c5e  75f7                 jne 0x627c57
// 00627c60  5e                   pop esi
// 00627c61  ff15603bb200         call dword ptr [0xb23b60]
// 00627c67  68007f0000           push 0x7f00
// 00627c6c  6a00                 push 0
// 00627c6e  a33c84e200           mov dword ptr [0xe2843c], eax
// 00627c73  ff159c3ab200         call dword ptr [0xb23a9c]
// 00627c79  50                   push eax
// 00627c7a  ff15783bb200         call dword ptr [0xb23b78]
// 00627c80  684084e200           push 0xe28440
// 00627c85  ff15a43bb200         call dword ptr [0xb23ba4]
// 00627c8b  6a00                 push 0
// 00627c8d  ff159c3bb200         call dword ptr [0xb23b9c]
// 00627c93  5f                   pop edi
// 00627c94  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
