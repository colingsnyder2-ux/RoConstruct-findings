// from server: 100% by auto
// roc 2008-06 007458d0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007458d0
//
// 007458d0  8b442404             mov eax, dword ptr [esp + 4]
// 007458d4  56                   push esi
// 007458d5  8bf1                 mov esi, ecx
// 007458d7  57                   push edi
// 007458d8  8d4e18               lea ecx, [esi + 0x18]
// 007458db  33ff                 xor edi, edi
// 007458dd  51                   push ecx
// 007458de  c706383c8600         mov dword ptr [esi], 0x863c38
// 007458e4  894604               mov dword ptr [esi + 4], eax
// 007458e7  897e14               mov dword ptr [esi + 0x14], edi
// 007458ea  ff157c2c8000         call dword ptr [0x802c7c]
// 007458f0  897e28               mov dword ptr [esi + 0x28], edi
// 007458f3  897e2c               mov dword ptr [esi + 0x2c], edi
// 007458f6  897e08               mov dword ptr [esi + 8], edi
// 007458f9  5f                   pop edi
// 007458fa  8bc6                 mov eax, esi
// 007458fc  5e                   pop esi
// 007458fd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ??0CXTPDockContext@@QAE@PAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
