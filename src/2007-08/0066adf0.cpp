// from server: 100% by auto
// roc 2007-08 0066adf0  unit: CXTPToolBar::CControlButtonExpand  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066adf0
//
// 0066adf0  56                   push esi
// 0066adf1  8bf1                 mov esi, ecx
// 0066adf3  83c8ff               or eax, 0xffffffff
// 0066adf6  57                   push edi
// 0066adf7  33ff                 xor edi, edi
// 0066adf9  894610               mov dword ptr [esi + 0x10], eax
// 0066adfc  89460c               mov dword ptr [esi + 0xc], eax
// 0066adff  8d461c               lea eax, [esi + 0x1c]
// 0066ae02  50                   push eax
// 0066ae03  893e                 mov dword ptr [esi], edi
// 0066ae05  897e08               mov dword ptr [esi + 8], edi
// 0066ae08  897e04               mov dword ptr [esi + 4], edi
// 0066ae0b  897e38               mov dword ptr [esi + 0x38], edi
// 0066ae0e  c74614ff7f0000       mov dword ptr [esi + 0x14], 0x7fff
// 0066ae15  897e18               mov dword ptr [esi + 0x18], edi
// 0066ae18  ff1514ee7700         call dword ptr [0x77ee14]
// 0066ae1e  33c0                 xor eax, eax
// 0066ae20  894630               mov dword ptr [esi + 0x30], eax
// 0066ae23  b8c8000000           mov eax, 0xc8
// 0066ae28  33c9                 xor ecx, ecx
// 0066ae2a  894e34               mov dword ptr [esi + 0x34], ecx
// 0066ae2d  8bc8                 mov ecx, eax
// 0066ae2f  897e2c               mov dword ptr [esi + 0x2c], edi
// 0066ae32  897e3c               mov dword ptr [esi + 0x3c], edi
// 0066ae35  894640               mov dword ptr [esi + 0x40], eax
// 0066ae38  894648               mov dword ptr [esi + 0x48], eax
// 0066ae3b  5f                   pop edi
// 0066ae3c  894e44               mov dword ptr [esi + 0x44], ecx
// 0066ae3f  894e4c               mov dword ptr [esi + 0x4c], ecx
// 0066ae42  8bc6                 mov eax, esi
// 0066ae44  5e                   pop esi
// 0066ae45  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ??0CToolBarInfo@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
