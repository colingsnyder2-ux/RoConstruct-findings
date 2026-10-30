// from server: 100% by auto
// roc 2012-06 009ca060  unit: ATL::CRegObject  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca060
//
// 009ca060  56                   push esi
// 009ca061  8bf1                 mov esi, ecx
// 009ca063  8b4608               mov eax, dword ptr [esi + 8]
// 009ca066  57                   push edi
// 009ca067  85c0                 test eax, eax
// 009ca069  741d                 je 0x9ca088
// 009ca06b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ca06f  6a00                 push 0
// 009ca071  51                   push ecx
// 009ca072  ffd0                 call eax
// 009ca074  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca078  50                   push eax
// 009ca079  57                   push edi
// 009ca07a  8bce                 mov ecx, esi
// 009ca07c  e8affeffff           call 0x9c9f30
// 009ca081  8bc7                 mov eax, edi
// 009ca083  5f                   pop edi
// 009ca084  5e                   pop esi
// 009ca085  c20800               ret 8
// 009ca088  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca08c  33c0                 xor eax, eax
// 009ca08e  50                   push eax
// 009ca08f  57                   push edi
// 009ca090  8bce                 mov ecx, esi
// 009ca092  e899feffff           call 0x9c9f30
// 009ca097  8bc7                 mov eax, edi
// 009ca099  5f                   pop edi
// 009ca09a  5e                   pop esi
// 009ca09b  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
