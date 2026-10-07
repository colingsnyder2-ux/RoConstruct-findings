// roc 2007-08 006c90a0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c90a0
//
// 006c90a0  56                   push esi
// 006c90a1  8bf1                 mov esi, ecx
// 006c90a3  57                   push edi
// 006c90a4  33ff                 xor edi, edi
// 006c90a6  8d4e1c               lea ecx, [esi + 0x1c]
// 006c90a9  897e08               mov dword ptr [esi + 8], edi
// 006c90ac  c7460400837800       mov dword ptr [esi + 4], 0x788300
// 006c90b3  e818ffffff           call 0x6c8fd0
// 006c90b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c90bc  897e0c               mov dword ptr [esi + 0xc], edi
// 006c90bf  897e10               mov dword ptr [esi + 0x10], edi
// 006c90c2  897e14               mov dword ptr [esi + 0x14], edi
// 006c90c5  897e18               mov dword ptr [esi + 0x18], edi
// 006c90c8  8906                 mov dword ptr [esi], eax
// 006c90ca  5f                   pop edi
// 006c90cb  8bc6                 mov eax, esi
// 006c90cd  5e                   pop esi
// 006c90ce  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CXTPCommandBarAnimation@@QAE@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
