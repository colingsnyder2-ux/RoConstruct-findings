// roc 2008-06 006ef9a0  unit: CXTPPopupBar  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ef9a0
//
// 006ef9a0  56                   push esi
// 006ef9a1  8bf1                 mov esi, ecx
// 006ef9a3  83be8001000000       cmp dword ptr [esi + 0x180], 0
// 006ef9aa  0f8491010000         je 0x6efb41
// 006ef9b0  55                   push ebp
// 006ef9b1  57                   push edi
// 006ef9b2  e81957fcff           call 0x6b50d0
// 006ef9b7  8bf8                 mov edi, eax
// 006ef9b9  8b06                 mov eax, dword ptr [esi]
// 006ef9bb  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006ef9c1  8bce                 mov ecx, esi
// 006ef9c3  ffd2                 call edx
// 006ef9c5  8be8                 mov ebp, eax
// 006ef9c7  85ed                 test ebp, ebp
// 006ef9c9  0f8470010000         je 0x6efb3f
// 006ef9cf  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 006ef9d5  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 006ef9df  f680d400000004       test byte ptr [eax + 0xd4], 4
// 006ef9e6  7504                 jne 0x6ef9ec
// 006ef9e8  85ff                 test edi, edi
// 006ef9ea  740a                 je 0x6ef9f6
// 006ef9ec  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 006ef9f6  f785ec00000000002000 test dword ptr [ebp + 0xec], 0x200000
// 006efa00  53                   push ebx
// 006efa01  7416                 je 0x6efa19
// 006efa03  83bd0001000005       cmp dword ptr [ebp + 0x100], 5
// 006efa0a  750d                 jne 0x6efa19
// 006efa0c  bb02000000           mov ebx, 2
// 006efa11  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 006efa17  eb5f                 jmp 0x6efa78
// 006efa19  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 006efa1f  bb02000000           mov ebx, 2
// 006efa24  3bc3                 cmp eax, ebx
// 006efa26  741f                 je 0x6efa47
// 006efa28  83f803               cmp eax, 3
// 006efa2b  7441                 je 0x6efa6e
// 006efa2d  83f805               cmp eax, 5
// 006efa30  7415                 je 0x6efa47
// 006efa32  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 006efa38  7505                 jne 0x6efa3f
// 006efa3a  83f804               cmp eax, 4
// 006efa3d  7408                 je 0x6efa47
// 006efa3f  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 006efa45  eb31                 jmp 0x6efa78
// 006efa47  83f803               cmp eax, 3
// 006efa4a  7422                 je 0x6efa6e
// 006efa4c  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 006efa52  7524                 jne 0x6efa78
// 006efa54  8b5500               mov edx, dword ptr [ebp]
// 006efa57  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 006efa5d  8bcd                 mov ecx, ebp
// 006efa5f  ffd0                 call eax
// 006efa61  85c0                 test eax, eax
// 006efa63  7413                 je 0x6efa78
// 006efa65  f6859c01000001       test byte ptr [ebp + 0x19c], 1
// 006efa6c  740a                 je 0x6efa78
// 006efa6e  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 006efa78  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 006efa7e  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 006efa84  898e8c010000         mov dword ptr [esi + 0x18c], ecx
// 006efa8a  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 006efa90  8dbe8c010000         lea edi, [esi + 0x18c]
// 006efa96  895704               mov dword ptr [edi + 4], edx
// 006efa99  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 006efa9f  894f08               mov dword ptr [edi + 8], ecx
// 006efaa2  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006efaa8  89570c               mov dword ptr [edi + 0xc], edx
// 006efaab  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 006efab2  7510                 jne 0x6efac4
// 006efab4  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 006efaba  7408                 je 0x6efac4
// 006efabc  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 006efac2  eb38                 jmp 0x6efafc
// 006efac4  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 006efaca  3bc3                 cmp eax, ebx
// 006efacc  741b                 je 0x6efae9
// 006eface  83f803               cmp eax, 3
// 006efad1  7416                 je 0x6efae9
// 006efad3  83f805               cmp eax, 5
// 006efad6  7411                 je 0x6efae9
// 006efad8  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 006efade  7505                 jne 0x6efae5
// 006efae0  83f804               cmp eax, 4
// 006efae3  7404                 je 0x6efae9
// 006efae5  33c0                 xor eax, eax
// 006efae7  eb05                 jmp 0x6efaee
// 006efae9  b801000000           mov eax, 1
// 006efaee  8b16                 mov edx, dword ptr [esi]
// 006efaf0  50                   push eax
// 006efaf1  8b820c020000         mov eax, dword ptr [edx + 0x20c]
// 006efaf7  57                   push edi
// 006efaf8  8bce                 mov ecx, esi
// 006efafa  ffd0                 call eax
// 006efafc  57                   push edi
// 006efafd  8bcd                 mov ecx, ebp
// 006efaff  e82e11fbff           call 0x6a0c32
// 006efb04  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 006efb0a  23c3                 and eax, ebx
// 006efb0c  5b                   pop ebx
// 006efb0d  7404                 je 0x6efb13
// 006efb0f  8b3f                 mov edi, dword ptr [edi]
// 006efb11  eb06                 jmp 0x6efb19
// 006efb13  8bbe94010000         mov edi, dword ptr [esi + 0x194]
// 006efb19  89be84010000         mov dword ptr [esi + 0x184], edi
// 006efb1f  85c0                 test eax, eax
// 006efb21  7410                 je 0x6efb33
// 006efb23  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 006efb29  5f                   pop edi
// 006efb2a  5d                   pop ebp
// 006efb2b  898688010000         mov dword ptr [esi + 0x188], eax
// 006efb31  5e                   pop esi
// 006efb32  c3                   ret 
// 006efb33  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 006efb39  898688010000         mov dword ptr [esi + 0x188], eax
// 006efb3f  5f                   pop edi
// 006efb40  5d                   pop ebp
// 006efb41  5e                   pop esi
// 006efb42  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?UpdateFlags@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
