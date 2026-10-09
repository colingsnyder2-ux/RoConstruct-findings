// roc 2009-12 0042afe0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042afe0
//
// 0042afe0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042afe4  8b542408             mov edx, dword ptr [esp + 8]
// 0042afe8  56                   push esi
// 0042afe9  50                   push eax
// 0042afea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042afee  8bf1                 mov esi, ecx
// 0042aff0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042aff4  51                   push ecx
// 0042aff5  52                   push edx
// 0042aff6  50                   push eax
// 0042aff7  8bce                 mov ecx, esi
// 0042aff9  e88e923c00           call 0x7f428c
// 0042affe  85c0                 test eax, eax
// 0042b000  7504                 jne 0x42b006
// 0042b002  5e                   pop esi
// 0042b003  c21000               ret 0x10
// 0042b006  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0042b00c  85c9                 test ecx, ecx
// 0042b00e  7412                 je 0x42b022
// 0042b010  e8bb903e00           call 0x8140d0
// 0042b015  83783400             cmp dword ptr [eax + 0x34], 0
// 0042b019  7407                 je 0x42b022
// 0042b01b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042b022  b801000000           mov eax, 1
// 0042b027  5e                   pop esi
// 0042b028  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
