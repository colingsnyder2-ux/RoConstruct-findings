// roc 2008-06 006c21f0  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c21f0
//
// 006c21f0  8b442404             mov eax, dword ptr [esp + 4]
// 006c21f4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c21f8  56                   push esi
// 006c21f9  8bf1                 mov esi, ecx
// 006c21fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c21ff  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006c2205  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2209  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 006c220f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 006c2215  8bce                 mov ecx, esi
// 006c2217  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 006c221d  e8cefaffff           call 0x6c1cf0
// 006c2222  898684010000         mov dword ptr [esi + 0x184], eax
// 006c2228  5e                   pop esi
// 006c2229  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
