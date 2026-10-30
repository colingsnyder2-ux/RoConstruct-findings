// roc 2009-12 008548c0  unit: CXTPTabManagerAtom  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008548c0
//
// 008548c0  6aff                 push -1
// 008548c2  68484e9600           push 0x964e48
// 008548c7  64a100000000         mov eax, dword ptr fs:[0]
// 008548cd  50                   push eax
// 008548ce  51                   push ecx
// 008548cf  56                   push esi
// 008548d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008548d5  33c4                 xor eax, esp
// 008548d7  50                   push eax
// 008548d8  8d44240c             lea eax, [esp + 0xc]
// 008548dc  64a300000000         mov dword ptr fs:[0], eax
// 008548e2  8bf1                 mov esi, ecx
// 008548e4  89742408             mov dword ptr [esp + 8], esi
// 008548e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008548ec  6a00                 push 0
// 008548ee  6a04                 push 4
// 008548f0  50                   push eax
// 008548f1  e87a9f0700           call 0x8ce870
// 008548f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008548fa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00854902  c706d0c69f00         mov dword ptr [esi], 0x9fc6d0
// 00854908  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0085490f  894e34               mov dword ptr [esi + 0x34], ecx
// 00854912  e8899f0100           call 0x86e8a0
// 00854917  8b10                 mov edx, dword ptr [eax]
// 00854919  8b5208               mov edx, dword ptr [edx + 8]
// 0085491c  68e1230000           push 0x23e1
// 00854921  8d4e28               lea ecx, [esi + 0x28]
// 00854924  51                   push ecx
// 00854925  8bc8                 mov ecx, eax
// 00854927  ffd2                 call edx
// 00854929  8bc6                 mov eax, esi
// 0085492b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085492f  64890d00000000       mov dword ptr fs:[0], ecx
// 00854936  59                   pop ecx
// 00854937  5e                   pop esi
// 00854938  83c410               add esp, 0x10
// 0085493b  c20800               ret 8
// copied from an identical function in another client (function ??0CNavigateButtonActiveFiles@CXTPTabClientWnd@@QAE@PAVCXTPTabManager@@PAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp