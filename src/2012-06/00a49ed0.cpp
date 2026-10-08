// roc 2012-06 00a49ed0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49ed0
//
// 00a49ed0  53                   push ebx
// 00a49ed1  8bd9                 mov ebx, ecx
// 00a49ed3  57                   push edi
// 00a49ed4  8b7b08               mov edi, dword ptr [ebx + 8]
// 00a49ed7  85ff                 test edi, edi
// 00a49ed9  743a                 je 0xa49f15
// 00a49edb  55                   push ebp
// 00a49edc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a49ee0  56                   push esi
// 00a49ee1  8bc7                 mov eax, edi
// 00a49ee3  8b7008               mov esi, dword ptr [eax + 8]
// 00a49ee6  8b4668               mov eax, dword ptr [esi + 0x68]
// 00a49ee9  8b3f                 mov edi, dword ptr [edi]
// 00a49eeb  3be8                 cmp ebp, eax
// 00a49eed  7520                 jne 0xa49f0f
// 00a49eef  8d4e54               lea ecx, [esi + 0x54]
// 00a49ef2  85c0                 test eax, eax
// 00a49ef4  7403                 je 0xa49ef9
// 00a49ef6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a49ef9  51                   push ecx
// 00a49efa  50                   push eax
// 00a49efb  e870c4fcff           call 0xa16370
// 00a49f00  8bc8                 mov ecx, eax
// 00a49f02  e8e9c8fcff           call 0xa167f0
// 00a49f07  56                   push esi
// 00a49f08  8bcb                 mov ecx, ebx
// 00a49f0a  e8e1feffff           call 0xa49df0
// 00a49f0f  85ff                 test edi, edi
// 00a49f11  75ce                 jne 0xa49ee1
// 00a49f13  5e                   pop esi
// 00a49f14  5d                   pop ebp
// 00a49f15  5f                   pop edi
// 00a49f16  5b                   pop ebx
// 00a49f17  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
