// roc 2012-06 00a19be0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19be0
//
// 00a19be0  8b442404             mov eax, dword ptr [esp + 4]
// 00a19be4  56                   push esi
// 00a19be5  8bf1                 mov esi, ecx
// 00a19be7  57                   push edi
// 00a19be8  8d4e18               lea ecx, [esi + 0x18]
// 00a19beb  33ff                 xor edi, edi
// 00a19bed  51                   push ecx
// 00a19bee  c70698ddc100         mov dword ptr [esi], 0xc1dd98
// 00a19bf4  894604               mov dword ptr [esi + 4], eax
// 00a19bf7  897e14               mov dword ptr [esi + 0x14], edi
// 00a19bfa  ff15903ab200         call dword ptr [0xb23a90]
// 00a19c00  897e28               mov dword ptr [esi + 0x28], edi
// 00a19c03  897e2c               mov dword ptr [esi + 0x2c], edi
// 00a19c06  897e08               mov dword ptr [esi + 8], edi
// 00a19c09  5f                   pop edi
// 00a19c0a  8bc6                 mov eax, esi
// 00a19c0c  5e                   pop esi
// 00a19c0d  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ??0CXTPDockContext@@QAE@PAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp
