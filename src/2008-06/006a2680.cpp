// roc 2008-06 006a2680  unit: ActiveDocView  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2680
//
// 006a2680  8b442404             mov eax, dword ptr [esp + 4]
// 006a2684  56                   push esi
// 006a2685  8bf1                 mov esi, ecx
// 006a2687  50                   push eax
// 006a2688  8d8ef4000000         lea ecx, [esi + 0xf4]
// 006a268e  ff15b83e8000         call dword ptr [0x803eb8]
// 006a2694  8b16                 mov edx, dword ptr [esi]
// 006a2696  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006a269c  6a01                 push 1
// 006a269e  6a00                 push 0
// 006a26a0  8bce                 mov ecx, esi
// 006a26a2  ffd0                 call eax
// 006a26a4  5e                   pop esi
// 006a26a5  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?SetTitle@CXTPCommandBar@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
