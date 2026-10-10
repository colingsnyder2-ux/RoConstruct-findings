// roc 2008-06 00728740  unit: RBX::KeyboardPrimaryController  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728740
//
// 00728740  83ec20               sub esp, 0x20
// 00728743  56                   push esi
// 00728744  8b742428             mov esi, dword ptr [esp + 0x28]
// 00728748  85f6                 test esi, esi
// 0072874a  745d                 je 0x7287a9
// 0072874c  8b06                 mov eax, dword ptr [esi]
// 0072874e  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00728754  8bce                 mov ecx, esi
// 00728756  ffd2                 call edx
// 00728758  85c0                 test eax, eax
// 0072875a  744d                 je 0x7287a9
// 0072875c  8bce                 mov ecx, esi
// 0072875e  e8ada0ffff           call 0x722810
// 00728763  85c0                 test eax, eax
// 00728765  7442                 je 0x7287a9
// 00728767  8b8e00020000         mov ecx, dword ptr [esi + 0x200]
// 0072876d  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 00728773  8b9604020000         mov edx, dword ptr [esi + 0x204]
// 00728779  89442404             mov dword ptr [esp + 4], eax
// 0072877d  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 00728783  894c2408             mov dword ptr [esp + 8], ecx
// 00728787  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072878b  8954240c             mov dword ptr [esp + 0xc], edx
// 0072878f  51                   push ecx
// 00728790  8d542408             lea edx, [esp + 8]
// 00728794  89442414             mov dword ptr [esp + 0x14], eax
// 00728798  52                   push edx
// 00728799  8d44241c             lea eax, [esp + 0x1c]
// 0072879d  50                   push eax
// 0072879e  ff155c2b8000         call dword ptr [0x802b5c]
// 007287a4  5e                   pop esi
// 007287a5  83c420               add esp, 0x20
// 007287a8  c3                   ret 
// 007287a9  33c0                 xor eax, eax
// 007287ab  5e                   pop esi
// 007287ac  83c420               add esp, 0x20
// 007287af  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?IsCompositeRect@@YAHPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
