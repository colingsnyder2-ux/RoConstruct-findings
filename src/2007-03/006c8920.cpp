// roc 2007-03 006c8920  unit: seg_006c0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c8920
//
// 006c8920  8b542404             mov edx, dword ptr [esp + 4]
// 006c8924  8b4214               mov eax, dword ptr [edx + 0x14]
// 006c8927  3df1240000           cmp eax, 0x24f1
// 006c892c  7506                 jne 0x6c8934
// 006c892e  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006c8931  c20400               ret 4
// 006c8934  3df0240000           cmp eax, 0x24f0
// 006c8939  7515                 jne 0x6c8950
// 006c893b  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006c893e  f7d8                 neg eax
// 006c8940  1bc0                 sbb eax, eax
// 006c8942  83e002               and eax, 2
// 006c8945  894220               mov dword ptr [edx + 0x20], eax
// 006c8948  a1c42a8b00           mov eax, dword ptr [0x8b2ac4]
// 006c894d  c20400               ret 4
// 006c8950  3df4240000           cmp eax, 0x24f4
// 006c8955  751f                 jne 0x6c8976
// 006c8957  81c11cffffff         add ecx, 0xffffff1c
// 006c895d  e8eefeffff           call 0x6c8850
// 006c8962  85c0                 test eax, eax
// 006c8964  740b                 je 0x6c8971
// 006c8966  8bc8                 mov ecx, eax
// 006c8968  e89307fbff           call 0x679100
// 006c896d  a810                 test al, 0x10
// 006c896f  7505                 jne 0x6c8976
// 006c8971  33c0                 xor eax, eax
// 006c8973  c20400               ret 4
// 006c8976  b801000000           mov eax, 1
// 006c897b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsCaptionButtonVisible@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
