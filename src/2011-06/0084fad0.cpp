// roc 2011-06 0084fad0  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084fad0
//
// 0084fad0  53                   push ebx
// 0084fad1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0084fad5  55                   push ebp
// 0084fad6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0084fada  56                   push esi
// 0084fadb  57                   push edi
// 0084fadc  8bf1                 mov esi, ecx
// 0084fade  83fd02               cmp ebp, 2
// 0084fae1  754f                 jne 0x84fb32
// 0084fae3  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0084faea  742c                 je 0x84fb18
// 0084faec  6890e28400           push 0x84e290
// 0084faf1  b93c8fd100           mov ecx, 0xd18f3c
// 0084faf6  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0084fb00  e8bfca1700           call 0x9cc5c4
// 0084fb05  85c0                 test eax, eax
// 0084fb07  7505                 jne 0x84fb0e
// 0084fb09  e8fca7fbff           call 0x80a30a
// 0084fb0e  6a00                 push 0
// 0084fb10  56                   push esi
// 0084fb11  8bc8                 mov ecx, eax
// 0084fb13  e8f8fd0600           call 0x8bf910
// 0084fb18  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084fb1c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084fb20  52                   push edx
// 0084fb21  50                   push eax
// 0084fb22  53                   push ebx
// 0084fb23  55                   push ebp
// 0084fb24  8bce                 mov ecx, esi
// 0084fb26  e8ada6fbff           call 0x80a1d8
// 0084fb2b  5f                   pop edi
// 0084fb2c  5e                   pop esi
// 0084fb2d  5d                   pop ebp
// 0084fb2e  5b                   pop ebx
// 0084fb2f  c21000               ret 0x10
// 0084fb32  81fd12010000         cmp ebp, 0x112
// 0084fb38  75de                 jne 0x84fb18
// 0084fb3a  81fb00f10000         cmp ebx, 0xf100
// 0084fb40  7540                 jne 0x84fb82
// 0084fb42  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 0084fb48  75ce                 jne 0x84fb18
// 0084fb4a  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0084fb50  85ff                 test edi, edi
// 0084fb52  74c4                 je 0x84fb18
// 0084fb54  8bcf                 mov ecx, edi
// 0084fb56  e885e60100           call 0x86e1e0
// 0084fb5b  85c0                 test eax, eax
// 0084fb5d  75b9                 jne 0x84fb18
// 0084fb5f  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084fb62  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0084fb65  8d4f20               lea ecx, [edi + 0x20]
// 0084fb68  ffd2                 call edx
// 0084fb6a  85c0                 test eax, eax
// 0084fb6c  75aa                 jne 0x84fb18
// 0084fb6e  57                   push edi
// 0084fb6f  8bce                 mov ecx, esi
// 0084fb71  e82af2ffff           call 0x84eda0
// 0084fb76  5f                   pop edi
// 0084fb77  5e                   pop esi
// 0084fb78  5d                   pop ebp
// 0084fb79  b801000000           mov eax, 1
// 0084fb7e  5b                   pop ebx
// 0084fb7f  c21000               ret 0x10
// 0084fb82  81fb40f00000         cmp ebx, 0xf040
// 0084fb88  7408                 je 0x84fb92
// 0084fb8a  81fb50f00000         cmp ebx, 0xf050
// 0084fb90  7586                 jne 0x84fb18
// 0084fb92  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0084fb98  33c9                 xor ecx, ecx
// 0084fb9a  81fb40f00000         cmp ebx, 0xf040
// 0084fba0  0f94c1               sete cl
// 0084fba3  51                   push ecx
// 0084fba4  50                   push eax
// 0084fba5  8bce                 mov ecx, esi
// 0084fba7  e864f3ffff           call 0x84ef10
// 0084fbac  5f                   pop edi
// 0084fbad  5e                   pop esi
// 0084fbae  5d                   pop ebp
// 0084fbaf  5b                   pop ebx
// 0084fbb0  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
