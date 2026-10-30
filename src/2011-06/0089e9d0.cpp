// from server: 100% by auto
// roc 2011-06 0089e9d0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e9d0
//
// 0089e9d0  56                   push esi
// 0089e9d1  8bf1                 mov esi, ecx
// 0089e9d3  57                   push edi
// 0089e9d4  8d4e24               lea ecx, [esi + 0x24]
// 0089e9d7  e894feffff           call 0x89e870
// 0089e9dc  33ff                 xor edi, edi
// 0089e9de  8d4610               lea eax, [esi + 0x10]
// 0089e9e1  50                   push eax
// 0089e9e2  893e                 mov dword ptr [esi], edi
// 0089e9e4  897e04               mov dword ptr [esi + 4], edi
// 0089e9e7  897e08               mov dword ptr [esi + 8], edi
// 0089e9ea  897e0c               mov dword ptr [esi + 0xc], edi
// 0089e9ed  ff15ac19a400         call dword ptr [0xa419ac]
// 0089e9f3  897e20               mov dword ptr [esi + 0x20], edi
// 0089e9f6  5f                   pop edi
// 0089e9f7  8bc6                 mov eax, esi
// 0089e9f9  5e                   pop esi
// 0089e9fa  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CAnimateInfo@CXTPCommandBarAnimation@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
