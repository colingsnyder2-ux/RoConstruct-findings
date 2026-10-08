// roc 2011-06 00827400  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00827400
//
// 00827400  8b442404             mov eax, dword ptr [esp + 4]
// 00827404  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00827408  56                   push esi
// 00827409  8bf1                 mov esi, ecx
// 0082740b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082740f  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00827415  8b442414             mov eax, dword ptr [esp + 0x14]
// 00827419  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0082741f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 00827425  8bce                 mov ecx, esi
// 00827427  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0082742d  e8cefaffff           call 0x826f00
// 00827432  898684010000         mov dword ptr [esi + 0x184], eax
// 00827438  5e                   pop esi
// 00827439  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
