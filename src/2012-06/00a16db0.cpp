// from server: 100% by auto
// roc 2012-06 00a16db0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16db0
//
// 00a16db0  56                   push esi
// 00a16db1  8bf1                 mov esi, ecx
// 00a16db3  57                   push edi
// 00a16db4  8d4e24               lea ecx, [esi + 0x24]
// 00a16db7  e834ffffff           call 0xa16cf0
// 00a16dbc  33ff                 xor edi, edi
// 00a16dbe  8d4610               lea eax, [esi + 0x10]
// 00a16dc1  50                   push eax
// 00a16dc2  893e                 mov dword ptr [esi], edi
// 00a16dc4  897e04               mov dword ptr [esi + 4], edi
// 00a16dc7  897e08               mov dword ptr [esi + 8], edi
// 00a16dca  897e0c               mov dword ptr [esi + 0xc], edi
// 00a16dcd  ff15903ab200         call dword ptr [0xb23a90]
// 00a16dd3  897e20               mov dword ptr [esi + 0x20], edi
// 00a16dd6  5f                   pop edi
// 00a16dd7  8bc6                 mov eax, esi
// 00a16dd9  5e                   pop esi
// 00a16dda  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CAnimateInfo@CXTPCommandBarAnimation@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
