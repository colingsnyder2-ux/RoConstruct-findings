// roc 2008-06 006b1e60  unit: CXTPPaintManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b1e60
//
// 006b1e60  83ec08               sub esp, 8
// 006b1e63  56                   push esi
// 006b1e64  8bf1                 mov esi, ecx
// 006b1e66  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b1e6a  8b01                 mov eax, dword ptr [ecx]
// 006b1e6c  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 006b1e72  8d542404             lea edx, [esp + 4]
// 006b1e76  52                   push edx
// 006b1e77  ffd0                 call eax
// 006b1e79  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b1e7d  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 006b1e83  83c106               add ecx, 6
// 006b1e86  3bc8                 cmp ecx, eax
// 006b1e88  5e                   pop esi
// 006b1e89  7f02                 jg 0x6b1e8d
// 006b1e8b  8bc8                 mov ecx, eax
// 006b1e8d  8b1424               mov edx, dword ptr [esp]
// 006b1e90  83c004               add eax, 4
// 006b1e93  83c204               add edx, 4
// 006b1e96  3bd0                 cmp edx, eax
// 006b1e98  7f02                 jg 0x6b1e9c
// 006b1e9a  8bd0                 mov edx, eax
// 006b1e9c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b1ea0  8910                 mov dword ptr [eax], edx
// 006b1ea2  894804               mov dword ptr [eax + 4], ecx
// 006b1ea5  83c408               add esp, 8
// 006b1ea8  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?GetPopupBarImageSize@CXTPPaintManager@@MAE?AVCSize@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
