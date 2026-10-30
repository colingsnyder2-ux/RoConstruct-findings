// from server: 100% by auto
// roc 2007-08 006c9050  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9050
//
// 006c9050  56                   push esi
// 006c9051  8bf1                 mov esi, ecx
// 006c9053  57                   push edi
// 006c9054  8d4e24               lea ecx, [esi + 0x24]
// 006c9057  e834ffffff           call 0x6c8f90
// 006c905c  33ff                 xor edi, edi
// 006c905e  8d4610               lea eax, [esi + 0x10]
// 006c9061  50                   push eax
// 006c9062  893e                 mov dword ptr [esi], edi
// 006c9064  897e04               mov dword ptr [esi + 4], edi
// 006c9067  897e08               mov dword ptr [esi + 8], edi
// 006c906a  897e0c               mov dword ptr [esi + 0xc], edi
// 006c906d  ff1514ee7700         call dword ptr [0x77ee14]
// 006c9073  897e20               mov dword ptr [esi + 0x20], edi
// 006c9076  5f                   pop edi
// 006c9077  8bc6                 mov eax, esi
// 006c9079  5e                   pop esi
// 006c907a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CAnimateInfo@CXTPCommandBarAnimation@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
