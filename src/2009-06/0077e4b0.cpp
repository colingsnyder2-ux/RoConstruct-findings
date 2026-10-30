// roc 2009-06 0077e4b0  unit: CXTPTabClientWnd  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077e4b0
//
// 0077e4b0  56                   push esi
// 0077e4b1  8bf1                 mov esi, ecx
// 0077e4b3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0077e4ba  7506                 jne 0x77e4c2
// 0077e4bc  33c0                 xor eax, eax
// 0077e4be  5e                   pop esi
// 0077e4bf  c20800               ret 8
// 0077e4c2  e869bcffff           call 0x77a130
// 0077e4c7  85c0                 test eax, eax
// 0077e4c9  74f1                 je 0x77e4bc
// 0077e4cb  8b4020               mov eax, dword ptr [eax + 0x20]
// 0077e4ce  50                   push eax
// 0077e4cf  8bce                 mov ecx, esi
// 0077e4d1  e89af8ffff           call 0x77dd70
// 0077e4d6  8bd0                 mov edx, eax
// 0077e4d8  85d2                 test edx, edx
// 0077e4da  74e0                 je 0x77e4bc
// 0077e4dc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077e4e0  85c0                 test eax, eax
// 0077e4e2  7402                 je 0x77e4e6
// 0077e4e4  8910                 mov dword ptr [eax], edx
// 0077e4e6  8b442408             mov eax, dword ptr [esp + 8]
// 0077e4ea  053ddcffff           add eax, 0xffffdc3d
// 0077e4ef  83f803               cmp eax, 3
// 0077e4f2  7725                 ja 0x77e519
// 0077e4f4  ff248578e57700       jmp dword ptr [eax*4 + 0x77e578]
// 0077e4fb  8bce                 mov ecx, esi
// 0077e4fd  e8eed0ffff           call 0x77b5f0
// 0077e502  83f801               cmp eax, 1
// 0077e505  7409                 je 0x77e510
// 0077e507  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0077e50e  75ac                 jne 0x77e4bc
// 0077e510  8b4260               mov eax, dword ptr [edx + 0x60]
// 0077e513  83785c01             cmp dword ptr [eax + 0x5c], 1
// 0077e517  7ea3                 jle 0x77e4bc
// 0077e519  b801000000           mov eax, 1
// 0077e51e  5e                   pop esi
// 0077e51f  c20800               ret 8
// 0077e522  8bce                 mov ecx, esi
// 0077e524  e8c7d0ffff           call 0x77b5f0
// 0077e529  83f801               cmp eax, 1
// 0077e52c  7409                 je 0x77e537
// 0077e52e  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0077e535  7485                 je 0x77e4bc
// 0077e537  8b4a60               mov ecx, dword ptr [edx + 0x60]
// 0077e53a  83795c01             cmp dword ptr [ecx + 0x5c], 1
// 0077e53e  ebd7                 jmp 0x77e517
// 0077e540  8b5260               mov edx, dword ptr [edx + 0x60]
// 0077e543  52                   push edx
// 0077e544  8bce                 mov ecx, esi
// 0077e546  e885f0ffff           call 0x77d5d0
// 0077e54b  f7d8                 neg eax
// 0077e54d  1bc0                 sbb eax, eax
// 0077e54f  f7d8                 neg eax
// 0077e551  5e                   pop esi
// 0077e552  c20800               ret 8
// 0077e555  8b5260               mov edx, dword ptr [edx + 0x60]
// 0077e558  52                   push edx
// 0077e559  8bce                 mov ecx, esi
// 0077e55b  e870f0ffff           call 0x77d5d0
// 0077e560  8bce                 mov ecx, esi
// 0077e562  8bd0                 mov edx, eax
// 0077e564  e887d0ffff           call 0x77b5f0
// 0077e569  48                   dec eax
// 0077e56a  33c9                 xor ecx, ecx
// 0077e56c  3bd0                 cmp edx, eax
// 0077e56e  0f95c1               setne cl
// 0077e571  5e                   pop esi
// 0077e572  8bc1                 mov eax, ecx
// 0077e574  c20800               ret 8
// 0077e577  90                   nop 
// 0077e578  40                   inc eax
// 0077e579  e577                 in eax, 0x77
// 0077e57b  0055e5               add byte ptr [ebp - 0x1b], dl
// 0077e57e  7700                 ja 0x77e580
// 0077e580  22e5                 and ah, ch
// 0077e582  7700                 ja 0x77e584
// 0077e584  fb                   sti 
// 0077e585  e477                 in al, 0x77
// copied from an identical function in another client (function ?IsWorkspaceCommandEnabled@CXTPTabClientWnd@@QAEHIPAPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp