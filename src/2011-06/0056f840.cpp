// roc 2011-06 0056f840  unit: seg_00560000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056f840
//
// 0056f840  53                   push ebx
// 0056f841  56                   push esi
// 0056f842  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056f846  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0056f84c  57                   push edi
// 0056f84d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056f851  89442410             mov dword ptr [esp + 0x10], eax
// 0056f855  3bf8                 cmp edi, eax
// 0056f857  7631                 jbe 0x56f88a
// 0056f859  55                   push ebp
// 0056f85a  8d9b00000000         lea ebx, [ebx]
// 0056f860  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 0056f866  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 0056f86c  53                   push ebx
// 0056f86d  55                   push ebp
// 0056f86e  56                   push esi
// 0056f86f  e8fc16ffff           call 0x560f70
// 0056f874  53                   push ebx
// 0056f875  55                   push ebp
// 0056f876  56                   push esi
// 0056f877  e8d40ffeff           call 0x550850
// 0056f87c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056f880  2bf8                 sub edi, eax
// 0056f882  83c418               add esp, 0x18
// 0056f885  3bf8                 cmp edi, eax
// 0056f887  77d7                 ja 0x56f860
// 0056f889  5d                   pop ebp
// 0056f88a  85ff                 test edi, edi
// 0056f88c  7419                 je 0x56f8a7
// 0056f88e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0056f894  57                   push edi
// 0056f895  53                   push ebx
// 0056f896  56                   push esi
// 0056f897  e8d416ffff           call 0x560f70
// 0056f89c  57                   push edi
// 0056f89d  53                   push ebx
// 0056f89e  56                   push esi
// 0056f89f  e8ac0ffeff           call 0x550850
// 0056f8a4  83c418               add esp, 0x18
// 0056f8a7  56                   push esi
// 0056f8a8  e853eeffff           call 0x56e700
// 0056f8ad  83c404               add esp, 4
// 0056f8b0  85c0                 test eax, eax
// 0056f8b2  744e                 je 0x56f902
// 0056f8b4  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 0056f8ba  2420                 and al, 0x20
// 0056f8bc  7409                 je 0x56f8c7
// 0056f8be  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 0056f8c5  740d                 je 0x56f8d4
// 0056f8c7  84c0                 test al, al
// 0056f8c9  7520                 jne 0x56f8eb
// 0056f8cb  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 0056f8d2  7417                 je 0x56f8eb
// 0056f8d4  681464a800           push 0xa86414
// 0056f8d9  56                   push esi
// 0056f8da  e8b11bffff           call 0x561490
// 0056f8df  83c408               add esp, 8
// 0056f8e2  5f                   pop edi
// 0056f8e3  5e                   pop esi
// 0056f8e4  b801000000           mov eax, 1
// 0056f8e9  5b                   pop ebx
// 0056f8ea  c3                   ret 
// 0056f8eb  681464a800           push 0xa86414
// 0056f8f0  56                   push esi
// 0056f8f1  e84a1bffff           call 0x561440
// 0056f8f6  83c408               add esp, 8
// 0056f8f9  5f                   pop edi
// 0056f8fa  5e                   pop esi
// 0056f8fb  b801000000           mov eax, 1
// 0056f900  5b                   pop ebx
// 0056f901  c3                   ret 
// 0056f902  5f                   pop edi
// 0056f903  5e                   pop esi
// 0056f904  33c0                 xor eax, eax
// 0056f906  5b                   pop ebx
// 0056f907  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
