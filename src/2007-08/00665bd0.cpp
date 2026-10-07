// roc 2007-08 00665bd0  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665bd0
//
// 00665bd0  56                   push esi
// 00665bd1  8bf1                 mov esi, ecx
// 00665bd3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00665bd6  e893290d00           call 0x73856e
// 00665bdb  85c0                 test eax, eax
// 00665bdd  7510                 jne 0x665bef
// 00665bdf  e88c330000           call 0x668f70
// 00665be4  6a11                 push 0x11
// 00665be6  8bc8                 mov ecx, eax
// 00665be8  e8832b0000           call 0x668770
// 00665bed  5e                   pop esi
// 00665bee  c3                   ret 
// 00665bef  e84cb50000           call 0x671140
// 00665bf4  8bc8                 mov ecx, eax
// 00665bf6  e835c50000           call 0x672130
// 00665bfb  3d47000400           cmp eax, 0x40047
// 00665c00  721b                 jb 0x665c1d
// 00665c02  8b4634               mov eax, dword ptr [esi + 0x34]
// 00665c05  8b4020               mov eax, dword ptr [eax + 0x20]
// 00665c08  6a00                 push 0
// 00665c0a  6a00                 push 0
// 00665c0c  6820110000           push 0x1120
// 00665c11  50                   push eax
// 00665c12  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00665c18  83f8ff               cmp eax, -1
// 00665c1b  750e                 jne 0x665c2b
// 00665c1d  e84e330000           call 0x668f70
// 00665c22  6a08                 push 8
// 00665c24  8bc8                 mov ecx, eax
// 00665c26  e8452b0000           call 0x668770
// 00665c2b  5e                   pop esi
// 00665c2c  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetTreeTextColor@CXTTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
