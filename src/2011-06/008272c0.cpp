// roc 2011-06 008272c0  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008272c0
//
// 008272c0  8b442408             mov eax, dword ptr [esp + 8]
// 008272c4  56                   push esi
// 008272c5  57                   push edi
// 008272c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008272ca  50                   push eax
// 008272cb  57                   push edi
// 008272cc  8bf1                 mov esi, ecx
// 008272ce  e83d39ffff           call 0x81ac10
// 008272d3  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 008272d9  898e88010000         mov dword ptr [esi + 0x188], ecx
// 008272df  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 008272e5  89968c010000         mov dword ptr [esi + 0x18c], edx
// 008272eb  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 008272f1  5f                   pop edi
// 008272f2  898634010000         mov dword ptr [esi + 0x134], eax
// 008272f8  5e                   pop esi
// 008272f9  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
