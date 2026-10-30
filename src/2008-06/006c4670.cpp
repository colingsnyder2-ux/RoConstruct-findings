// from server: 100% by auto
// roc 2008-06 006c4670  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4670
//
// 006c4670  8b442404             mov eax, dword ptr [esp + 4]
// 006c4674  56                   push esi
// 006c4675  8bf1                 mov esi, ecx
// 006c4677  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c467b  51                   push ecx
// 006c467c  50                   push eax
// 006c467d  8bce                 mov ecx, esi
// 006c467f  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 006c4685  e866e0ffff           call 0x6c26f0
// 006c468a  85c0                 test eax, eax
// 006c468c  7504                 jne 0x6c4692
// 006c468e  5e                   pop esi
// 006c468f  c20800               ret 8
// 006c4692  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c4698  e883000300           call 0x6f4720
// 006c469d  b801000000           mov eax, 1
// 006c46a2  5e                   pop esi
// 006c46a3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
