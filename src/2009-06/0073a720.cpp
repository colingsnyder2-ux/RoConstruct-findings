// roc 2009-06 0073a720  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a720
//
// 0073a720  8b442404             mov eax, dword ptr [esp + 4]
// 0073a724  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0073a728  56                   push esi
// 0073a729  8bf1                 mov esi, ecx
// 0073a72b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073a72f  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0073a735  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073a739  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0073a73f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 0073a745  8bce                 mov ecx, esi
// 0073a747  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0073a74d  e8defaffff           call 0x73a230
// 0073a752  898684010000         mov dword ptr [esi + 0x184], eax
// 0073a758  5e                   pop esi
// 0073a759  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
