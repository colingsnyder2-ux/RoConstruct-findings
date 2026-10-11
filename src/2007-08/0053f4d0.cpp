// roc 2007-08 0053f4d0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f4d0
//
// 0053f4d0  83ec10               sub esp, 0x10
// 0053f4d3  53                   push ebx
// 0053f4d4  56                   push esi
// 0053f4d5  8bf1                 mov esi, ecx
// 0053f4d7  8b5608               mov edx, dword ptr [esi + 8]
// 0053f4da  33c9                 xor ecx, ecx
// 0053f4dc  85d2                 test edx, edx
// 0053f4de  57                   push edi
// 0053f4df  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053f4e3  7504                 jne 0x53f4e9
// 0053f4e5  33c0                 xor eax, eax
// 0053f4e7  eb08                 jmp 0x53f4f1
// 0053f4e9  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f4ec  2bc2                 sub eax, edx
// 0053f4ee  c1f802               sar eax, 2
// 0053f4f1  85c0                 test eax, eax
// 0053f4f3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0053f4f6  89542418             mov dword ptr [esp + 0x18], edx
// 0053f4fa  8d542410             lea edx, [esp + 0x10]
// 0053f4fe  89442414             mov dword ptr [esp + 0x14], eax
// 0053f502  895614               mov dword ptr [esi + 0x14], edx
// 0053f505  0f868c000000         jbe 0x53f597
// 0053f50b  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0053f511  8b5608               mov edx, dword ptr [esi + 8]
// 0053f514  85d2                 test edx, edx
// 0053f516  8bf9                 mov edi, ecx
// 0053f518  740c                 je 0x53f526
// 0053f51a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053f51d  2bc2                 sub eax, edx
// 0053f51f  c1f802               sar eax, 2
// 0053f522  3bc8                 cmp ecx, eax
// 0053f524  7202                 jb 0x53f528
// 0053f526  ffd3                 call ebx
// 0053f528  8b4608               mov eax, dword ptr [esi + 8]
// 0053f52b  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053f52e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053f532  50                   push eax
// 0053f533  83ec10               sub esp, 0x10
// 0053f536  8bc4                 mov eax, esp
// 0053f538  8908                 mov dword ptr [eax], ecx
// 0053f53a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053f53e  895004               mov dword ptr [eax + 4], edx
// 0053f541  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053f545  85c9                 test ecx, ecx
// 0053f547  89642420             mov dword ptr [esp + 0x20], esp
// 0053f54b  740c                 je 0x53f559
// 0053f54d  83c104               add ecx, 4
// 0053f550  ba01000000           mov edx, 1
// 0053f555  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f559  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053f55d  894808               mov dword ptr [eax + 8], ecx
// 0053f560  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053f564  89500c               mov dword ptr [eax + 0xc], edx
// 0053f567  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053f56b  85c0                 test eax, eax
// 0053f56d  740c                 je 0x53f57b
// 0053f56f  83c004               add eax, 4
// 0053f572  b901000000           mov ecx, 1
// 0053f577  f00fc108             lock xadd dword ptr [eax], ecx
// 0053f57b  8bce                 mov ecx, esi
// 0053f57d  e81ef5ffff           call 0x53eaa0
// 0053f582  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053f586  83c101               add ecx, 1
// 0053f589  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0053f58d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053f591  0f827affffff         jb 0x53f511
// 0053f597  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053f59b  8d4c2420             lea ecx, [esp + 0x20]
// 0053f59f  895614               mov dword ptr [esi + 0x14], edx
// 0053f5a2  e859e4edff           call 0x41da00
// 0053f5a7  5f                   pop edi
// 0053f5a8  5e                   pop esi
// 0053f5a9  5b                   pop ebx
// 0053f5aa  83c410               add esp, 0x10
// 0053f5ad  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
