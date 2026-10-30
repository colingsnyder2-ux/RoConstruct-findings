// from server: 100% by auto
// roc 2012-06 00a16e00  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16e00
//
// 00a16e00  56                   push esi
// 00a16e01  8bf1                 mov esi, ecx
// 00a16e03  57                   push edi
// 00a16e04  33ff                 xor edi, edi
// 00a16e06  8d4e1c               lea ecx, [esi + 0x1c]
// 00a16e09  897e08               mov dword ptr [esi + 8], edi
// 00a16e0c  c74604506cb400       mov dword ptr [esi + 4], 0xb46c50
// 00a16e13  e818ffffff           call 0xa16d30
// 00a16e18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a16e1c  897e0c               mov dword ptr [esi + 0xc], edi
// 00a16e1f  897e10               mov dword ptr [esi + 0x10], edi
// 00a16e22  897e14               mov dword ptr [esi + 0x14], edi
// 00a16e25  897e18               mov dword ptr [esi + 0x18], edi
// 00a16e28  8906                 mov dword ptr [esi], eax
// 00a16e2a  5f                   pop edi
// 00a16e2b  8bc6                 mov eax, esi
// 00a16e2d  5e                   pop esi
// 00a16e2e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CXTPCommandBarAnimation@@QAE@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
