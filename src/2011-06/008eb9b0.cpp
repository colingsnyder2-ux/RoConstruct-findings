// from server: 100% by auto
// roc 2011-06 008eb9b0  unit: CXTColorPageCustom  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eb9b0
//
// 008eb9b0  83ec10               sub esp, 0x10
// 008eb9b3  56                   push esi
// 008eb9b4  57                   push edi
// 008eb9b5  8bf1                 mov esi, ecx
// 008eb9b7  e8c6eff1ff           call 0x80a982
// 008eb9bc  8d8614070000         lea eax, [esi + 0x714]
// 008eb9c2  85c0                 test eax, eax
// 008eb9c4  7403                 je 0x8eb9c9
// 008eb9c6  8b4020               mov eax, dword ptr [eax + 0x20]
// 008eb9c9  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008eb9cf  6a00                 push 0
// 008eb9d1  50                   push eax
// 008eb9d2  8b8698030000         mov eax, dword ptr [esi + 0x398]
// 008eb9d8  6869040000           push 0x469
// 008eb9dd  50                   push eax
// 008eb9de  ffd7                 call edi
// 008eb9e0  50                   push eax
// 008eb9e1  e842e9f1ff           call 0x80a328
// 008eb9e6  8b8e98030000         mov ecx, dword ptr [esi + 0x398]
// 008eb9ec  68ff000000           push 0xff
// 008eb9f1  6a00                 push 0
// 008eb9f3  6865040000           push 0x465
// 008eb9f8  51                   push ecx
// 008eb9f9  ffd7                 call edi
// 008eb9fb  8d866c060000         lea eax, [esi + 0x66c]
// 008eba01  85c0                 test eax, eax
// 008eba03  7403                 je 0x8eba08
// 008eba05  8b4020               mov eax, dword ptr [eax + 0x20]
// 008eba08  8b9640040000         mov edx, dword ptr [esi + 0x440]
// 008eba0e  6a00                 push 0
// 008eba10  50                   push eax
// 008eba11  6869040000           push 0x469
// 008eba16  52                   push edx
// 008eba17  ffd7                 call edi
// 008eba19  50                   push eax
// 008eba1a  e809e9f1ff           call 0x80a328
// 008eba1f  8b8640040000         mov eax, dword ptr [esi + 0x440]
// 008eba25  68ff000000           push 0xff
// 008eba2a  6a00                 push 0
// 008eba2c  6865040000           push 0x465
// 008eba31  50                   push eax
// 008eba32  ffd7                 call edi
// 008eba34  8d8670050000         lea eax, [esi + 0x570]
// 008eba3a  85c0                 test eax, eax
// 008eba3c  7403                 je 0x8eba41
// 008eba3e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008eba41  8b8e94040000         mov ecx, dword ptr [esi + 0x494]
// 008eba47  6a00                 push 0
// 008eba49  50                   push eax
// 008eba4a  6869040000           push 0x469
// 008eba4f  51                   push ecx
// 008eba50  ffd7                 call edi
// 008eba52  50                   push eax
// 008eba53  e8d0e8f1ff           call 0x80a328
// 008eba58  8b9694040000         mov edx, dword ptr [esi + 0x494]
// 008eba5e  68ff000000           push 0xff
// 008eba63  6a00                 push 0
// 008eba65  6865040000           push 0x465
// 008eba6a  52                   push edx
// 008eba6b  ffd7                 call edi
// 008eba6d  8d86c0060000         lea eax, [esi + 0x6c0]
// 008eba73  85c0                 test eax, eax
// 008eba75  7403                 je 0x8eba7a
// 008eba77  8b4020               mov eax, dword ptr [eax + 0x20]
// 008eba7a  6a00                 push 0
// 008eba7c  50                   push eax
// 008eba7d  8b86ec030000         mov eax, dword ptr [esi + 0x3ec]
// 008eba83  6869040000           push 0x469
// 008eba88  50                   push eax
// 008eba89  ffd7                 call edi
// 008eba8b  50                   push eax
// 008eba8c  e897e8f1ff           call 0x80a328
// 008eba91  8b8eec030000         mov ecx, dword ptr [esi + 0x3ec]
// 008eba97  68ff000000           push 0xff
// 008eba9c  6a00                 push 0
// 008eba9e  6865040000           push 0x465
// 008ebaa3  51                   push ecx
// 008ebaa4  ffd7                 call edi
// 008ebaa6  8d86c4050000         lea eax, [esi + 0x5c4]
// 008ebaac  85c0                 test eax, eax
// 008ebaae  7403                 je 0x8ebab3
// 008ebab0  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ebab3  8b96e8040000         mov edx, dword ptr [esi + 0x4e8]
// 008ebab9  6a00                 push 0
// 008ebabb  50                   push eax
// 008ebabc  6869040000           push 0x469
// 008ebac1  52                   push edx
// 008ebac2  ffd7                 call edi
// 008ebac4  50                   push eax
// 008ebac5  e85ee8f1ff           call 0x80a328
// 008ebaca  8b86e8040000         mov eax, dword ptr [esi + 0x4e8]
// 008ebad0  68ff000000           push 0xff
// 008ebad5  6a00                 push 0
// 008ebad7  6865040000           push 0x465
// 008ebadc  50                   push eax
// 008ebadd  ffd7                 call edi
// 008ebadf  8d8618060000         lea eax, [esi + 0x618]
// 008ebae5  85c0                 test eax, eax
// 008ebae7  7403                 je 0x8ebaec
// 008ebae9  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ebaec  8b8e3c050000         mov ecx, dword ptr [esi + 0x53c]
// 008ebaf2  6a00                 push 0
// 008ebaf4  50                   push eax
// 008ebaf5  6869040000           push 0x469
// 008ebafa  51                   push ecx
// 008ebafb  ffd7                 call edi
// 008ebafd  50                   push eax
// 008ebafe  e825e8f1ff           call 0x80a328
// 008ebb03  8b963c050000         mov edx, dword ptr [esi + 0x53c]
// 008ebb09  68ff000000           push 0xff
// 008ebb0e  6a00                 push 0
// 008ebb10  6865040000           push 0x465
// 008ebb15  52                   push edx
// 008ebb16  ffd7                 call edi
// 008ebb18  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 008ebb1e  8d442408             lea eax, [esp + 8]
// 008ebb22  50                   push eax
// 008ebb23  51                   push ecx
// 008ebb24  ff155c1ca400         call dword ptr [0xa41c5c]
// 008ebb2a  8d542408             lea edx, [esp + 8]
// 008ebb2e  52                   push edx
// 008ebb2f  8bce                 mov ecx, esi
// 008ebb31  e8d0f4f1ff           call 0x80b006
// 008ebb36  6a04                 push 4
// 008ebb38  6a00                 push 0
// 008ebb3a  8d442410             lea eax, [esp + 0x10]
// 008ebb3e  50                   push eax
// 008ebb3f  ff15e41ba400         call dword ptr [0xa41be4]
// 008ebb45  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ebb49  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ebb4d  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ebb51  6a01                 push 1
// 008ebb53  2bc8                 sub ecx, eax
// 008ebb55  51                   push ecx
// 008ebb56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ebb5a  2bd1                 sub edx, ecx
// 008ebb5c  52                   push edx
// 008ebb5d  50                   push eax
// 008ebb5e  51                   push ecx
// 008ebb5f  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebb65  e8c6e8f1ff           call 0x80a430
// 008ebb6a  5f                   pop edi
// 008ebb6b  b801000000           mov eax, 1
// 008ebb70  5e                   pop esi
// 008ebb71  83c410               add esp, 0x10
// 008ebb74  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnInitDialog@CXTPColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
