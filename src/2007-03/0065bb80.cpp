// roc 2007-03 0065bb80  unit: seg_00650000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065bb80
//
// 0065bb80  53                   push ebx
// 0065bb81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065bb85  55                   push ebp
// 0065bb86  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065bb8a  83fd02               cmp ebp, 2
// 0065bb8d  56                   push esi
// 0065bb8e  57                   push edi
// 0065bb8f  8bf1                 mov esi, ecx
// 0065bb91  754f                 jne 0x65bbe2
// 0065bb93  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0065bb9a  742c                 je 0x65bbc8
// 0065bb9c  6840a36500           push 0x65a340
// 0065bba1  b940238c00           mov ecx, 0x8c2340
// 0065bba6  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0065bbb0  e8efee0d00           call 0x73aaa4
// 0065bbb5  85c0                 test eax, eax
// 0065bbb7  7505                 jne 0x65bbbe
// 0065bbb9  e8f027fcff           call 0x61e3ae
// 0065bbbe  6a00                 push 0
// 0065bbc0  56                   push esi
// 0065bbc1  8bc8                 mov ecx, eax
// 0065bbc3  e878b60600           call 0x6c7240
// 0065bbc8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065bbcc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065bbd0  52                   push edx
// 0065bbd1  50                   push eax
// 0065bbd2  53                   push ebx
// 0065bbd3  55                   push ebp
// 0065bbd4  8bce                 mov ecx, esi
// 0065bbd6  e89526fcff           call 0x61e270
// 0065bbdb  5f                   pop edi
// 0065bbdc  5e                   pop esi
// 0065bbdd  5d                   pop ebp
// 0065bbde  5b                   pop ebx
// 0065bbdf  c21000               ret 0x10
// 0065bbe2  81fd12010000         cmp ebp, 0x112
// 0065bbe8  75de                 jne 0x65bbc8
// 0065bbea  81fb00f10000         cmp ebx, 0xf100
// 0065bbf0  7540                 jne 0x65bc32
// 0065bbf2  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 0065bbf8  75ce                 jne 0x65bbc8
// 0065bbfa  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0065bc00  85ff                 test edi, edi
// 0065bc02  74c4                 je 0x65bbc8
// 0065bc04  8bcf                 mov ecx, edi
// 0065bc06  e875d30100           call 0x678f80
// 0065bc0b  85c0                 test eax, eax
// 0065bc0d  75b9                 jne 0x65bbc8
// 0065bc0f  8b4720               mov eax, dword ptr [edi + 0x20]
// 0065bc12  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0065bc15  8d4f20               lea ecx, [edi + 0x20]
// 0065bc18  ffd2                 call edx
// 0065bc1a  85c0                 test eax, eax
// 0065bc1c  75aa                 jne 0x65bbc8
// 0065bc1e  57                   push edi
// 0065bc1f  8bce                 mov ecx, esi
// 0065bc21  e8faf1ffff           call 0x65ae20
// 0065bc26  5f                   pop edi
// 0065bc27  5e                   pop esi
// 0065bc28  5d                   pop ebp
// 0065bc29  b801000000           mov eax, 1
// 0065bc2e  5b                   pop ebx
// 0065bc2f  c21000               ret 0x10
// 0065bc32  81fb40f00000         cmp ebx, 0xf040
// 0065bc38  7408                 je 0x65bc42
// 0065bc3a  81fb50f00000         cmp ebx, 0xf050
// 0065bc40  7586                 jne 0x65bbc8
// 0065bc42  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0065bc48  33c9                 xor ecx, ecx
// 0065bc4a  81fb40f00000         cmp ebx, 0xf040
// 0065bc50  0f94c1               sete cl
// 0065bc53  51                   push ecx
// 0065bc54  50                   push eax
// 0065bc55  8bce                 mov ecx, esi
// 0065bc57  e844f3ffff           call 0x65afa0
// 0065bc5c  5f                   pop edi
// 0065bc5d  5e                   pop esi
// 0065bc5e  5d                   pop ebp
// 0065bc5f  5b                   pop ebx
// 0065bc60  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
