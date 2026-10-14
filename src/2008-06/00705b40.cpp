// roc 2008-06 00705b40  unit: CXTPTabClientWnd  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00705b40
//
// 00705b40  56                   push esi
// 00705b41  8bf1                 mov esi, ecx
// 00705b43  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00705b4a  7506                 jne 0x705b52
// 00705b4c  33c0                 xor eax, eax
// 00705b4e  5e                   pop esi
// 00705b4f  c20800               ret 8
// 00705b52  e8c9bcffff           call 0x701820
// 00705b57  85c0                 test eax, eax
// 00705b59  74f1                 je 0x705b4c
// 00705b5b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00705b5e  50                   push eax
// 00705b5f  8bce                 mov ecx, esi
// 00705b61  e89af8ffff           call 0x705400
// 00705b66  8bd0                 mov edx, eax
// 00705b68  85d2                 test edx, edx
// 00705b6a  74e0                 je 0x705b4c
// 00705b6c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00705b70  85c0                 test eax, eax
// 00705b72  7402                 je 0x705b76
// 00705b74  8910                 mov dword ptr [eax], edx
// 00705b76  8b442408             mov eax, dword ptr [esp + 8]
// 00705b7a  053ddcffff           add eax, 0xffffdc3d
// 00705b7f  83f803               cmp eax, 3
// 00705b82  7725                 ja 0x705ba9
// 00705b84  ff2485085c7000       jmp dword ptr [eax*4 + 0x705c08]
// 00705b8b  8bce                 mov ecx, esi
// 00705b8d  e82e26d7ff           call 0x4781c0
// 00705b92  83f801               cmp eax, 1
// 00705b95  7409                 je 0x705ba0
// 00705b97  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00705b9e  75ac                 jne 0x705b4c
// 00705ba0  8b4260               mov eax, dword ptr [edx + 0x60]
// 00705ba3  83785c01             cmp dword ptr [eax + 0x5c], 1
// 00705ba7  7ea3                 jle 0x705b4c
// 00705ba9  b801000000           mov eax, 1
// 00705bae  5e                   pop esi
// 00705baf  c20800               ret 8
// 00705bb2  8bce                 mov ecx, esi
// 00705bb4  e80726d7ff           call 0x4781c0
// 00705bb9  83f801               cmp eax, 1
// 00705bbc  7409                 je 0x705bc7
// 00705bbe  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00705bc5  7485                 je 0x705b4c
// 00705bc7  8b4a60               mov ecx, dword ptr [edx + 0x60]
// 00705bca  83795c01             cmp dword ptr [ecx + 0x5c], 1
// 00705bce  ebd7                 jmp 0x705ba7
// 00705bd0  8b5260               mov edx, dword ptr [edx + 0x60]
// 00705bd3  52                   push edx
// 00705bd4  8bce                 mov ecx, esi
// 00705bd6  e885f0ffff           call 0x704c60
// 00705bdb  f7d8                 neg eax
// 00705bdd  1bc0                 sbb eax, eax
// 00705bdf  f7d8                 neg eax
// 00705be1  5e                   pop esi
// 00705be2  c20800               ret 8
// 00705be5  8b5260               mov edx, dword ptr [edx + 0x60]
// 00705be8  52                   push edx
// 00705be9  8bce                 mov ecx, esi
// 00705beb  e870f0ffff           call 0x704c60
// 00705bf0  8bce                 mov ecx, esi
// 00705bf2  8bd0                 mov edx, eax
// 00705bf4  e8c725d7ff           call 0x4781c0
// 00705bf9  48                   dec eax
// 00705bfa  33c9                 xor ecx, ecx
// 00705bfc  3bd0                 cmp edx, eax
// 00705bfe  0f95c1               setne cl
// 00705c01  5e                   pop esi
// 00705c02  8bc1                 mov eax, ecx
// 00705c04  c20800               ret 8
// 00705c07  90                   nop 
// 00705c08  d05b70               rcr byte ptr [ebx + 0x70], 1
// 00705c0b  00e5                 add ch, ah
// 00705c0d  5b                   pop ebx
// 00705c0e  7000                 jo 0x705c10
// 00705c10  b25b                 mov dl, 0x5b
// 00705c12  7000                 jo 0x705c14
// 00705c14  8b5b70               mov ebx, dword ptr [ebx + 0x70]
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsWorkspaceCommandEnabled@CXTPTabClientWnd@@QAEHIPAPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPTabClientWnd.cpp
