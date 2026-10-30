// roc 2009-12 008699c0  unit: CXTPPropertyGridView  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008699c0
//
// 008699c0  83ec18               sub esp, 0x18
// 008699c3  56                   push esi
// 008699c4  8bf1                 mov esi, ecx
// 008699c6  57                   push edi
// 008699c7  8dbee8000000         lea edi, [esi + 0xe8]
// 008699cd  85ff                 test edi, edi
// 008699cf  0f84f6000000         je 0x869acb
// 008699d5  837f2000             cmp dword ptr [edi + 0x20], 0
// 008699d9  0f84ec000000         je 0x869acb
// 008699df  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 008699e5  50                   push eax
// 008699e6  ff1564ca9800         call dword ptr [0x98ca64]
// 008699ec  85c0                 test eax, eax
// 008699ee  0f84d7000000         je 0x869acb
// 008699f4  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008699fa  8d4c2410             lea ecx, [esp + 0x10]
// 008699fe  51                   push ecx
// 008699ff  52                   push edx
// 00869a00  ff1570cc9800         call dword ptr [0x98cc70]
// 00869a06  8d442408             lea eax, [esp + 8]
// 00869a0a  50                   push eax
// 00869a0b  ff1538cc9800         call dword ptr [0x98cc38]
// 00869a11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00869a15  8b542408             mov edx, dword ptr [esp + 8]
// 00869a19  51                   push ecx
// 00869a1a  52                   push edx
// 00869a1b  8d86b8000000         lea eax, [esi + 0xb8]
// 00869a21  50                   push eax
// 00869a22  ff155cca9800         call dword ptr [0x98ca5c]
// 00869a28  85c0                 test eax, eax
// 00869a2a  7409                 je 0x869a35
// 00869a2c  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 00869a33  741e                 je 0x869a53
// 00869a35  6856fd9900           push 0x99fd56
// 00869a3a  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00869a40  ff155cde9800         call dword ptr [0x98de5c]
// 00869a46  6a00                 push 0
// 00869a48  6a00                 push 0
// 00869a4a  6a00                 push 0
// 00869a4c  8bcf                 mov ecx, edi
// 00869a4e  e87de2ffff           call 0x867cd0
// 00869a53  8b442424             mov eax, dword ptr [esp + 0x24]
// 00869a57  3d05020000           cmp eax, 0x205
// 00869a5c  7735                 ja 0x869a93
// 00869a5e  3d04020000           cmp eax, 0x204
// 00869a63  7359                 jae 0x869abe
// 00869a65  3d04010000           cmp eax, 0x104
// 00869a6a  7711                 ja 0x869a7d
// 00869a6c  7450                 je 0x869abe
// 00869a6e  3d00010000           cmp eax, 0x100
// 00869a73  7449                 je 0x869abe
// 00869a75  5f                   pop edi
// 00869a76  5e                   pop esi
// 00869a77  83c418               add esp, 0x18
// 00869a7a  c20400               ret 4
// 00869a7d  3d01020000           cmp eax, 0x201
// 00869a82  7247                 jb 0x869acb
// 00869a84  3d02020000           cmp eax, 0x202
// 00869a89  7633                 jbe 0x869abe
// 00869a8b  5f                   pop edi
// 00869a8c  5e                   pop esi
// 00869a8d  83c418               add esp, 0x18
// 00869a90  c20400               ret 4
// 00869a93  05f9fdffff           add eax, 0xfffffdf9
// 00869a98  3d9c000000           cmp eax, 0x9c
// 00869a9d  772c                 ja 0x869acb
// 00869a9f  0fb688e09a8600       movzx ecx, byte ptr [eax + 0x869ae0]
// 00869aa6  ff248dd49a8600       jmp dword ptr [ecx*4 + 0x869ad4]
// 00869aad  6856fd9900           push 0x99fd56
// 00869ab2  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00869ab8  ff155cde9800         call dword ptr [0x98de5c]
// 00869abe  6a00                 push 0
// 00869ac0  6a00                 push 0
// 00869ac2  6a00                 push 0
// 00869ac4  8bcf                 mov ecx, edi
// 00869ac6  e805e2ffff           call 0x867cd0
// 00869acb  5f                   pop edi
// 00869acc  5e                   pop esi
// 00869acd  83c418               add esp, 0x18
// 00869ad0  c20400               ret 4
// 00869ad3  90                   nop 
// 00869ad4  be9a8600ad           mov esi, 0xad00869a
// 00869ad9  9a8600cb9a8600       lcall 0x86, 0x9acb0086
// 00869ae0  0000                 add byte ptr [eax], al
// 00869ae2  0201                 add al, byte ptr [ecx]
// 00869ae4  0202                 add al, byte ptr [edx]
// 00869ae6  0202                 add al, byte ptr [edx]
// 00869ae8  0202                 add al, byte ptr [edx]
// 00869aea  0202                 add al, byte ptr [edx]
// 00869aec  0202                 add al, byte ptr [edx]
// 00869aee  0202                 add al, byte ptr [edx]
// 00869af0  0202                 add al, byte ptr [edx]
// 00869af2  0202                 add al, byte ptr [edx]
// 00869af4  0202                 add al, byte ptr [edx]
// 00869af6  0202                 add al, byte ptr [edx]
// 00869af8  0202                 add al, byte ptr [edx]
// 00869afa  0202                 add al, byte ptr [edx]
// 00869afc  0202                 add al, byte ptr [edx]
// 00869afe  0202                 add al, byte ptr [edx]
// 00869b00  0202                 add al, byte ptr [edx]
// 00869b02  0202                 add al, byte ptr [edx]
// 00869b04  0202                 add al, byte ptr [edx]
// 00869b06  0202                 add al, byte ptr [edx]
// 00869b08  0202                 add al, byte ptr [edx]
// 00869b0a  0202                 add al, byte ptr [edx]
// 00869b0c  0202                 add al, byte ptr [edx]
// 00869b0e  0202                 add al, byte ptr [edx]
// 00869b10  0202                 add al, byte ptr [edx]
// 00869b12  0202                 add al, byte ptr [edx]
// 00869b14  0202                 add al, byte ptr [edx]
// 00869b16  0202                 add al, byte ptr [edx]
// 00869b18  0202                 add al, byte ptr [edx]
// 00869b1a  0202                 add al, byte ptr [edx]
// 00869b1c  0202                 add al, byte ptr [edx]
// 00869b1e  0202                 add al, byte ptr [edx]
// 00869b20  0202                 add al, byte ptr [edx]
// 00869b22  0202                 add al, byte ptr [edx]
// 00869b24  0202                 add al, byte ptr [edx]
// 00869b26  0202                 add al, byte ptr [edx]
// 00869b28  0202                 add al, byte ptr [edx]
// 00869b2a  0202                 add al, byte ptr [edx]
// 00869b2c  0202                 add al, byte ptr [edx]
// 00869b2e  0202                 add al, byte ptr [edx]
// 00869b30  0202                 add al, byte ptr [edx]
// 00869b32  0202                 add al, byte ptr [edx]
// 00869b34  0202                 add al, byte ptr [edx]
// 00869b36  0202                 add al, byte ptr [edx]
// 00869b38  0202                 add al, byte ptr [edx]
// 00869b3a  0202                 add al, byte ptr [edx]
// 00869b3c  0202                 add al, byte ptr [edx]
// 00869b3e  0202                 add al, byte ptr [edx]
// 00869b40  0202                 add al, byte ptr [edx]
// 00869b42  0202                 add al, byte ptr [edx]
// 00869b44  0202                 add al, byte ptr [edx]
// 00869b46  0202                 add al, byte ptr [edx]
// 00869b48  0202                 add al, byte ptr [edx]
// 00869b4a  0202                 add al, byte ptr [edx]
// 00869b4c  0202                 add al, byte ptr [edx]
// 00869b4e  0202                 add al, byte ptr [edx]
// 00869b50  0202                 add al, byte ptr [edx]
// 00869b52  0202                 add al, byte ptr [edx]
// 00869b54  0202                 add al, byte ptr [edx]
// 00869b56  0202                 add al, byte ptr [edx]
// 00869b58  0202                 add al, byte ptr [edx]
// 00869b5a  0202                 add al, byte ptr [edx]
// 00869b5c  0202                 add al, byte ptr [edx]
// 00869b5e  0202                 add al, byte ptr [edx]
// 00869b60  0202                 add al, byte ptr [edx]
// 00869b62  0202                 add al, byte ptr [edx]
// 00869b64  0202                 add al, byte ptr [edx]
// 00869b66  0202                 add al, byte ptr [edx]
// 00869b68  0202                 add al, byte ptr [edx]
// 00869b6a  0202                 add al, byte ptr [edx]
// 00869b6c  0202                 add al, byte ptr [edx]
// 00869b6e  0202                 add al, byte ptr [edx]
// 00869b70  0202                 add al, byte ptr [edx]
// 00869b72  0202                 add al, byte ptr [edx]
// 00869b74  0202                 add al, byte ptr [edx]
// 00869b76  0202                 add al, byte ptr [edx]
// 00869b78  0202                 add al, byte ptr [edx]
// 00869b7a  0202                 add al, byte ptr [edx]
// copied from an identical function in another client (function ?RelayToolTipEvent@CXTPPropertyGridView@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp