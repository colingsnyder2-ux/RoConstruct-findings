// roc 2012-06 009e0c80  unit: CXTPTabClientWnd  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e0c80
//
// 009e0c80  56                   push esi
// 009e0c81  8bf1                 mov esi, ecx
// 009e0c83  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 009e0c8a  7506                 jne 0x9e0c92
// 009e0c8c  33c0                 xor eax, eax
// 009e0c8e  5e                   pop esi
// 009e0c8f  c20800               ret 8
// 009e0c92  e879bbffff           call 0x9dc810
// 009e0c97  85c0                 test eax, eax
// 009e0c99  74f1                 je 0x9e0c8c
// 009e0c9b  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e0c9e  50                   push eax
// 009e0c9f  8bce                 mov ecx, esi
// 009e0ca1  e89af8ffff           call 0x9e0540
// 009e0ca6  8bd0                 mov edx, eax
// 009e0ca8  85d2                 test edx, edx
// 009e0caa  74e0                 je 0x9e0c8c
// 009e0cac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e0cb0  85c0                 test eax, eax
// 009e0cb2  7402                 je 0x9e0cb6
// 009e0cb4  8910                 mov dword ptr [eax], edx
// 009e0cb6  8b442408             mov eax, dword ptr [esp + 8]
// 009e0cba  053ddcffff           add eax, 0xffffdc3d
// 009e0cbf  83f803               cmp eax, 3
// 009e0cc2  7725                 ja 0x9e0ce9
// 009e0cc4  ff2485480d9e00       jmp dword ptr [eax*4 + 0x9e0d48]
// 009e0ccb  8bce                 mov ecx, esi
// 009e0ccd  e88e77a4ff           call 0x428460
// 009e0cd2  83f801               cmp eax, 1
// 009e0cd5  7409                 je 0x9e0ce0
// 009e0cd7  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 009e0cde  75ac                 jne 0x9e0c8c
// 009e0ce0  8b4260               mov eax, dword ptr [edx + 0x60]
// 009e0ce3  83785c01             cmp dword ptr [eax + 0x5c], 1
// 009e0ce7  7ea3                 jle 0x9e0c8c
// 009e0ce9  b801000000           mov eax, 1
// 009e0cee  5e                   pop esi
// 009e0cef  c20800               ret 8
// 009e0cf2  8bce                 mov ecx, esi
// 009e0cf4  e86777a4ff           call 0x428460
// 009e0cf9  83f801               cmp eax, 1
// 009e0cfc  7409                 je 0x9e0d07
// 009e0cfe  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 009e0d05  7485                 je 0x9e0c8c
// 009e0d07  8b4a60               mov ecx, dword ptr [edx + 0x60]
// 009e0d0a  83795c01             cmp dword ptr [ecx + 0x5c], 1
// 009e0d0e  ebd7                 jmp 0x9e0ce7
// 009e0d10  8b5260               mov edx, dword ptr [edx + 0x60]
// 009e0d13  52                   push edx
// 009e0d14  8bce                 mov ecx, esi
// 009e0d16  e885f0ffff           call 0x9dfda0
// 009e0d1b  f7d8                 neg eax
// 009e0d1d  1bc0                 sbb eax, eax
// 009e0d1f  f7d8                 neg eax
// 009e0d21  5e                   pop esi
// 009e0d22  c20800               ret 8
// 009e0d25  8b5260               mov edx, dword ptr [edx + 0x60]
// 009e0d28  52                   push edx
// 009e0d29  8bce                 mov ecx, esi
// 009e0d2b  e870f0ffff           call 0x9dfda0
// 009e0d30  8bce                 mov ecx, esi
// 009e0d32  8bd0                 mov edx, eax
// 009e0d34  e82777a4ff           call 0x428460
// 009e0d39  48                   dec eax
// 009e0d3a  33c9                 xor ecx, ecx
// 009e0d3c  3bd0                 cmp edx, eax
// 009e0d3e  0f95c1               setne cl
// 009e0d41  5e                   pop esi
// 009e0d42  8bc1                 mov eax, ecx
// 009e0d44  c20800               ret 8
// 009e0d47  90                   nop 
// 009e0d48  100d9e00250d         adc byte ptr [0xd25009e], cl
// 009e0d4e  9e                   sahf 
// 009e0d4f  00f2                 add dl, dh
// 009e0d51  0c9e                 or al, 0x9e
// 009e0d53  00cb                 add bl, cl
// 009e0d55  0c9e                 or al, 0x9e
// copied from an identical function in another client (function ?IsWorkspaceCommandEnabled@CXTPTabClientWnd@@QAEHIPAPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp