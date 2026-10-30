// roc 2010-06 007c58d0  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c58d0
//
// 007c58d0  8b442404             mov eax, dword ptr [esp + 4]
// 007c58d4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007c58d8  56                   push esi
// 007c58d9  8bf1                 mov esi, ecx
// 007c58db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c58df  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 007c58e5  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c58e9  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 007c58ef  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 007c58f5  8bce                 mov ecx, esi
// 007c58f7  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007c58fd  e8aefaffff           call 0x7c53b0
// 007c5902  898684010000         mov dword ptr [esi + 0x184], eax
// 007c5908  5e                   pop esi
// 007c5909  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
