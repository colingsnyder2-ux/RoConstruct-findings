// roc 2008-06 007442c0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007442c0
//
// 007442c0  56                   push esi
// 007442c1  8bf1                 mov esi, ecx
// 007442c3  57                   push edi
// 007442c4  33ff                 xor edi, edi
// 007442c6  8d4e1c               lea ecx, [esi + 0x1c]
// 007442c9  897e08               mov dword ptr [esi + 8], edi
// 007442cc  c74604a0e88000       mov dword ptr [esi + 4], 0x80e8a0
// 007442d3  e818ffffff           call 0x7441f0
// 007442d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007442dc  897e0c               mov dword ptr [esi + 0xc], edi
// 007442df  897e10               mov dword ptr [esi + 0x10], edi
// 007442e2  897e14               mov dword ptr [esi + 0x14], edi
// 007442e5  897e18               mov dword ptr [esi + 0x18], edi
// 007442e8  8906                 mov dword ptr [esi], eax
// 007442ea  5f                   pop edi
// 007442eb  8bc6                 mov eax, esi
// 007442ed  5e                   pop esi
// 007442ee  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CXTPCommandBarAnimation@@QAE@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
