// roc 2010-06 007c5760  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5760
//
// 007c5760  8b442408             mov eax, dword ptr [esp + 8]
// 007c5764  56                   push esi
// 007c5765  57                   push edi
// 007c5766  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007c576a  50                   push eax
// 007c576b  57                   push edi
// 007c576c  8bf1                 mov esi, ecx
// 007c576e  e8dd2fffff           call 0x7b8750
// 007c5773  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 007c5779  898e88010000         mov dword ptr [esi + 0x188], ecx
// 007c577f  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 007c5785  89968c010000         mov dword ptr [esi + 0x18c], edx
// 007c578b  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 007c5791  5f                   pop edi
// 007c5792  898634010000         mov dword ptr [esi + 0x134], eax
// 007c5798  5e                   pop esi
// 007c5799  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
