// roc 2008-06 00566ab0  unit: RBX::VSelection::?$FactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566ab0
//
// 00566ab0  83ec10               sub esp, 0x10
// 00566ab3  53                   push ebx
// 00566ab4  56                   push esi
// 00566ab5  8bf1                 mov esi, ecx
// 00566ab7  8b4614               mov eax, dword ptr [esi + 0x14]
// 00566aba  2b4610               sub eax, dword ptr [esi + 0x10]
// 00566abd  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00566ac0  c1f802               sar eax, 2
// 00566ac3  33c9                 xor ecx, ecx
// 00566ac5  89542414             mov dword ptr [esp + 0x14], edx
// 00566ac9  8d54240c             lea edx, [esp + 0xc]
// 00566acd  57                   push edi
// 00566ace  894c2410             mov dword ptr [esp + 0x10], ecx
// 00566ad2  89442414             mov dword ptr [esp + 0x14], eax
// 00566ad6  89561c               mov dword ptr [esi + 0x1c], edx
// 00566ad9  85c0                 test eax, eax
// 00566adb  0f8680000000         jbe 0x566b61
// 00566ae1  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00566ae7  8b4614               mov eax, dword ptr [esi + 0x14]
// 00566aea  2b4610               sub eax, dword ptr [esi + 0x10]
// 00566aed  8bf9                 mov edi, ecx
// 00566aef  c1f802               sar eax, 2
// 00566af2  3bc8                 cmp ecx, eax
// 00566af4  7202                 jb 0x566af8
// 00566af6  ffd3                 call ebx
// 00566af8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00566afb  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 00566afe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00566b02  50                   push eax
// 00566b03  83ec10               sub esp, 0x10
// 00566b06  8bc4                 mov eax, esp
// 00566b08  8910                 mov dword ptr [eax], edx
// 00566b0a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00566b0e  894804               mov dword ptr [eax + 4], ecx
// 00566b11  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00566b15  89642420             mov dword ptr [esp + 0x20], esp
// 00566b19  85c9                 test ecx, ecx
// 00566b1b  740c                 je 0x566b29
// 00566b1d  83c104               add ecx, 4
// 00566b20  ba01000000           mov edx, 1
// 00566b25  f00fc111             lock xadd dword ptr [ecx], edx
// 00566b29  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00566b2d  894808               mov dword ptr [eax + 8], ecx
// 00566b30  8b542440             mov edx, dword ptr [esp + 0x40]
// 00566b34  89500c               mov dword ptr [eax + 0xc], edx
// 00566b37  8b442440             mov eax, dword ptr [esp + 0x40]
// 00566b3b  85c0                 test eax, eax
// 00566b3d  740c                 je 0x566b4b
// 00566b3f  83c004               add eax, 4
// 00566b42  b901000000           mov ecx, 1
// 00566b47  f00fc108             lock xadd dword ptr [eax], ecx
// 00566b4b  8bce                 mov ecx, esi
// 00566b4d  e80efeffff           call 0x566960
// 00566b52  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00566b56  41                   inc ecx
// 00566b57  894c2410             mov dword ptr [esp + 0x10], ecx
// 00566b5b  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00566b5f  7286                 jb 0x566ae7
// 00566b61  8b542418             mov edx, dword ptr [esp + 0x18]
// 00566b65  8d4c2420             lea ecx, [esp + 0x20]
// 00566b69  89561c               mov dword ptr [esi + 0x1c], edx
// 00566b6c  e8efc0ebff           call 0x422c60
// 00566b71  5f                   pop edi
// 00566b72  5e                   pop esi
// 00566b73  5b                   pop ebx
// 00566b74  83c410               add esp, 0x10
// 00566b77  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
