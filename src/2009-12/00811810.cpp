// roc 2009-12 00811810  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811810
//
// 00811810  8b442404             mov eax, dword ptr [esp + 4]
// 00811814  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00811818  56                   push esi
// 00811819  8bf1                 mov esi, ecx
// 0081181b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081181f  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00811825  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811829  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0081182f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 00811835  8bce                 mov ecx, esi
// 00811837  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0081183d  e8defaffff           call 0x811320
// 00811842  898684010000         mov dword ptr [esi + 0x184], eax
// 00811848  5e                   pop esi
// 00811849  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetRect@CControlButtonExpand@CXTPToolBar@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
