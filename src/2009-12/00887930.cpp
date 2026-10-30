// roc 2009-12 00887930  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887930
//
// 00887930  56                   push esi
// 00887931  8bf1                 mov esi, ecx
// 00887933  e8d8f2ffff           call 0x886c10
// 00887938  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088793c  85c0                 test eax, eax
// 0088793e  7516                 jne 0x887956
// 00887940  8b442410             mov eax, dword ptr [esp + 0x10]
// 00887944  8b542408             mov edx, dword ptr [esp + 8]
// 00887948  50                   push eax
// 00887949  51                   push ecx
// 0088794a  52                   push edx
// 0088794b  8bce                 mov ecx, esi
// 0088794d  e8be68ffff           call 0x87e210
// 00887952  5e                   pop esi
// 00887953  c20c00               ret 0xc
// 00887956  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0088795c  85c0                 test eax, eax
// 0088795e  74f2                 je 0x887952
// 00887960  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 00887967  74e9                 je 0x887952
// 00887969  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00887970  5e                   pop esi
// 00887971  7433                 je 0x8879a6
// 00887973  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00887978  7416                 je 0x887990
// 0088797a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00887982  c744240800000000     mov dword ptr [esp + 8], 0
// 0088798a  ff2558ca9800         jmp dword ptr [0x98ca58]
// 00887990  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00887998  c744240800000000     mov dword ptr [esp + 8], 0
// 008879a0  ff2558ca9800         jmp dword ptr [0x98ca58]
// 008879a6  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 008879ae  c7442408fdffffff     mov dword ptr [esp + 8], 0xfffffffd
// 008879b6  ff2558ca9800         jmp dword ptr [0x98ca58]
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPNativeXPTheme@XTPPaintThemes@@MAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp