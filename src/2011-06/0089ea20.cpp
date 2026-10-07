// roc 2011-06 0089ea20  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ea20
//
// 0089ea20  56                   push esi
// 0089ea21  8bf1                 mov esi, ecx
// 0089ea23  57                   push edi
// 0089ea24  33ff                 xor edi, edi
// 0089ea26  8d4e1c               lea ecx, [esi + 0x1c]
// 0089ea29  897e08               mov dword ptr [esi + 8], edi
// 0089ea2c  c7460490e7a500       mov dword ptr [esi + 4], 0xa5e790
// 0089ea33  e878feffff           call 0x89e8b0
// 0089ea38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089ea3c  897e0c               mov dword ptr [esi + 0xc], edi
// 0089ea3f  897e10               mov dword ptr [esi + 0x10], edi
// 0089ea42  897e14               mov dword ptr [esi + 0x14], edi
// 0089ea45  897e18               mov dword ptr [esi + 0x18], edi
// 0089ea48  8906                 mov dword ptr [esi], eax
// 0089ea4a  5f                   pop edi
// 0089ea4b  8bc6                 mov eax, esi
// 0089ea4d  5e                   pop esi
// 0089ea4e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ??0CXTPCommandBarAnimation@@QAE@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
