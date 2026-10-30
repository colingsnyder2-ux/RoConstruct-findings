// roc 2007-08 00721390  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00721390
//
// 00721390  6aff                 push -1
// 00721392  68e1b47600           push 0x76b4e1
// 00721397  64a100000000         mov eax, dword ptr fs:[0]
// 0072139d  50                   push eax
// 0072139e  83ec2c               sub esp, 0x2c
// 007213a1  53                   push ebx
// 007213a2  55                   push ebp
// 007213a3  56                   push esi
// 007213a4  57                   push edi
// 007213a5  a188518b00           mov eax, dword ptr [0x8b5188]
// 007213aa  33c4                 xor eax, esp
// 007213ac  50                   push eax
// 007213ad  8d442440             lea eax, [esp + 0x40]
// 007213b1  64a300000000         mov dword ptr fs:[0], eax
// 007213b7  8bf1                 mov esi, ecx
// 007213b9  8d4c2414             lea ecx, [esp + 0x14]
// 007213bd  ff15acdd7700         call dword ptr [0x77ddac]
// 007213c3  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 007213c7  8d442414             lea eax, [esp + 0x14]
// 007213cb  50                   push eax
// 007213cc  8bcd                 mov ecx, ebp
// 007213ce  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007213d6  e875eef0ff           call 0x630250
// 007213db  8d4c2414             lea ecx, [esp + 0x14]
// 007213df  ff15d0dc7700         call dword ptr [0x77dcd0]
// 007213e5  84c0                 test al, al
// 007213e7  0f8525010000         jne 0x721512
// 007213ed  e84e0ef6ff           call 0x682240
// 007213f2  8d4c2414             lea ecx, [esp + 0x14]
// 007213f6  51                   push ecx
// 007213f7  e894e0f5ff           call 0x67f490
// 007213fc  8b16                 mov edx, dword ptr [esi]
// 007213fe  8b4220               mov eax, dword ptr [edx + 0x20]
// 00721401  83c404               add esp, 4
// 00721404  55                   push ebp
// 00721405  8bce                 mov ecx, esi
// 00721407  ffd0                 call eax
// 00721409  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0072140d  50                   push eax
// 0072140e  57                   push edi
// 0072140f  8d4c2438             lea ecx, [esp + 0x38]
// 00721413  e838f1f5ff           call 0x680550
// 00721418  8d4c2428             lea ecx, [esp + 0x28]
// 0072141c  51                   push ecx
// 0072141d  8d4c2418             lea ecx, [esp + 0x18]
// 00721421  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00721426  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0072142c  50                   push eax
// 0072142d  8d4c241c             lea ecx, [esp + 0x1c]
// 00721431  ff1598dd7700         call dword ptr [0x77dd98]
// 00721437  8b5708               mov edx, dword ptr [edi + 8]
// 0072143a  50                   push eax
// 0072143b  52                   push edx
// 0072143c  ff15b8d07700         call dword ptr [0x77d0b8]
// 00721442  8b442428             mov eax, dword ptr [esp + 0x28]
// 00721446  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072144a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0072144e  8b16                 mov edx, dword ptr [esi]
// 00721450  8b5244               mov edx, dword ptr [edx + 0x44]
// 00721453  55                   push ebp
// 00721454  89442424             mov dword ptr [esp + 0x24], eax
// 00721458  894c2428             mov dword ptr [esp + 0x28], ecx
// 0072145c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00721460  8d442424             lea eax, [esp + 0x24]
// 00721464  50                   push eax
// 00721465  51                   push ecx
// 00721466  53                   push ebx
// 00721467  8d442428             lea eax, [esp + 0x28]
// 0072146b  50                   push eax
// 0072146c  8bce                 mov ecx, esi
// 0072146e  ffd2                 call edx
// 00721470  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 00721474  7505                 jne 0x72147b
// 00721476  f6c301               test bl, 1
// 00721479  7413                 je 0x72148e
// 0072147b  837e1800             cmp dword ptr [esi + 0x18], 0
// 0072147f  740d                 je 0x72148e
// 00721481  b801000000           mov eax, 1
// 00721486  01442418             add dword ptr [esp + 0x18], eax
// 0072148a  0144241c             add dword ptr [esp + 0x1c], eax
// 0072148e  8b07                 mov eax, dword ptr [edi]
// 00721490  8b16                 mov edx, dword ptr [esi]
// 00721492  55                   push ebp
// 00721493  89442460             mov dword ptr [esp + 0x60], eax
// 00721497  8b4248               mov eax, dword ptr [edx + 0x48]
// 0072149a  53                   push ebx
// 0072149b  8bce                 mov ecx, esi
// 0072149d  ffd0                 call eax
// 0072149f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007214a3  50                   push eax
// 007214a4  8b4238               mov eax, dword ptr [edx + 0x38]
// 007214a7  8bcf                 mov ecx, edi
// 007214a9  ffd0                 call eax
// 007214ab  f7c300010000         test ebx, 0x100
// 007214b1  750c                 jne 0x7214bf
// 007214b3  8d4c2414             lea ecx, [esp + 0x14]
// 007214b7  51                   push ecx
// 007214b8  8bcd                 mov ecx, ebp
// 007214ba  e891edf0ff           call 0x630250
// 007214bf  6a00                 push 0
// 007214c1  8bcf                 mov ecx, edi
// 007214c3  e8baf4f0ff           call 0x630982
// 007214c8  8d4c2414             lea ecx, [esp + 0x14]
// 007214cc  ff15c8dc7700         call dword ptr [0x77dcc8]
// 007214d2  8d4c2414             lea ecx, [esp + 0x14]
// 007214d6  8bf0                 mov esi, eax
// 007214d8  ff1598dd7700         call dword ptr [0x77dd98]
// 007214de  8b542424             mov edx, dword ptr [esp + 0x24]
// 007214e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007214e6  8b7f04               mov edi, dword ptr [edi + 4]
// 007214e9  6a02                 push 2
// 007214eb  52                   push edx
// 007214ec  8b542424             mov edx, dword ptr [esp + 0x24]
// 007214f0  51                   push ecx
// 007214f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007214f5  52                   push edx
// 007214f6  51                   push ecx
// 007214f7  56                   push esi
// 007214f8  50                   push eax
// 007214f9  6a00                 push 0
// 007214fb  6a00                 push 0
// 007214fd  57                   push edi
// 007214fe  ff1578ee7700         call dword ptr [0x77ee78]
// 00721504  8d4c2430             lea ecx, [esp + 0x30]
// 00721508  c644244800           mov byte ptr [esp + 0x48], 0
// 0072150d  e8bef0f5ff           call 0x6805d0
// 00721512  8d4c2414             lea ecx, [esp + 0x14]
// 00721516  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0072151c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00721520  64890d00000000       mov dword ptr fs:[0], ecx
// 00721527  59                   pop ecx
// 00721528  5f                   pop edi
// 00721529  5e                   pop esi
// 0072152a  5d                   pop ebp
// 0072152b  5b                   pop ebx
// 0072152c  83c438               add esp, 0x38
// 0072152f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp