// from server: 100% by auto
// roc 2008-06 006e1c50  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1c50
//
// 006e1c50  56                   push esi
// 006e1c51  8bf1                 mov esi, ecx
// 006e1c53  83c8ff               or eax, 0xffffffff
// 006e1c56  57                   push edi
// 006e1c57  33ff                 xor edi, edi
// 006e1c59  894610               mov dword ptr [esi + 0x10], eax
// 006e1c5c  89460c               mov dword ptr [esi + 0xc], eax
// 006e1c5f  8d461c               lea eax, [esi + 0x1c]
// 006e1c62  50                   push eax
// 006e1c63  893e                 mov dword ptr [esi], edi
// 006e1c65  897e08               mov dword ptr [esi + 8], edi
// 006e1c68  897e04               mov dword ptr [esi + 4], edi
// 006e1c6b  897e38               mov dword ptr [esi + 0x38], edi
// 006e1c6e  c74614ff7f0000       mov dword ptr [esi + 0x14], 0x7fff
// 006e1c75  897e18               mov dword ptr [esi + 0x18], edi
// 006e1c78  ff157c2c8000         call dword ptr [0x802c7c]
// 006e1c7e  33c0                 xor eax, eax
// 006e1c80  894630               mov dword ptr [esi + 0x30], eax
// 006e1c83  b8c8000000           mov eax, 0xc8
// 006e1c88  33c9                 xor ecx, ecx
// 006e1c8a  894e34               mov dword ptr [esi + 0x34], ecx
// 006e1c8d  8bc8                 mov ecx, eax
// 006e1c8f  897e2c               mov dword ptr [esi + 0x2c], edi
// 006e1c92  897e3c               mov dword ptr [esi + 0x3c], edi
// 006e1c95  894640               mov dword ptr [esi + 0x40], eax
// 006e1c98  894648               mov dword ptr [esi + 0x48], eax
// 006e1c9b  5f                   pop edi
// 006e1c9c  894e44               mov dword ptr [esi + 0x44], ecx
// 006e1c9f  894e4c               mov dword ptr [esi + 0x4c], ecx
// 006e1ca2  8bc6                 mov eax, esi
// 006e1ca4  5e                   pop esi
// 006e1ca5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ??0CToolBarInfo@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
