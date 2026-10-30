// from server: 100% by auto
// roc 2011-06 008f2d20  unit: CXTCaptionButton  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2d20
//
// 008f2d20  8b442404             mov eax, dword ptr [esp + 4]
// 008f2d24  56                   push esi
// 008f2d25  8bf1                 mov esi, ecx
// 008f2d27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f2d2b  898e88000000         mov dword ptr [esi + 0x88], ecx
// 008f2d31  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008f2d37  898684000000         mov dword ptr [esi + 0x84], eax
// 008f2d3d  85c9                 test ecx, ecx
// 008f2d3f  740f                 je 0x8f2d50
// 008f2d41  e89478f1ff           call 0x80a5da
// 008f2d46  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 008f2d50  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f2d53  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f2d57  50                   push eax
// 008f2d58  89969c000000         mov dword ptr [esi + 0x9c], edx
// 008f2d5e  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f2d64  85c0                 test eax, eax
// 008f2d66  7415                 je 0x8f2d7d
// 008f2d68  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f2d6d  740e                 je 0x8f2d7d
// 008f2d6f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f2d72  6a01                 push 1
// 008f2d74  6a00                 push 0
// 008f2d76  51                   push ecx
// 008f2d77  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2d7d  b801000000           mov eax, 1
// 008f2d82  5e                   pop esi
// 008f2d83  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?SetIcon@CXTButton@@QAEHVCSize@@PAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
