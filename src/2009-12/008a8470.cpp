// roc 2009-12 008a8470  unit: PAVCXTPDockingPaneBase::?$CMap  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8470
//
// 008a8470  6aff                 push -1
// 008a8472  683e289600           push 0x96283e
// 008a8477  64a100000000         mov eax, dword ptr fs:[0]
// 008a847d  50                   push eax
// 008a847e  51                   push ecx
// 008a847f  56                   push esi
// 008a8480  a10052b600           mov eax, dword ptr [0xb65200]
// 008a8485  33c4                 xor eax, esp
// 008a8487  50                   push eax
// 008a8488  8d44240c             lea eax, [esp + 0xc]
// 008a848c  64a300000000         mov dword ptr fs:[0], eax
// 008a8492  8bf1                 mov esi, ecx
// 008a8494  89742408             mov dword ptr [esp + 8], esi
// 008a8498  e8a5df0700           call 0x926442
// 008a849d  6a0a                 push 0xa
// 008a849f  8d4e28               lea ecx, [esi + 0x28]
// 008a84a2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a84aa  c7064463a000         mov dword ptr [esi], 0xa06344
// 008a84b0  e85bfeffff           call 0x8a8310
// 008a84b5  6a0a                 push 0xa
// 008a84b7  8d4e44               lea ecx, [esi + 0x44]
// 008a84ba  e80112f9ff           call 0x8396c0
// 008a84bf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a84c3  898684000000         mov dword ptr [esi + 0x84], eax
// 008a84c9  33c0                 xor eax, eax
// 008a84cb  c7868000000001000000 mov dword ptr [esi + 0x80], 1
// 008a84d5  894660               mov dword ptr [esi + 0x60], eax
// 008a84d8  894664               mov dword ptr [esi + 0x64], eax
// 008a84db  894668               mov dword ptr [esi + 0x68], eax
// 008a84de  89466c               mov dword ptr [esi + 0x6c], eax
// 008a84e1  894670               mov dword ptr [esi + 0x70], eax
// 008a84e4  894674               mov dword ptr [esi + 0x74], eax
// 008a84e7  894678               mov dword ptr [esi + 0x78], eax
// 008a84ea  89467c               mov dword ptr [esi + 0x7c], eax
// 008a84ed  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a84f3  8b11                 mov edx, dword ptr [ecx]
// 008a84f5  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008a84fb  56                   push esi
// 008a84fc  6a04                 push 4
// 008a84fe  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008a8503  ffd0                 call eax
// 008a8505  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a850b  894624               mov dword ptr [esi + 0x24], eax
// 008a850e  8b11                 mov edx, dword ptr [ecx]
// 008a8510  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008a8516  56                   push esi
// 008a8517  6a02                 push 2
// 008a8519  ffd0                 call eax
// 008a851b  85c0                 test eax, eax
// 008a851d  7405                 je 0x8a8524
// 008a851f  8d48e0               lea ecx, [eax - 0x20]
// 008a8522  eb02                 jmp 0x8a8526
// 008a8524  33c9                 xor ecx, ecx
// 008a8526  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 008a852c  894e20               mov dword ptr [esi + 0x20], ecx
// 008a852f  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 008a8535  8b5624               mov edx, dword ptr [esi + 0x24]
// 008a8538  50                   push eax
// 008a8539  6a01                 push 1
// 008a853b  52                   push edx
// 008a853c  e8afd00000           call 0x8b55f0
// 008a8541  8bc6                 mov eax, esi
// 008a8543  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a8547  64890d00000000       mov dword ptr fs:[0], ecx
// 008a854e  59                   pop ecx
// 008a854f  5e                   pop esi
// 008a8550  83c410               add esp, 0x10
// 008a8553  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPaneLayout@@QAE@PAVCXTPDockingPaneManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp