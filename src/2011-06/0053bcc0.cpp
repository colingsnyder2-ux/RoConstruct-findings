// roc 2011-06 0053bcc0  unit: G3D::Log  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053bcc0
//
// 0053bcc0  57                   push edi
// 0053bcc1  68a8a0cb00           push 0xcba0a8
// 0053bcc6  ff15c819a400         call dword ptr [0xa419c8]
// 0053bccc  8b3d9c1ba400         mov edi, dword ptr [0xa41b9c]
// 0053bcd2  6a01                 push 1
// 0053bcd4  ffd7                 call edi
// 0053bcd6  48                   dec eax
// 0053bcd7  83f8ff               cmp eax, -1
// 0053bcda  a3a4a0cb00           mov dword ptr [0xcba0a4], eax
// 0053bcdf  7d10                 jge 0x53bcf1
// 0053bce1  56                   push esi
// 0053bce2  83ceff               or esi, 0xffffffff
// 0053bce5  2bf0                 sub esi, eax
// 0053bce7  6a01                 push 1
// 0053bce9  ffd7                 call edi
// 0053bceb  83ee01               sub esi, 1
// 0053bcee  75f7                 jne 0x53bce7
// 0053bcf0  5e                   pop esi
// 0053bcf1  ff15d01ba400         call dword ptr [0xa41bd0]
// 0053bcf7  68007f0000           push 0x7f00
// 0053bcfc  6a00                 push 0
// 0053bcfe  a38ca0cb00           mov dword ptr [0xcba08c], eax
// 0053bd03  ff15081aa400         call dword ptr [0xa41a08]
// 0053bd09  50                   push eax
// 0053bd0a  ff15f41ba400         call dword ptr [0xa41bf4]
// 0053bd10  6890a0cb00           push 0xcba090
// 0053bd15  ff15a01ba400         call dword ptr [0xa41ba0]
// 0053bd1b  6a00                 push 0
// 0053bd1d  ff15a41ba400         call dword ptr [0xa41ba4]
// 0053bd23  5f                   pop edi
// 0053bd24  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
