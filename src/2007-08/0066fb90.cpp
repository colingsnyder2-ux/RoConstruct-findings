// from server: 100% by auto
// roc 2007-08 0066fb90  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066fb90
//
// 0066fb90  53                   push ebx
// 0066fb91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0066fb95  55                   push ebp
// 0066fb96  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066fb9a  83fd02               cmp ebp, 2
// 0066fb9d  56                   push esi
// 0066fb9e  57                   push edi
// 0066fb9f  8bf1                 mov esi, ecx
// 0066fba1  754f                 jne 0x66fbf2
// 0066fba3  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0066fbaa  742c                 je 0x66fbd8
// 0066fbac  6830e36600           push 0x66e330
// 0066fbb1  b948938c00           mov ecx, 0x8c9348
// 0066fbb6  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0066fbc0  e8a5870c00           call 0x73836a
// 0066fbc5  85c0                 test eax, eax
// 0066fbc7  7505                 jne 0x66fbce
// 0066fbc9  e85203fcff           call 0x62ff20
// 0066fbce  6a00                 push 0
// 0066fbd0  56                   push esi
// 0066fbd1  8bc8                 mov ecx, eax
// 0066fbd3  e878e60600           call 0x6de250
// 0066fbd8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066fbdc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066fbe0  52                   push edx
// 0066fbe1  50                   push eax
// 0066fbe2  53                   push ebx
// 0066fbe3  55                   push ebp
// 0066fbe4  8bce                 mov ecx, esi
// 0066fbe6  e8f101fcff           call 0x62fddc
// 0066fbeb  5f                   pop edi
// 0066fbec  5e                   pop esi
// 0066fbed  5d                   pop ebp
// 0066fbee  5b                   pop ebx
// 0066fbef  c21000               ret 0x10
// 0066fbf2  81fd12010000         cmp ebp, 0x112
// 0066fbf8  75de                 jne 0x66fbd8
// 0066fbfa  81fb00f10000         cmp ebx, 0xf100
// 0066fc00  7540                 jne 0x66fc42
// 0066fc02  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 0066fc08  75ce                 jne 0x66fbd8
// 0066fc0a  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0066fc10  85ff                 test edi, edi
// 0066fc12  74c4                 je 0x66fbd8
// 0066fc14  8bcf                 mov ecx, edi
// 0066fc16  e845f80100           call 0x68f460
// 0066fc1b  85c0                 test eax, eax
// 0066fc1d  75b9                 jne 0x66fbd8
// 0066fc1f  8b4720               mov eax, dword ptr [edi + 0x20]
// 0066fc22  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066fc25  8d4f20               lea ecx, [edi + 0x20]
// 0066fc28  ffd2                 call edx
// 0066fc2a  85c0                 test eax, eax
// 0066fc2c  75aa                 jne 0x66fbd8
// 0066fc2e  57                   push edi
// 0066fc2f  8bce                 mov ecx, esi
// 0066fc31  e80af2ffff           call 0x66ee40
// 0066fc36  5f                   pop edi
// 0066fc37  5e                   pop esi
// 0066fc38  5d                   pop ebp
// 0066fc39  b801000000           mov eax, 1
// 0066fc3e  5b                   pop ebx
// 0066fc3f  c21000               ret 0x10
// 0066fc42  81fb40f00000         cmp ebx, 0xf040
// 0066fc48  7408                 je 0x66fc52
// 0066fc4a  81fb50f00000         cmp ebx, 0xf050
// 0066fc50  7586                 jne 0x66fbd8
// 0066fc52  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066fc58  33c9                 xor ecx, ecx
// 0066fc5a  81fb40f00000         cmp ebx, 0xf040
// 0066fc60  0f94c1               sete cl
// 0066fc63  51                   push ecx
// 0066fc64  50                   push eax
// 0066fc65  8bce                 mov ecx, esi
// 0066fc67  e844f3ffff           call 0x66efb0
// 0066fc6c  5f                   pop edi
// 0066fc6d  5e                   pop esi
// 0066fc6e  5d                   pop ebp
// 0066fc6f  5b                   pop ebx
// 0066fc70  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
