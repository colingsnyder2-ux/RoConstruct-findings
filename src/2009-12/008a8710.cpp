// roc 2009-12 008a8710  unit: PAVCXTPDockingPaneBase::?$CMap  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8710
//
// 008a8710  55                   push ebp
// 008a8711  56                   push esi
// 008a8712  57                   push edi
// 008a8713  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008a8717  57                   push edi
// 008a8718  8bf1                 mov esi, ecx
// 008a871a  e891f7ffff           call 0x8a7eb0
// 008a871f  8be8                 mov ebp, eax
// 008a8721  85ed                 test ebp, ebp
// 008a8723  7c05                 jl 0x8a872a
// 008a8725  83fd04               cmp ebp, 4
// 008a8728  7c02                 jl 0x8a872c
// 008a872a  33ed                 xor ebp, ebp
// 008a872c  837cae6000           cmp dword ptr [esi + ebp*4 + 0x60], 0
// 008a8731  7528                 jne 0x8a875b
// 008a8733  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a8739  8b01                 mov eax, dword ptr [ecx]
// 008a873b  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008a8741  56                   push esi
// 008a8742  6a05                 push 5
// 008a8744  ffd2                 call edx
// 008a8746  85c0                 test eax, eax
// 008a8748  7405                 je 0x8a874f
// 008a874a  83c0ac               add eax, -0x54
// 008a874d  eb02                 jmp 0x8a8751
// 008a874f  33c0                 xor eax, eax
// 008a8751  8944ae60             mov dword ptr [esi + ebp*4 + 0x60], eax
// 008a8755  89a8ac000000         mov dword ptr [eax + 0xac], ebp
// 008a875b  8b44ae60             mov eax, dword ptr [esi + ebp*4 + 0x60]
// 008a875f  57                   push edi
// 008a8760  50                   push eax
// 008a8761  8bce                 mov ecx, esi
// 008a8763  e878feffff           call 0x8a85e0
// 008a8768  85c0                 test eax, eax
// 008a876a  757b                 jne 0x8a87e7
// 008a876c  8b4718               mov eax, dword ptr [edi + 0x18]
// 008a876f  53                   push ebx
// 008a8770  85c0                 test eax, eax
// 008a8772  754e                 jne 0x8a87c2
// 008a8774  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 008a8777  8b11                 mov edx, dword ptr [ecx]
// 008a8779  8b4248               mov eax, dword ptr [edx + 0x48]
// 008a877c  57                   push edi
// 008a877d  ffd0                 call eax
// 008a877f  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a8785  8b11                 mov edx, dword ptr [ecx]
// 008a8787  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008a878d  56                   push esi
// 008a878e  6a01                 push 1
// 008a8790  ffd0                 call eax
// 008a8792  85c0                 test eax, eax
// 008a8794  7405                 je 0x8a879b
// 008a8796  8d58ac               lea ebx, [eax - 0x54]
// 008a8799  eb02                 jmp 0x8a879d
// 008a879b  33db                 xor ebx, ebx
// 008a879d  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a87a3  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 008a87a9  8d47e0               lea eax, [edi - 0x20]
// 008a87ac  52                   push edx
// 008a87ad  50                   push eax
// 008a87ae  8bcb                 mov ecx, ebx
// 008a87b0  e87bb00000           call 0x8b3830
// 008a87b5  85db                 test ebx, ebx
// 008a87b7  7405                 je 0x8a87be
// 008a87b9  8d7b54               lea edi, [ebx + 0x54]
// 008a87bc  eb19                 jmp 0x8a87d7
// 008a87be  33ff                 xor edi, edi
// 008a87c0  eb15                 jmp 0x8a87d7
// 008a87c2  83f801               cmp eax, 1
// 008a87c5  7510                 jne 0x8a87d7
// 008a87c7  8b07                 mov eax, dword ptr [edi]
// 008a87c9  8b5044               mov edx, dword ptr [eax + 0x44]
// 008a87cc  6a02                 push 2
// 008a87ce  6a00                 push 0
// 008a87d0  56                   push esi
// 008a87d1  8bcf                 mov ecx, edi
// 008a87d3  ffd2                 call edx
// 008a87d5  8bf8                 mov edi, eax
// 008a87d7  8b4cae60             mov ecx, dword ptr [esi + ebp*4 + 0x60]
// 008a87db  8b01                 mov eax, dword ptr [ecx]
// 008a87dd  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008a87e3  57                   push edi
// 008a87e4  ffd2                 call edx
// 008a87e6  5b                   pop ebx
// 008a87e7  5f                   pop edi
// 008a87e8  5e                   pop esi
// 008a87e9  5d                   pop ebp
// 008a87ea  c20400               ret 4
// copied from an identical function in another client (function ?HidePane@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneLayout.cpp