// roc 2009-12 0087eef0  unit: CXTPControlGalleryOffice2007Theme  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087eef0
//
// 0087eef0  6aff                 push -1
// 0087eef2  68c1049600           push 0x9604c1
// 0087eef7  64a100000000         mov eax, dword ptr fs:[0]
// 0087eefd  50                   push eax
// 0087eefe  83ec08               sub esp, 8
// 0087ef01  53                   push ebx
// 0087ef02  55                   push ebp
// 0087ef03  56                   push esi
// 0087ef04  57                   push edi
// 0087ef05  a10052b600           mov eax, dword ptr [0xb65200]
// 0087ef0a  33c4                 xor eax, esp
// 0087ef0c  50                   push eax
// 0087ef0d  8d44241c             lea eax, [esp + 0x1c]
// 0087ef11  64a300000000         mov dword ptr fs:[0], eax
// 0087ef17  8bf1                 mov esi, ecx
// 0087ef19  89742414             mov dword ptr [esp + 0x14], esi
// 0087ef1d  e85e440000           call 0x883380
// 0087ef22  33ed                 xor ebp, ebp
// 0087ef24  c706b41fa000         mov dword ptr [esi], 0xa01fb4
// 0087ef2a  bb01000000           mov ebx, 1
// 0087ef2f  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087ef33  89aeb8050000         mov dword ptr [esi + 0x5b8], ebp
// 0087ef39  c786b405000044299f00 mov dword ptr [esi + 0x5b4], 0x9f2944
// 0087ef43  899ebc050000         mov dword ptr [esi + 0x5bc], ebx
// 0087ef49  8d8e00060000         lea ecx, [esi + 0x600]
// 0087ef4f  885c2424             mov byte ptr [esp + 0x24], bl
// 0087ef53  e8d8fefaff           call 0x82ee30
// 0087ef58  8d8e20060000         lea ecx, [esi + 0x620]
// 0087ef5e  e8cdfefaff           call 0x82ee30
// 0087ef63  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0087ef69  899e28010000         mov dword ptr [esi + 0x128], ebx
// 0087ef6f  89ae58040000         mov dword ptr [esi + 0x458], ebp
// 0087ef75  895e68               mov dword ptr [esi + 0x68], ebx
// 0087ef78  89aeb0050000         mov dword ptr [esi + 0x5b0], ebp
// 0087ef7e  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0087ef84  3bfd                 cmp edi, ebp
// 0087ef86  7411                 je 0x87ef99
// 0087ef88  8d4f20               lea ecx, [edi + 0x20]
// 0087ef8b  e880d1feff           call 0x86c110
// 0087ef90  57                   push edi
// 0087ef91  e8c448f7ff           call 0x7f385a
// 0087ef96  83c404               add esp, 4
// 0087ef99  6a3c                 push 0x3c
// 0087ef9b  e8c048f7ff           call 0x7f3860
// 0087efa0  8bf8                 mov edi, eax
// 0087efa2  83c404               add esp, 4
// 0087efa5  897c2418             mov dword ptr [esp + 0x18], edi
// 0087efa9  c644242402           mov byte ptr [esp + 0x24], 2
// 0087efae  3bfd                 cmp edi, ebp
// 0087efb0  7410                 je 0x87efc2
// 0087efb2  56                   push esi
// 0087efb3  8bcf                 mov ecx, edi
// 0087efb5  e8768bffff           call 0x877b30
// 0087efba  c7079c1fa000         mov dword ptr [edi], 0xa01f9c
// 0087efc0  eb02                 jmp 0x87efc4
// 0087efc2  33ff                 xor edi, edi
// 0087efc4  885c2424             mov byte ptr [esp + 0x24], bl
// 0087efc8  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0087efce  e82d280600           call 0x8e1800
// 0087efd3  8986c8050000         mov dword ptr [esi + 0x5c8], eax
// 0087efd9  8bc6                 mov eax, esi
// 0087efdb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087efdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0087efe6  59                   pop ecx
// 0087efe7  5f                   pop edi
// 0087efe8  5e                   pop esi
// 0087efe9  5d                   pop ebp
// 0087efea  5b                   pop ebx
// 0087efeb  83c414               add esp, 0x14
// 0087efee  c3                   ret 
// copied from an identical function in another client (function ??0CXTPOffice2007Theme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp