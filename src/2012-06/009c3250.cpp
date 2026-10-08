// from server: 100% by auto
// roc 2012-06 009c3250  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c3250
//
// 009c3250  56                   push esi
// 009c3251  8bf1                 mov esi, ecx
// 009c3253  83c8ff               or eax, 0xffffffff
// 009c3256  57                   push edi
// 009c3257  33ff                 xor edi, edi
// 009c3259  894610               mov dword ptr [esi + 0x10], eax
// 009c325c  89460c               mov dword ptr [esi + 0xc], eax
// 009c325f  8d461c               lea eax, [esi + 0x1c]
// 009c3262  50                   push eax
// 009c3263  893e                 mov dword ptr [esi], edi
// 009c3265  897e08               mov dword ptr [esi + 8], edi
// 009c3268  897e04               mov dword ptr [esi + 4], edi
// 009c326b  897e38               mov dword ptr [esi + 0x38], edi
// 009c326e  c74614ff7f0000       mov dword ptr [esi + 0x14], 0x7fff
// 009c3275  897e18               mov dword ptr [esi + 0x18], edi
// 009c3278  ff15903ab200         call dword ptr [0xb23a90]
// 009c327e  33c0                 xor eax, eax
// 009c3280  894630               mov dword ptr [esi + 0x30], eax
// 009c3283  b8c8000000           mov eax, 0xc8
// 009c3288  33c9                 xor ecx, ecx
// 009c328a  894e34               mov dword ptr [esi + 0x34], ecx
// 009c328d  8bc8                 mov ecx, eax
// 009c328f  897e2c               mov dword ptr [esi + 0x2c], edi
// 009c3292  897e3c               mov dword ptr [esi + 0x3c], edi
// 009c3295  894640               mov dword ptr [esi + 0x40], eax
// 009c3298  894648               mov dword ptr [esi + 0x48], eax
// 009c329b  5f                   pop edi
// 009c329c  894e44               mov dword ptr [esi + 0x44], ecx
// 009c329f  894e4c               mov dword ptr [esi + 0x4c], ecx
// 009c32a2  8bc6                 mov eax, esi
// 009c32a4  5e                   pop esi
// 009c32a5  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ??0CToolBarInfo@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
