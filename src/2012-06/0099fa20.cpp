// roc 2012-06 0099fa20  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099fa20
//
// 0099fa20  8b442404             mov eax, dword ptr [esp + 4]
// 0099fa24  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0099fa28  56                   push esi
// 0099fa29  8bf1                 mov esi, ecx
// 0099fa2b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0099fa2f  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0099fa35  8b442414             mov eax, dword ptr [esp + 0x14]
// 0099fa39  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0099fa3f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 0099fa45  8bce                 mov ecx, esi
// 0099fa47  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0099fa4d  e8cefaffff           call 0x99f520
// 0099fa52  898684010000         mov dword ptr [esi + 0x184], eax
// 0099fa58  5e                   pop esi
// 0099fa59  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
