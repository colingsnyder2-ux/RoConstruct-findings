// roc 2011-06 0084ad40  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ad40
//
// 0084ad40  56                   push esi
// 0084ad41  8bf1                 mov esi, ecx
// 0084ad43  83c8ff               or eax, 0xffffffff
// 0084ad46  57                   push edi
// 0084ad47  33ff                 xor edi, edi
// 0084ad49  894610               mov dword ptr [esi + 0x10], eax
// 0084ad4c  89460c               mov dword ptr [esi + 0xc], eax
// 0084ad4f  8d461c               lea eax, [esi + 0x1c]
// 0084ad52  50                   push eax
// 0084ad53  893e                 mov dword ptr [esi], edi
// 0084ad55  897e08               mov dword ptr [esi + 8], edi
// 0084ad58  897e04               mov dword ptr [esi + 4], edi
// 0084ad5b  897e38               mov dword ptr [esi + 0x38], edi
// 0084ad5e  c74614ff7f0000       mov dword ptr [esi + 0x14], 0x7fff
// 0084ad65  897e18               mov dword ptr [esi + 0x18], edi
// 0084ad68  ff15ac19a400         call dword ptr [0xa419ac]
// 0084ad6e  33c0                 xor eax, eax
// 0084ad70  894630               mov dword ptr [esi + 0x30], eax
// 0084ad73  b8c8000000           mov eax, 0xc8
// 0084ad78  33c9                 xor ecx, ecx
// 0084ad7a  894e34               mov dword ptr [esi + 0x34], ecx
// 0084ad7d  8bc8                 mov ecx, eax
// 0084ad7f  897e2c               mov dword ptr [esi + 0x2c], edi
// 0084ad82  897e3c               mov dword ptr [esi + 0x3c], edi
// 0084ad85  894640               mov dword ptr [esi + 0x40], eax
// 0084ad88  894648               mov dword ptr [esi + 0x48], eax
// 0084ad8b  5f                   pop edi
// 0084ad8c  894e44               mov dword ptr [esi + 0x44], ecx
// 0084ad8f  894e4c               mov dword ptr [esi + 0x4c], ecx
// 0084ad92  8bc6                 mov eax, esi
// 0084ad94  5e                   pop esi
// 0084ad95  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ??0CToolBarInfo@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
