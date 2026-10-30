// from server: 100% by auto
// roc 2008-06 00744270  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00744270
//
// 00744270  56                   push esi
// 00744271  8bf1                 mov esi, ecx
// 00744273  57                   push edi
// 00744274  8d4e24               lea ecx, [esi + 0x24]
// 00744277  e834ffffff           call 0x7441b0
// 0074427c  33ff                 xor edi, edi
// 0074427e  8d4610               lea eax, [esi + 0x10]
// 00744281  50                   push eax
// 00744282  893e                 mov dword ptr [esi], edi
// 00744284  897e04               mov dword ptr [esi + 4], edi
// 00744287  897e08               mov dword ptr [esi + 8], edi
// 0074428a  897e0c               mov dword ptr [esi + 0xc], edi
// 0074428d  ff157c2c8000         call dword ptr [0x802c7c]
// 00744293  897e20               mov dword ptr [esi + 0x20], edi
// 00744296  5f                   pop edi
// 00744297  8bc6                 mov eax, esi
// 00744299  5e                   pop esi
// 0074429a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CAnimateInfo@CXTPCommandBarAnimation@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
