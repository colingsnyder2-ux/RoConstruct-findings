// roc 2009-12 008c0300  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0300
//
// 008c0300  56                   push esi
// 008c0301  8b742408             mov esi, dword ptr [esp + 8]
// 008c0305  57                   push edi
// 008c0306  8bf9                 mov edi, ecx
// 008c0308  85f6                 test esi, esi
// 008c030a  740f                 je 0x8c031b
// 008c030c  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c0310  7409                 je 0x8c031b
// 008c0312  6a00                 push 0
// 008c0314  8bce                 mov ecx, esi
// 008c0316  e82d38f3ff           call 0x7f3b48
// 008c031b  6a00                 push 0
// 008c031d  83c704               add edi, 4
// 008c0320  56                   push esi
// 008c0321  8bcf                 mov ecx, edi
// 008c0323  c7466800000000       mov dword ptr [esi + 0x68], 0
// 008c032a  e841ffffff           call 0x8c0270
// 008c032f  50                   push eax
// 008c0330  8bcf                 mov ecx, edi
// 008c0332  e839320200           call 0x8e3570
// 008c0337  8b06                 mov eax, dword ptr [esi]
// 008c0339  8b5068               mov edx, dword ptr [eax + 0x68]
// 008c033c  8bce                 mov ecx, esi
// 008c033e  ffd2                 call edx
// 008c0340  8b06                 mov eax, dword ptr [esi]
// 008c0342  8b5004               mov edx, dword ptr [eax + 4]
// 008c0345  6a01                 push 1
// 008c0347  8bce                 mov ecx, esi
// 008c0349  ffd2                 call edx
// 008c034b  5f                   pop edi
// 008c034c  5e                   pop esi
// 008c034d  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTPShadowsManager@@AAEXPAVCShadowWnd@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp