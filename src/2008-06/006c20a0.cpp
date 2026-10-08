// from server: 100% by auto
// roc 2008-06 006c20a0  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c20a0
//
// 006c20a0  8b442408             mov eax, dword ptr [esp + 8]
// 006c20a4  56                   push esi
// 006c20a5  57                   push edi
// 006c20a6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c20aa  50                   push eax
// 006c20ab  57                   push edi
// 006c20ac  8bf1                 mov esi, ecx
// 006c20ae  e8dd2effff           call 0x6b4f90
// 006c20b3  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 006c20b9  898e88010000         mov dword ptr [esi + 0x188], ecx
// 006c20bf  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 006c20c5  89968c010000         mov dword ptr [esi + 0x18c], edx
// 006c20cb  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 006c20d1  5f                   pop edi
// 006c20d2  898634010000         mov dword ptr [esi + 0x134], eax
// 006c20d8  5e                   pop esi
// 006c20d9  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
