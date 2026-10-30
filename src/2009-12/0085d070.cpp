// roc 2009-12 0085d070  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d070
//
// 0085d070  56                   push esi
// 0085d071  57                   push edi
// 0085d072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085d076  8bf1                 mov esi, ecx
// 0085d078  85ff                 test edi, edi
// 0085d07a  7471                 je 0x85d0ed
// 0085d07c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0085d07f  53                   push ebx
// 0085d080  8d5e20               lea ebx, [esi + 0x20]
// 0085d083  8bcb                 mov ecx, ebx
// 0085d085  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0085d08b  e8b0370500           call 0x8b0840
// 0085d090  8bc8                 mov ecx, eax
// 0085d092  e8b9cbfdff           call 0x839c50
// 0085d097  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0085d09a  85c9                 test ecx, ecx
// 0085d09c  7415                 je 0x85d0b3
// 0085d09e  8b01                 mov eax, dword ptr [ecx]
// 0085d0a0  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085d0a3  ffd2                 call edx
// 0085d0a5  50                   push eax
// 0085d0a6  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085d0ac  50                   push eax
// 0085d0ad  ff1538cb9800         call dword ptr [0x98cb38]
// 0085d0b3  8bcb                 mov ecx, ebx
// 0085d0b5  e886370500           call 0x8b0840
// 0085d0ba  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 0085d0c1  5b                   pop ebx
// 0085d0c2  7429                 je 0x85d0ed
// 0085d0c4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0085d0c7  6a00                 push 0
// 0085d0c9  6a00                 push 0
// 0085d0cb  6864030000           push 0x364
// 0085d0d0  51                   push ecx
// 0085d0d1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085d0d7  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085d0da  6a01                 push 1
// 0085d0dc  6a01                 push 1
// 0085d0de  6a00                 push 0
// 0085d0e0  6a00                 push 0
// 0085d0e2  6864030000           push 0x364
// 0085d0e7  52                   push edx
// 0085d0e8  e8d9960c00           call 0x9267c6
// 0085d0ed  5f                   pop edi
// 0085d0ee  5e                   pop esi
// 0085d0ef  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
