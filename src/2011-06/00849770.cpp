// roc 2011-06 00849770  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849770
//
// 00849770  83ec08               sub esp, 8
// 00849773  56                   push esi
// 00849774  8bf1                 mov esi, ecx
// 00849776  837e0400             cmp dword ptr [esi + 4], 0
// 0084977a  750f                 jne 0x84978b
// 0084977c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084977f  e8aa0efcff           call 0x80a62e
// 00849784  5e                   pop esi
// 00849785  83c408               add esp, 8
// 00849788  c20c00               ret 0xc
// 0084978b  53                   push ebx
// 0084978c  57                   push edi
// 0084978d  8b3d601aa400         mov edi, dword ptr [0xa41a60]
// 00849793  6a11                 push 0x11
// 00849795  ffd7                 call edi
// 00849797  33db                 xor ebx, ebx
// 00849799  6685c0               test ax, ax
// 0084979c  0f9cc3               setl bl
// 0084979f  6a10                 push 0x10
// 008497a1  895c2414             mov dword ptr [esp + 0x14], ebx
// 008497a5  ffd7                 call edi
// 008497a7  33c9                 xor ecx, ecx
// 008497a9  6685c0               test ax, ax
// 008497ac  0f9cc1               setl cl
// 008497af  8bc1                 mov eax, ecx
// 008497b1  8944240c             mov dword ptr [esp + 0xc], eax
// 008497b5  85db                 test ebx, ebx
// 008497b7  7530                 jne 0x8497e9
// 008497b9  85c0                 test eax, eax
// 008497bb  752c                 jne 0x8497e9
// 008497bd  8bce                 mov ecx, esi
// 008497bf  e8ccf8ffff           call 0x849090
// 008497c4  83f801               cmp eax, 1
// 008497c7  7715                 ja 0x8497de
// 008497c9  751e                 jne 0x8497e9
// 008497cb  8bce                 mov ecx, esi
// 008497cd  e87edbffff           call 0x847350
// 008497d2  50                   push eax
// 008497d3  8bce                 mov ecx, esi
// 008497d5  e8e6d7ffff           call 0x846fc0
// 008497da  85c0                 test eax, eax
// 008497dc  750b                 jne 0x8497e9
// 008497de  6a00                 push 0
// 008497e0  6a00                 push 0
// 008497e2  8bce                 mov ecx, esi
// 008497e4  e837e8ffff           call 0x848020
// 008497e9  55                   push ebp
// 008497ea  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008497ee  8d45df               lea eax, [ebp - 0x21]
// 008497f1  33ff                 xor edi, edi
// 008497f3  83f807               cmp eax, 7
// 008497f6  773c                 ja 0x849834
// 008497f8  0fb690e4988400       movzx edx, byte ptr [eax + 0x8498e4]
// 008497ff  ff2495dc988400       jmp dword ptr [edx*4 + 0x8498dc]
// 00849806  8b4634               mov eax, dword ptr [esi + 0x34]
// 00849809  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084980c  6a00                 push 0
// 0084980e  6a09                 push 9
// 00849810  680a110000           push 0x110a
// 00849815  50                   push eax
// 00849816  ff15c019a400         call dword ptr [0xa419c0]
// 0084981c  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00849820  8bf8                 mov edi, eax
// 00849822  7503                 jne 0x849827
// 00849824  897e0c               mov dword ptr [esi + 0xc], edi
// 00849827  85db                 test ebx, ebx
// 00849829  7509                 jne 0x849834
// 0084982b  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0084982f  7503                 jne 0x849834
// 00849831  895e0c               mov dword ptr [esi + 0xc], ebx
// 00849834  83fd26               cmp ebp, 0x26
// 00849837  7409                 je 0x849842
// 00849839  83fd21               cmp ebp, 0x21
// 0084983c  7404                 je 0x849842
// 0084983e  33db                 xor ebx, ebx
// 00849840  eb05                 jmp 0x849847
// 00849842  bb01000000           mov ebx, 1
// 00849847  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084984a  e8df0dfcff           call 0x80a62e
// 0084984f  85ff                 test edi, edi
// 00849851  747c                 je 0x8498cf
// 00849853  837c241400           cmp dword ptr [esp + 0x14], 0
// 00849858  7507                 jne 0x849861
// 0084985a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0084985f  746e                 je 0x8498cf
// 00849861  83fd22               cmp ebp, 0x22
// 00849864  741b                 je 0x849881
// 00849866  83fd21               cmp ebp, 0x21
// 00849869  7416                 je 0x849881
// 0084986b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084986e  57                   push edi
// 0084986f  85db                 test ebx, ebx
// 00849871  7407                 je 0x84987a
// 00849873  e868daffff           call 0x8472e0
// 00849878  eb1d                 jmp 0x849897
// 0084987a  e841daffff           call 0x8472c0
// 0084987f  eb16                 jmp 0x849897
// 00849881  8b4634               mov eax, dword ptr [esi + 0x34]
// 00849884  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00849887  6a00                 push 0
// 00849889  6a09                 push 9
// 0084988b  680a110000           push 0x110a
// 00849890  51                   push ecx
// 00849891  ff15c019a400         call dword ptr [0xa419c0]
// 00849897  85c0                 test eax, eax
// 00849899  7502                 jne 0x84989d
// 0084989b  8bc7                 mov eax, edi
// 0084989d  837c241000           cmp dword ptr [esp + 0x10], 0
// 008498a2  7418                 je 0x8498bc
// 008498a4  8b560c               mov edx, dword ptr [esi + 0xc]
// 008498a7  6a01                 push 1
// 008498a9  50                   push eax
// 008498aa  52                   push edx
// 008498ab  8bce                 mov ecx, esi
// 008498ad  e87ee8ffff           call 0x848130
// 008498b2  5d                   pop ebp
// 008498b3  5f                   pop edi
// 008498b4  5b                   pop ebx
// 008498b5  5e                   pop esi
// 008498b6  83c408               add esp, 8
// 008498b9  c20c00               ret 0xc
// 008498bc  837c241400           cmp dword ptr [esp + 0x14], 0
// 008498c1  740c                 je 0x8498cf
// 008498c3  6a01                 push 1
// 008498c5  6a01                 push 1
// 008498c7  50                   push eax
// 008498c8  8bce                 mov ecx, esi
// 008498ca  e891e2ffff           call 0x847b60
// 008498cf  5d                   pop ebp
// 008498d0  5f                   pop edi
// 008498d1  5b                   pop ebx
// 008498d2  5e                   pop esi
// 008498d3  83c408               add esp, 8
// 008498d6  c20c00               ret 0xc
// 008498d9  8d4900               lea ecx, [ecx]
// 008498dc  06                   push es
// 008498dd  98                   cwde 
// 008498de  8400                 test byte ptr [eax], al
// 008498e0  3498                 xor al, 0x98
// 008498e2  8400                 test byte ptr [eax], al
// 008498e4  0000                 add byte ptr [eax], al
// 008498e6  0101                 add dword ptr [ecx], eax
// 008498e8  0100                 add dword ptr [eax], eax
// 008498ea  0100                 add dword ptr [eax], eax
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
