// roc 2008-06 00707ac0  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707ac0
//
// 00707ac0  56                   push esi
// 00707ac1  57                   push edi
// 00707ac2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00707ac6  8bf1                 mov esi, ecx
// 00707ac8  85ff                 test edi, edi
// 00707aca  7471                 je 0x707b3d
// 00707acc  8b4720               mov eax, dword ptr [edi + 0x20]
// 00707acf  53                   push ebx
// 00707ad0  8d5e20               lea ebx, [esi + 0x20]
// 00707ad3  8bcb                 mov ecx, ebx
// 00707ad5  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00707adb  e8c0590500           call 0x75d4a0
// 00707ae0  8bc8                 mov ecx, eax
// 00707ae2  e889eafdff           call 0x6e6570
// 00707ae7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00707aea  85c9                 test ecx, ecx
// 00707aec  7415                 je 0x707b03
// 00707aee  8b01                 mov eax, dword ptr [ecx]
// 00707af0  8b5020               mov edx, dword ptr [eax + 0x20]
// 00707af3  ffd2                 call edx
// 00707af5  50                   push eax
// 00707af6  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00707afc  50                   push eax
// 00707afd  ff15b82b8000         call dword ptr [0x802bb8]
// 00707b03  8bcb                 mov ecx, ebx
// 00707b05  e896590500           call 0x75d4a0
// 00707b0a  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 00707b11  5b                   pop ebx
// 00707b12  7429                 je 0x707b3d
// 00707b14  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00707b17  6a00                 push 0
// 00707b19  6a00                 push 0
// 00707b1b  6864030000           push 0x364
// 00707b20  51                   push ecx
// 00707b21  ff15142e8000         call dword ptr [0x802e14]
// 00707b27  8b5720               mov edx, dword ptr [edi + 0x20]
// 00707b2a  6a01                 push 1
// 00707b2c  6a01                 push 1
// 00707b2e  6a00                 push 0
// 00707b30  6a00                 push 0
// 00707b32  6864030000           push 0x364
// 00707b37  52                   push edx
// 00707b38  e85d480b00           call 0x7bc39a
// 00707b3d  5f                   pop edi
// 00707b3e  5e                   pop esi
// 00707b3f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
