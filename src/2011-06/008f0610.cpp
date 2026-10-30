// roc 2011-06 008f0610  unit: PAVCXTShadowWnd::?$CList  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0610
//
// 008f0610  53                   push ebx
// 008f0611  56                   push esi
// 008f0612  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f0616  57                   push edi
// 008f0617  8bd9                 mov ebx, ecx
// 008f0619  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008f061f  33ff                 xor edi, edi
// 008f0621  3bcf                 cmp ecx, edi
// 008f0623  740f                 je 0x8f0634
// 008f0625  8b01                 mov eax, dword ptr [ecx]
// 008f0627  8b5004               mov edx, dword ptr [eax + 4]
// 008f062a  6a01                 push 1
// 008f062c  ffd2                 call edx
// 008f062e  89be80000000         mov dword ptr [esi + 0x80], edi
// 008f0634  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008f0637  3bcf                 cmp ecx, edi
// 008f0639  740c                 je 0x8f0647
// 008f063b  8b01                 mov eax, dword ptr [ecx]
// 008f063d  8b5004               mov edx, dword ptr [eax + 4]
// 008f0640  6a01                 push 1
// 008f0642  ffd2                 call edx
// 008f0644  897e7c               mov dword ptr [esi + 0x7c], edi
// 008f0647  897e58               mov dword ptr [esi + 0x58], edi
// 008f064a  897e68               mov dword ptr [esi + 0x68], edi
// 008f064d  397e20               cmp dword ptr [esi + 0x20], edi
// 008f0650  7408                 je 0x8f065a
// 008f0652  57                   push edi
// 008f0653  8bce                 mov ecx, esi
// 008f0655  e8ec9cf1ff           call 0x80a346
// 008f065a  56                   push esi
// 008f065b  8bcb                 mov ecx, ebx
// 008f065d  e89efdffff           call 0x8f0400
// 008f0662  56                   push esi
// 008f0663  8d4b1c               lea ecx, [ebx + 0x1c]
// 008f0666  e805ffffff           call 0x8f0570
// 008f066b  5f                   pop edi
// 008f066c  5e                   pop esi
// 008f066d  5b                   pop ebx
// 008f066e  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTShadowsManager@@AAEXPAVCXTShadowWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp