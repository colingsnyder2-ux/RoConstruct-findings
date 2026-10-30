// roc 2010-06 00809700  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809700
//
// 00809700  56                   push esi
// 00809701  8bf1                 mov esi, ecx
// 00809703  8b06                 mov eax, dword ptr [esi]
// 00809705  8b5048               mov edx, dword ptr [eax + 0x48]
// 00809708  ffd2                 call edx
// 0080970a  83f802               cmp eax, 2
// 0080970d  740d                 je 0x80971c
// 0080970f  8b06                 mov eax, dword ptr [esi]
// 00809711  8b5048               mov edx, dword ptr [eax + 0x48]
// 00809714  8bce                 mov ecx, esi
// 00809716  ffd2                 call edx
// 00809718  85c0                 test eax, eax
// 0080971a  750c                 jne 0x809728
// 0080971c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00809720  2b442408             sub eax, dword ptr [esp + 8]
// 00809724  5e                   pop esi
// 00809725  c21000               ret 0x10
// 00809728  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080972c  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00809730  5e                   pop esi
// 00809731  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
