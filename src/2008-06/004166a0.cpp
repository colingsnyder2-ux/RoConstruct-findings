// from server: 100% by colin
// roc 2008-06 004166a0  unit: VCContent::?$CComObject  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004166a0
//
// 004166a0  55                   push ebp
// 004166a1  8bec                 mov ebp, esp
// 004166a3  6aff                 push -1
// 004166a5  68d4da7b00           push 0x7bdad4
// 004166aa  64a100000000         mov eax, dword ptr fs:[0]
// 004166b0  50                   push eax
// 004166b1  64892500000000       mov dword ptr fs:[0], esp
// 004166b8  83ec6c               sub esp, 0x6c
// 004166bb  53                   push ebx
// 004166bc  56                   push esi
// 004166bd  57                   push edi
// 004166be  8965f0               mov dword ptr [ebp - 0x10], esp
// 004166c1  e8a2a22800           call 0x6a0968
// 004166c6  50                   push eax
// 004166c7  8d4ddc               lea ecx, [ebp - 0x24]
// 004166ca  e893a22800           call 0x6a0962
// 004166cf  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004166d2  57                   push edi
// 004166d3  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004166da  e8f1750000           call 0x41dcd0
// 004166df  8bf0                 mov esi, eax
// 004166e1  83c404               add esp, 4
// 004166e4  85f6                 test esi, esi
// 004166e6  0f849a000000         je 0x416786
// 004166ec  8d4d0c               lea ecx, [ebp + 0xc]
// 004166ef  ff15043f8000         call dword ptr [0x803f04]
// 004166f5  b301                 mov bl, 1
// 004166f7  57                   push edi
// 004166f8  8d4d08               lea ecx, [ebp + 8]
// 004166fb  885dfc               mov byte ptr [ebp - 4], bl
// 004166fe  ff15d83e8000         call dword ptr [0x803ed8]
// 00416704  8b00                 mov eax, dword ptr [eax]
// 00416706  50                   push eax
// 00416707  8d4d0c               lea ecx, [ebp + 0xc]
// 0041670a  6880ea8000           push 0x80ea80
// 0041670f  51                   push ecx
// 00416710  c645fc02             mov byte ptr [ebp - 4], 2
// 00416714  ff15dc3e8000         call dword ptr [0x803edc]
// 0041671a  83c40c               add esp, 0xc
// 0041671d  8d4d08               lea ecx, [ebp + 8]
// 00416720  885dfc               mov byte ptr [ebp - 4], bl
// 00416723  ff15143f8000         call dword ptr [0x803f14]
// 00416729  56                   push esi
// 0041672a  8d4d0c               lea ecx, [ebp + 0xc]
// 0041672d  ff15e03e8000         call dword ptr [0x803ee0]
// 00416733  50                   push eax
// 00416734  6818658100           push 0x816518
// 00416739  e8f22b0100           call 0x429330
// 0041673e  83c40c               add esp, 0xc
// 00416741  8d4d0c               lea ecx, [ebp + 0xc]
// 00416744  8bf0                 mov esi, eax
// 00416746  ff15143f8000         call dword ptr [0x803f14]
// 0041674c  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0041674f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00416756  85c0                 test eax, eax
// 00416758  7406                 je 0x416760
// 0041675a  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0041675d  895004               mov dword ptr [eax + 4], edx
// 00416760  837de800             cmp dword ptr [ebp - 0x18], 0
// 00416764  740b                 je 0x416771
// 00416766  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00416769  50                   push eax
// 0041676a  6a00                 push 0
// 0041676c  e8eba12800           call 0x6a095c
// 00416771  8bc6                 mov eax, esi
// 00416773  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00416776  64890d00000000       mov dword ptr fs:[0], ecx
// 0041677d  5f                   pop edi
// 0041677e  5e                   pop esi
// 0041677f  5b                   pop ebx
// 00416780  8be5                 mov esp, ebp
// 00416782  5d                   pop ebp
// 00416783  c20800               ret 8
// 00416786  8d4dc0               lea ecx, [ebp - 0x40]
// 00416789  c645fc03             mov byte ptr [ebp - 4], 3
// 0041678d  ff1560248000         call dword ptr [0x802460]
// 00416793  57                   push edi
// 00416794  8d4d0c               lea ecx, [ebp + 0xc]
// 00416797  c645fc04             mov byte ptr [ebp - 4], 4
// 0041679b  ff15d83e8000         call dword ptr [0x803ed8]
// 004167a1  b305                 mov bl, 5
// 004167a3  8bc8                 mov ecx, eax
// 004167a5  885dfc               mov byte ptr [ebp - 4], bl
// 004167a8  ff15e03e8000         call dword ptr [0x803ee0]
// 004167ae  50                   push eax
// 004167af  8d4d88               lea ecx, [ebp - 0x78]
// 004167b2  e8992fffff           call 0x409750
// 004167b7  8b5508               mov edx, dword ptr [ebp + 8]
// 004167ba  8d4dc0               lea ecx, [ebp - 0x40]
// 004167bd  51                   push ecx
// 004167be  6a01                 push 1
// 004167c0  83c208               add edx, 8
// 004167c3  52                   push edx
// 004167c4  8bc8                 mov ecx, eax
// 004167c6  c645fc06             mov byte ptr [ebp - 4], 6
// 004167ca  e871321500           call 0x569a40
// 004167cf  8d4d88               lea ecx, [ebp - 0x78]
// 004167d2  885dfc               mov byte ptr [ebp - 4], bl
// 004167d5  e8468e1c00           call 0x5df620
// 004167da  8d4d0c               lea ecx, [ebp + 0xc]
// 004167dd  ff15143f8000         call dword ptr [0x803f14]
// 004167e3  8d4dc0               lea ecx, [ebp - 0x40]
// 004167e6  c645fc03             mov byte ptr [ebp - 4], 3
// 004167ea  ff1568248000         call dword ptr [0x802468]
// 004167f0  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 004167f3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004167fa  85c0                 test eax, eax
// 004167fc  7406                 je 0x416804
// 004167fe  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00416801  894804               mov dword ptr [eax + 4], ecx
// 00416804  837de800             cmp dword ptr [ebp - 0x18], 0
// 00416808  740b                 je 0x416815
// 0041680a  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0041680d  52                   push edx
// 0041680e  6a00                 push 0
// 00416810  e847a12800           call 0x6a095c
// 00416815  33c0                 xor eax, eax
// 00416817  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041681a  64890d00000000       mov dword ptr fs:[0], ecx
// 00416821  5f                   pop edi
// 00416822  5e                   pop esi
// 00416823  5b                   pop ebx
// 00416824  8be5                 mov esp, ebp
// 00416826  5d                   pop ebp
// 00416827  c20800               ret 8
// 0041682a  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0041682d  50                   push eax
// 0041682e  6818658100           push 0x816518
// 00416833  e8282b0100           call 0x429360
// 00416838  89450c               mov dword ptr [ebp + 0xc], eax
// 0041683b  83c408               add esp, 8
// 0041683e  b844684100           mov eax, 0x416844
// 00416843  c3                   ret 
// 00416844  8d4ddc               lea ecx, [ebp - 0x24]
// 00416847  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0041684e  e89df8feff           call 0x4060f0
// 00416853  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00416856  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00416859  5f                   pop edi
// 0041685a  5e                   pop esi
// 0041685b  64890d00000000       mov dword ptr fs:[0], ecx
// 00416862  5b                   pop ebx
// 00416863  8be5                 mov esp, ebp
// 00416865  5d                   pop ebp
// 00416866  c20800               ret 8

// from server: 0% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentdistinctstringtemps61ed3b750b05af46.cpp
