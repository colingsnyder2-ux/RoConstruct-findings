// roc 2012-06 00448fc0  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448fc0
//
// 00448fc0  53                   push ebx
// 00448fc1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00448fc5  55                   push ebp
// 00448fc6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00448fca  56                   push esi
// 00448fcb  8bf1                 mov esi, ecx
// 00448fcd  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00448fd3  57                   push edi
// 00448fd4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00448fd8  85c9                 test ecx, ecx
// 00448fda  741d                 je 0x448ff9
// 00448fdc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00448fe0  57                   push edi
// 00448fe1  53                   push ebx
// 00448fe2  55                   push ebp
// 00448fe3  50                   push eax
// 00448fe4  e827b45500           call 0x9a4410
// 00448fe9  85c0                 test eax, eax
// 00448feb  740c                 je 0x448ff9
// 00448fed  5f                   pop edi
// 00448fee  5e                   pop esi
// 00448fef  5d                   pop ebp
// 00448ff0  b801000000           mov eax, 1
// 00448ff5  5b                   pop ebx
// 00448ff6  c21000               ret 0x10
// 00448ff9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00448ffd  57                   push edi
// 00448ffe  53                   push ebx
// 00448fff  55                   push ebp
// 00449000  51                   push ecx
// 00449001  8bce                 mov ecx, esi
// 00449003  e88c925300           call 0x982294
// 00449008  5f                   pop edi
// 00449009  5e                   pop esi
// 0044900a  5d                   pop ebp
// 0044900b  5b                   pop ebx
// 0044900c  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
