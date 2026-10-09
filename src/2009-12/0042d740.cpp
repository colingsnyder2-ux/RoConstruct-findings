// roc 2009-12 0042d740  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042d740
//
// 0042d740  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042d744  8b542408             mov edx, dword ptr [esp + 8]
// 0042d748  56                   push esi
// 0042d749  50                   push eax
// 0042d74a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042d74e  8bf1                 mov esi, ecx
// 0042d750  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042d754  51                   push ecx
// 0042d755  52                   push edx
// 0042d756  50                   push eax
// 0042d757  8bce                 mov ecx, esi
// 0042d759  e8dc6b3c00           call 0x7f433a
// 0042d75e  85c0                 test eax, eax
// 0042d760  7504                 jne 0x42d766
// 0042d762  5e                   pop esi
// 0042d763  c21000               ret 0x10
// 0042d766  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0042d76c  85c9                 test ecx, ecx
// 0042d76e  7412                 je 0x42d782
// 0042d770  e85b693e00           call 0x8140d0
// 0042d775  83783400             cmp dword ptr [eax + 0x34], 0
// 0042d779  7407                 je 0x42d782
// 0042d77b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042d782  b801000000           mov eax, 1
// 0042d787  5e                   pop esi
// 0042d788  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
