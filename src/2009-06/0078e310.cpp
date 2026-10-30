// roc 2009-06 0078e310  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078e310
//
// 0078e310  83ec08               sub esp, 8
// 0078e313  837c241001           cmp dword ptr [esp + 0x10], 1
// 0078e318  56                   push esi
// 0078e319  8bf1                 mov esi, ecx
// 0078e31b  754b                 jne 0x78e368
// 0078e31d  8d442404             lea eax, [esp + 4]
// 0078e321  50                   push eax
// 0078e322  ff152cee8900         call dword ptr [0x89ee2c]
// 0078e328  8b5620               mov edx, dword ptr [esi + 0x20]
// 0078e32b  8d4c2404             lea ecx, [esp + 4]
// 0078e32f  51                   push ecx
// 0078e330  52                   push edx
// 0078e331  ff1530ee8900         call dword ptr [0x89ee30]
// 0078e337  8b442408             mov eax, dword ptr [esp + 8]
// 0078e33b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078e33f  50                   push eax
// 0078e340  51                   push ecx
// 0078e341  8bce                 mov ecx, esi
// 0078e343  e878ffffff           call 0x78e2c0
// 0078e348  3d00010000           cmp eax, 0x100
// 0078e34d  7519                 jne 0x78e368
// 0078e34f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0078e355  52                   push edx
// 0078e356  ff1590ed8900         call dword ptr [0x89ed90]
// 0078e35c  b801000000           mov eax, 1
// 0078e361  5e                   pop esi
// 0078e362  83c408               add esp, 8
// 0078e365  c20c00               ret 0xc
// 0078e368  8bce                 mov ecx, esi
// 0078e36a  e899acf8ff           call 0x719008
// 0078e36f  5e                   pop esi
// 0078e370  83c408               add esp, 8
// 0078e373  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
