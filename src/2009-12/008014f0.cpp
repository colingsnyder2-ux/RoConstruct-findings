// roc 2009-12 008014f0  unit: CXTPPaintManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008014f0
//
// 008014f0  83ec08               sub esp, 8
// 008014f3  56                   push esi
// 008014f4  8bf1                 mov esi, ecx
// 008014f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008014fa  8b01                 mov eax, dword ptr [ecx]
// 008014fc  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 00801502  8d542404             lea edx, [esp + 4]
// 00801506  52                   push edx
// 00801507  ffd0                 call eax
// 00801509  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080150d  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00801513  83c106               add ecx, 6
// 00801516  3bc8                 cmp ecx, eax
// 00801518  5e                   pop esi
// 00801519  7f02                 jg 0x80151d
// 0080151b  8bc8                 mov ecx, eax
// 0080151d  8b1424               mov edx, dword ptr [esp]
// 00801520  83c004               add eax, 4
// 00801523  83c204               add edx, 4
// 00801526  3bd0                 cmp edx, eax
// 00801528  7f02                 jg 0x80152c
// 0080152a  8bd0                 mov edx, eax
// 0080152c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00801530  8910                 mov dword ptr [eax], edx
// 00801532  894804               mov dword ptr [eax + 4], ecx
// 00801535  83c408               add esp, 8
// 00801538  c20800               ret 8
// copied from an identical function in another client (function ?GetPopupBarImageSize@CXTPPaintManager@@MAE?AVCSize@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp