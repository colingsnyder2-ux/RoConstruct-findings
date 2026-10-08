// roc 2009-06 0077a750  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a750
//
// 0077a750  56                   push esi
// 0077a751  8bf1                 mov esi, ecx
// 0077a753  8b06                 mov eax, dword ptr [esi]
// 0077a755  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077a758  ffd2                 call edx
// 0077a75a  83f802               cmp eax, 2
// 0077a75d  740d                 je 0x77a76c
// 0077a75f  8b06                 mov eax, dword ptr [esi]
// 0077a761  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077a764  8bce                 mov ecx, esi
// 0077a766  ffd2                 call edx
// 0077a768  85c0                 test eax, eax
// 0077a76a  750c                 jne 0x77a778
// 0077a76c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077a770  2b442408             sub eax, dword ptr [esp + 8]
// 0077a774  5e                   pop esi
// 0077a775  c21000               ret 0x10
// 0077a778  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077a77c  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0077a780  5e                   pop esi
// 0077a781  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
