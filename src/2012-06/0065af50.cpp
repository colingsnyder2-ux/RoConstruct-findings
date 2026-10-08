// from server: 100% by auto
// roc 2012-06 0065af50  unit: seg_00650000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065af50
//
// 0065af50  53                   push ebx
// 0065af51  56                   push esi
// 0065af52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065af56  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0065af5c  57                   push edi
// 0065af5d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065af61  89442410             mov dword ptr [esp + 0x10], eax
// 0065af65  3bf8                 cmp edi, eax
// 0065af67  7631                 jbe 0x65af9a
// 0065af69  55                   push ebp
// 0065af6a  8d9b00000000         lea ebx, [ebx]
// 0065af70  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 0065af76  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 0065af7c  53                   push ebx
// 0065af7d  55                   push ebp
// 0065af7e  56                   push esi
// 0065af7f  e86c2effff           call 0x64ddf0
// 0065af84  53                   push ebx
// 0065af85  55                   push ebp
// 0065af86  56                   push esi
// 0065af87  e8042ffeff           call 0x63de90
// 0065af8c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065af90  2bf8                 sub edi, eax
// 0065af92  83c418               add esp, 0x18
// 0065af95  3bf8                 cmp edi, eax
// 0065af97  77d7                 ja 0x65af70
// 0065af99  5d                   pop ebp
// 0065af9a  85ff                 test edi, edi
// 0065af9c  7419                 je 0x65afb7
// 0065af9e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0065afa4  57                   push edi
// 0065afa5  53                   push ebx
// 0065afa6  56                   push esi
// 0065afa7  e8442effff           call 0x64ddf0
// 0065afac  57                   push edi
// 0065afad  53                   push ebx
// 0065afae  56                   push esi
// 0065afaf  e8dc2efeff           call 0x63de90
// 0065afb4  83c418               add esp, 0x18
// 0065afb7  56                   push esi
// 0065afb8  e853eeffff           call 0x659e10
// 0065afbd  83c404               add esp, 4
// 0065afc0  85c0                 test eax, eax
// 0065afc2  744e                 je 0x65b012
// 0065afc4  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 0065afca  2420                 and al, 0x20
// 0065afcc  7409                 je 0x65afd7
// 0065afce  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 0065afd5  740d                 je 0x65afe4
// 0065afd7  84c0                 test al, al
// 0065afd9  7520                 jne 0x65affb
// 0065afdb  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 0065afe2  7417                 je 0x65affb
// 0065afe4  6864a2b800           push 0xb8a264
// 0065afe9  56                   push esi
// 0065afea  e82133ffff           call 0x64e310
// 0065afef  83c408               add esp, 8
// 0065aff2  5f                   pop edi
// 0065aff3  5e                   pop esi
// 0065aff4  b801000000           mov eax, 1
// 0065aff9  5b                   pop ebx
// 0065affa  c3                   ret 
// 0065affb  6864a2b800           push 0xb8a264
// 0065b000  56                   push esi
// 0065b001  e8ba32ffff           call 0x64e2c0
// 0065b006  83c408               add esp, 8
// 0065b009  5f                   pop edi
// 0065b00a  5e                   pop esi
// 0065b00b  b801000000           mov eax, 1
// 0065b010  5b                   pop ebx
// 0065b011  c3                   ret 
// 0065b012  5f                   pop edi
// 0065b013  5e                   pop esi
// 0065b014  33c0                 xor eax, eax
// 0065b016  5b                   pop ebx
// 0065b017  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
