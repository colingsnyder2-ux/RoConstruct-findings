// roc 2009-12 00859570  unit: CXTPTabClientWnd  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859570
//
// 00859570  56                   push esi
// 00859571  8bf1                 mov esi, ecx
// 00859573  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085957a  7506                 jne 0x859582
// 0085957c  33c0                 xor eax, eax
// 0085957e  5e                   pop esi
// 0085957f  c20800               ret 8
// 00859582  e829b9ffff           call 0x854eb0
// 00859587  85c0                 test eax, eax
// 00859589  74f1                 je 0x85957c
// 0085958b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085958e  50                   push eax
// 0085958f  8bce                 mov ecx, esi
// 00859591  e89af8ffff           call 0x858e30
// 00859596  8bd0                 mov edx, eax
// 00859598  85d2                 test edx, edx
// 0085959a  74e0                 je 0x85957c
// 0085959c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008595a0  85c0                 test eax, eax
// 008595a2  7402                 je 0x8595a6
// 008595a4  8910                 mov dword ptr [eax], edx
// 008595a6  8b442408             mov eax, dword ptr [esp + 8]
// 008595aa  053ddcffff           add eax, 0xffffdc3d
// 008595af  83f803               cmp eax, 3
// 008595b2  7725                 ja 0x8595d9
// 008595b4  ff248538968500       jmp dword ptr [eax*4 + 0x859638]
// 008595bb  8bce                 mov ecx, esi
// 008595bd  e88ed0ffff           call 0x856650
// 008595c2  83f801               cmp eax, 1
// 008595c5  7409                 je 0x8595d0
// 008595c7  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008595ce  75ac                 jne 0x85957c
// 008595d0  8b4260               mov eax, dword ptr [edx + 0x60]
// 008595d3  83785c01             cmp dword ptr [eax + 0x5c], 1
// 008595d7  7ea3                 jle 0x85957c
// 008595d9  b801000000           mov eax, 1
// 008595de  5e                   pop esi
// 008595df  c20800               ret 8
// 008595e2  8bce                 mov ecx, esi
// 008595e4  e867d0ffff           call 0x856650
// 008595e9  83f801               cmp eax, 1
// 008595ec  7409                 je 0x8595f7
// 008595ee  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008595f5  7485                 je 0x85957c
// 008595f7  8b4a60               mov ecx, dword ptr [edx + 0x60]
// 008595fa  83795c01             cmp dword ptr [ecx + 0x5c], 1
// 008595fe  ebd7                 jmp 0x8595d7
// 00859600  8b5260               mov edx, dword ptr [edx + 0x60]
// 00859603  52                   push edx
// 00859604  8bce                 mov ecx, esi
// 00859606  e885f0ffff           call 0x858690
// 0085960b  f7d8                 neg eax
// 0085960d  1bc0                 sbb eax, eax
// 0085960f  f7d8                 neg eax
// 00859611  5e                   pop esi
// 00859612  c20800               ret 8
// 00859615  8b5260               mov edx, dword ptr [edx + 0x60]
// 00859618  52                   push edx
// 00859619  8bce                 mov ecx, esi
// 0085961b  e870f0ffff           call 0x858690
// 00859620  8bce                 mov ecx, esi
// 00859622  8bd0                 mov edx, eax
// 00859624  e827d0ffff           call 0x856650
// 00859629  48                   dec eax
// 0085962a  33c9                 xor ecx, ecx
// 0085962c  3bd0                 cmp edx, eax
// 0085962e  0f95c1               setne cl
// 00859631  5e                   pop esi
// 00859632  8bc1                 mov eax, ecx
// 00859634  c20800               ret 8
// 00859637  90                   nop 
// 00859638  009685001596         add byte ptr [esi - 0x69eaff7b], dl
// 0085963e  8500                 test dword ptr [eax], eax
// 00859640  e295                 loop 0x8595d7
// 00859642  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?IsWorkspaceCommandEnabled@CXTPTabClientWnd@@QAEHIPAPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp