// roc 2010-06 0080d4f0  unit: CXTPTabClientWnd  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080d4f0
//
// 0080d4f0  56                   push esi
// 0080d4f1  8bf1                 mov esi, ecx
// 0080d4f3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0080d4fa  7506                 jne 0x80d502
// 0080d4fc  33c0                 xor eax, eax
// 0080d4fe  5e                   pop esi
// 0080d4ff  c20800               ret 8
// 0080d502  e829baffff           call 0x808f30
// 0080d507  85c0                 test eax, eax
// 0080d509  74f1                 je 0x80d4fc
// 0080d50b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0080d50e  50                   push eax
// 0080d50f  8bce                 mov ecx, esi
// 0080d511  e89af8ffff           call 0x80cdb0
// 0080d516  8bd0                 mov edx, eax
// 0080d518  85d2                 test edx, edx
// 0080d51a  74e0                 je 0x80d4fc
// 0080d51c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080d520  85c0                 test eax, eax
// 0080d522  7402                 je 0x80d526
// 0080d524  8910                 mov dword ptr [eax], edx
// 0080d526  8b442408             mov eax, dword ptr [esp + 8]
// 0080d52a  053ddcffff           add eax, 0xffffdc3d
// 0080d52f  83f803               cmp eax, 3
// 0080d532  7725                 ja 0x80d559
// 0080d534  ff2485b8d58000       jmp dword ptr [eax*4 + 0x80d5b8]
// 0080d53b  8bce                 mov ecx, esi
// 0080d53d  e83ed0ffff           call 0x80a580
// 0080d542  83f801               cmp eax, 1
// 0080d545  7409                 je 0x80d550
// 0080d547  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0080d54e  75ac                 jne 0x80d4fc
// 0080d550  8b4260               mov eax, dword ptr [edx + 0x60]
// 0080d553  83785c01             cmp dword ptr [eax + 0x5c], 1
// 0080d557  7ea3                 jle 0x80d4fc
// 0080d559  b801000000           mov eax, 1
// 0080d55e  5e                   pop esi
// 0080d55f  c20800               ret 8
// 0080d562  8bce                 mov ecx, esi
// 0080d564  e817d0ffff           call 0x80a580
// 0080d569  83f801               cmp eax, 1
// 0080d56c  7409                 je 0x80d577
// 0080d56e  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0080d575  7485                 je 0x80d4fc
// 0080d577  8b4a60               mov ecx, dword ptr [edx + 0x60]
// 0080d57a  83795c01             cmp dword ptr [ecx + 0x5c], 1
// 0080d57e  ebd7                 jmp 0x80d557
// 0080d580  8b5260               mov edx, dword ptr [edx + 0x60]
// 0080d583  52                   push edx
// 0080d584  8bce                 mov ecx, esi
// 0080d586  e885f0ffff           call 0x80c610
// 0080d58b  f7d8                 neg eax
// 0080d58d  1bc0                 sbb eax, eax
// 0080d58f  f7d8                 neg eax
// 0080d591  5e                   pop esi
// 0080d592  c20800               ret 8
// 0080d595  8b5260               mov edx, dword ptr [edx + 0x60]
// 0080d598  52                   push edx
// 0080d599  8bce                 mov ecx, esi
// 0080d59b  e870f0ffff           call 0x80c610
// 0080d5a0  8bce                 mov ecx, esi
// 0080d5a2  8bd0                 mov edx, eax
// 0080d5a4  e8d7cfffff           call 0x80a580
// 0080d5a9  48                   dec eax
// 0080d5aa  33c9                 xor ecx, ecx
// 0080d5ac  3bd0                 cmp edx, eax
// 0080d5ae  0f95c1               setne cl
// 0080d5b1  5e                   pop esi
// 0080d5b2  8bc1                 mov eax, ecx
// 0080d5b4  c20800               ret 8
// 0080d5b7  90                   nop 
// 0080d5b8  80d580               adc ch, 0x80
// 0080d5bb  0095d5800062         add byte ptr [ebp + 0x620080d5], dl
// 0080d5c1  d580                 aad 0x80
// 0080d5c3  003b                 add byte ptr [ebx], bh
// 0080d5c5  d580                 aad 0x80
// copied from an identical function in another client (function ?IsWorkspaceCommandEnabled@CXTPTabClientWnd@@QAEHIPAPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp