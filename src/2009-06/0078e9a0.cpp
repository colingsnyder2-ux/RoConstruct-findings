// roc 2009-06 0078e9a0  unit: CXTPPropertyGridView  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078e9a0
//
// 0078e9a0  83ec18               sub esp, 0x18
// 0078e9a3  56                   push esi
// 0078e9a4  8bf1                 mov esi, ecx
// 0078e9a6  57                   push edi
// 0078e9a7  8dbee8000000         lea edi, [esi + 0xe8]
// 0078e9ad  85ff                 test edi, edi
// 0078e9af  0f84f6000000         je 0x78eaab
// 0078e9b5  837f2000             cmp dword ptr [edi + 0x20], 0
// 0078e9b9  0f84ec000000         je 0x78eaab
// 0078e9bf  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0078e9c5  50                   push eax
// 0078e9c6  ff15c8ed8900         call dword ptr [0x89edc8]
// 0078e9cc  85c0                 test eax, eax
// 0078e9ce  0f84d7000000         je 0x78eaab
// 0078e9d4  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 0078e9da  8d4c2410             lea ecx, [esp + 0x10]
// 0078e9de  51                   push ecx
// 0078e9df  52                   push edx
// 0078e9e0  ff15f4ed8900         call dword ptr [0x89edf4]
// 0078e9e6  8d442408             lea eax, [esp + 8]
// 0078e9ea  50                   push eax
// 0078e9eb  ff152cee8900         call dword ptr [0x89ee2c]
// 0078e9f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078e9f5  8b542408             mov edx, dword ptr [esp + 8]
// 0078e9f9  51                   push ecx
// 0078e9fa  52                   push edx
// 0078e9fb  8d86b8000000         lea eax, [esi + 0xb8]
// 0078ea01  50                   push eax
// 0078ea02  ff15c0ed8900         call dword ptr [0x89edc0]
// 0078ea08  85c0                 test eax, eax
// 0078ea0a  7409                 je 0x78ea15
// 0078ea0c  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0078ea13  741e                 je 0x78ea33
// 0078ea15  6816d28a00           push 0x8ad216
// 0078ea1a  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0078ea20  ff15acfc8900         call dword ptr [0x89fcac]
// 0078ea26  6a00                 push 0
// 0078ea28  6a00                 push 0
// 0078ea2a  6a00                 push 0
// 0078ea2c  8bcf                 mov ecx, edi
// 0078ea2e  e88de2ffff           call 0x78ccc0
// 0078ea33  8b442424             mov eax, dword ptr [esp + 0x24]
// 0078ea37  3d05020000           cmp eax, 0x205
// 0078ea3c  7735                 ja 0x78ea73
// 0078ea3e  3d04020000           cmp eax, 0x204
// 0078ea43  7359                 jae 0x78ea9e
// 0078ea45  3d04010000           cmp eax, 0x104
// 0078ea4a  7711                 ja 0x78ea5d
// 0078ea4c  7450                 je 0x78ea9e
// 0078ea4e  3d00010000           cmp eax, 0x100
// 0078ea53  7449                 je 0x78ea9e
// 0078ea55  5f                   pop edi
// 0078ea56  5e                   pop esi
// 0078ea57  83c418               add esp, 0x18
// 0078ea5a  c20400               ret 4
// 0078ea5d  3d01020000           cmp eax, 0x201
// 0078ea62  7247                 jb 0x78eaab
// 0078ea64  3d02020000           cmp eax, 0x202
// 0078ea69  7633                 jbe 0x78ea9e
// 0078ea6b  5f                   pop edi
// 0078ea6c  5e                   pop esi
// 0078ea6d  83c418               add esp, 0x18
// 0078ea70  c20400               ret 4
// 0078ea73  05f9fdffff           add eax, 0xfffffdf9
// 0078ea78  3d9c000000           cmp eax, 0x9c
// 0078ea7d  772c                 ja 0x78eaab
// 0078ea7f  0fb688c0ea7800       movzx ecx, byte ptr [eax + 0x78eac0]
// 0078ea86  ff248db4ea7800       jmp dword ptr [ecx*4 + 0x78eab4]
// 0078ea8d  6816d28a00           push 0x8ad216
// 0078ea92  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0078ea98  ff15acfc8900         call dword ptr [0x89fcac]
// 0078ea9e  6a00                 push 0
// 0078eaa0  6a00                 push 0
// 0078eaa2  6a00                 push 0
// 0078eaa4  8bcf                 mov ecx, edi
// 0078eaa6  e815e2ffff           call 0x78ccc0
// 0078eaab  5f                   pop edi
// 0078eaac  5e                   pop esi
// 0078eaad  83c418               add esp, 0x18
// 0078eab0  c20400               ret 4
// 0078eab3  90                   nop 
// 0078eab4  9e                   sahf 
// 0078eab5  ea78008dea7800       ljmp 0x78:0xea8d0078
// 0078eabc  ab                   stosd dword ptr es:[edi], eax
// 0078eabd  ea780000000201       ljmp 0x102:0x78
// 0078eac4  0202                 add al, byte ptr [edx]
// 0078eac6  0202                 add al, byte ptr [edx]
// 0078eac8  0202                 add al, byte ptr [edx]
// 0078eaca  0202                 add al, byte ptr [edx]
// 0078eacc  0202                 add al, byte ptr [edx]
// 0078eace  0202                 add al, byte ptr [edx]
// 0078ead0  0202                 add al, byte ptr [edx]
// 0078ead2  0202                 add al, byte ptr [edx]
// 0078ead4  0202                 add al, byte ptr [edx]
// 0078ead6  0202                 add al, byte ptr [edx]
// 0078ead8  0202                 add al, byte ptr [edx]
// 0078eada  0202                 add al, byte ptr [edx]
// 0078eadc  0202                 add al, byte ptr [edx]
// 0078eade  0202                 add al, byte ptr [edx]
// 0078eae0  0202                 add al, byte ptr [edx]
// 0078eae2  0202                 add al, byte ptr [edx]
// 0078eae4  0202                 add al, byte ptr [edx]
// 0078eae6  0202                 add al, byte ptr [edx]
// 0078eae8  0202                 add al, byte ptr [edx]
// 0078eaea  0202                 add al, byte ptr [edx]
// 0078eaec  0202                 add al, byte ptr [edx]
// 0078eaee  0202                 add al, byte ptr [edx]
// 0078eaf0  0202                 add al, byte ptr [edx]
// 0078eaf2  0202                 add al, byte ptr [edx]
// 0078eaf4  0202                 add al, byte ptr [edx]
// 0078eaf6  0202                 add al, byte ptr [edx]
// 0078eaf8  0202                 add al, byte ptr [edx]
// 0078eafa  0202                 add al, byte ptr [edx]
// 0078eafc  0202                 add al, byte ptr [edx]
// 0078eafe  0202                 add al, byte ptr [edx]
// 0078eb00  0202                 add al, byte ptr [edx]
// 0078eb02  0202                 add al, byte ptr [edx]
// 0078eb04  0202                 add al, byte ptr [edx]
// 0078eb06  0202                 add al, byte ptr [edx]
// 0078eb08  0202                 add al, byte ptr [edx]
// 0078eb0a  0202                 add al, byte ptr [edx]
// 0078eb0c  0202                 add al, byte ptr [edx]
// 0078eb0e  0202                 add al, byte ptr [edx]
// 0078eb10  0202                 add al, byte ptr [edx]
// 0078eb12  0202                 add al, byte ptr [edx]
// 0078eb14  0202                 add al, byte ptr [edx]
// 0078eb16  0202                 add al, byte ptr [edx]
// 0078eb18  0202                 add al, byte ptr [edx]
// 0078eb1a  0202                 add al, byte ptr [edx]
// 0078eb1c  0202                 add al, byte ptr [edx]
// 0078eb1e  0202                 add al, byte ptr [edx]
// 0078eb20  0202                 add al, byte ptr [edx]
// 0078eb22  0202                 add al, byte ptr [edx]
// 0078eb24  0202                 add al, byte ptr [edx]
// 0078eb26  0202                 add al, byte ptr [edx]
// 0078eb28  0202                 add al, byte ptr [edx]
// 0078eb2a  0202                 add al, byte ptr [edx]
// 0078eb2c  0202                 add al, byte ptr [edx]
// 0078eb2e  0202                 add al, byte ptr [edx]
// 0078eb30  0202                 add al, byte ptr [edx]
// 0078eb32  0202                 add al, byte ptr [edx]
// 0078eb34  0202                 add al, byte ptr [edx]
// 0078eb36  0202                 add al, byte ptr [edx]
// 0078eb38  0202                 add al, byte ptr [edx]
// 0078eb3a  0202                 add al, byte ptr [edx]
// 0078eb3c  0202                 add al, byte ptr [edx]
// 0078eb3e  0202                 add al, byte ptr [edx]
// 0078eb40  0202                 add al, byte ptr [edx]
// 0078eb42  0202                 add al, byte ptr [edx]
// 0078eb44  0202                 add al, byte ptr [edx]
// 0078eb46  0202                 add al, byte ptr [edx]
// 0078eb48  0202                 add al, byte ptr [edx]
// 0078eb4a  0202                 add al, byte ptr [edx]
// 0078eb4c  0202                 add al, byte ptr [edx]
// 0078eb4e  0202                 add al, byte ptr [edx]
// 0078eb50  0202                 add al, byte ptr [edx]
// 0078eb52  0202                 add al, byte ptr [edx]
// 0078eb54  0202                 add al, byte ptr [edx]
// 0078eb56  0202                 add al, byte ptr [edx]
// 0078eb58  0202                 add al, byte ptr [edx]
// 0078eb5a  0202                 add al, byte ptr [edx]
// copied from an identical function in another client (function ?RelayToolTipEvent@CXTPPropertyGridView@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp