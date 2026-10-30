// roc 2009-12 00853a70  unit: CXTPPropExchangeXMLNode  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853a70
//
// 00853a70  6aff                 push -1
// 00853a72  68badd9500           push 0x95ddba
// 00853a77  64a100000000         mov eax, dword ptr fs:[0]
// 00853a7d  50                   push eax
// 00853a7e  83ec08               sub esp, 8
// 00853a81  53                   push ebx
// 00853a82  55                   push ebp
// 00853a83  56                   push esi
// 00853a84  57                   push edi
// 00853a85  a10052b600           mov eax, dword ptr [0xb65200]
// 00853a8a  33c4                 xor eax, esp
// 00853a8c  50                   push eax
// 00853a8d  8d44241c             lea eax, [esp + 0x1c]
// 00853a91  64a300000000         mov dword ptr fs:[0], eax
// 00853a97  8bf1                 mov esi, ecx
// 00853a99  33db                 xor ebx, ebx
// 00853a9b  395e28               cmp dword ptr [esi + 0x28], ebx
// 00853a9e  0f8437010000         je 0x853bdb
// 00853aa4  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00853aa7  7504                 jne 0x853aad
// 00853aa9  33ed                 xor ebp, ebp
// 00853aab  eb04                 jmp 0x853ab1
// 00853aad  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00853ab1  8b06                 mov eax, dword ptr [esi]
// 00853ab3  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00853ab9  ffd2                 call edx
// 00853abb  85c0                 test eax, eax
// 00853abd  7517                 jne 0x853ad6
// 00853abf  8b442434             mov eax, dword ptr [esp + 0x34]
// 00853ac3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00853ac7  55                   push ebp
// 00853ac8  50                   push eax
// 00853ac9  51                   push ecx
// 00853aca  8bce                 mov ecx, esi
// 00853acc  e84fdaffff           call 0x851520
// 00853ad1  e940020000           jmp 0x853d16
// 00853ad6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00853ada  53                   push ebx
// 00853adb  52                   push edx
// 00853adc  8d442434             lea eax, [esp + 0x34]
// 00853ae0  50                   push eax
// 00853ae1  8bce                 mov ecx, esi
// 00853ae3  e878eaffff           call 0x852560
// 00853ae8  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00853aec  85ff                 test edi, edi
// 00853aee  0f94c0               sete al
// 00853af1  895c2424             mov dword ptr [esp + 0x24], ebx
// 00853af5  84c0                 test al, al
// 00853af7  742f                 je 0x853b28
// 00853af9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00853afd  8b542430             mov edx, dword ptr [esp + 0x30]
// 00853b01  55                   push ebp
// 00853b02  51                   push ecx
// 00853b03  52                   push edx
// 00853b04  8bce                 mov ecx, esi
// 00853b06  e815daffff           call 0x851520
// 00853b0b  8bf0                 mov esi, eax
// 00853b0d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00853b15  85ff                 test edi, edi
// 00853b17  7408                 je 0x853b21
// 00853b19  8b07                 mov eax, dword ptr [edi]
// 00853b1b  8b4808               mov ecx, dword ptr [eax + 8]
// 00853b1e  57                   push edi
// 00853b1f  ffd1                 call ecx
// 00853b21  8bc6                 mov eax, esi
// 00853b23  e9ee010000           jmp 0x853d16
// 00853b28  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00853b30  85ff                 test edi, edi
// 00853b32  750a                 jne 0x853b3e
// 00853b34  6803400080           push 0x80004003
// 00853b39  e8c21dfaff           call 0x7f5900
// 00853b3e  8b17                 mov edx, dword ptr [edi]
// 00853b40  8b4a68               mov ecx, dword ptr [edx + 0x68]
// 00853b43  8d442438             lea eax, [esp + 0x38]
// 00853b47  50                   push eax
// 00853b48  57                   push edi
// 00853b49  ffd1                 call ecx
// 00853b4b  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00853b4f  6683fb08             cmp bx, 8
// 00853b53  752b                 jne 0x853b80
// 00853b55  8b542438             mov edx, dword ptr [esp + 0x38]
// 00853b59  52                   push edx
// 00853b5a  8bce                 mov ecx, esi
// 00853b5c  e8efc7ffff           call 0x850350
// 00853b61  8b442434             mov eax, dword ptr [esp + 0x34]
// 00853b65  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00853b69  8908                 mov dword ptr [eax], ecx
// 00853b6b  8b17                 mov edx, dword ptr [edi]
// 00853b6d  8b4208               mov eax, dword ptr [edx + 8]
// 00853b70  57                   push edi
// 00853b71  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00853b79  ffd0                 call eax
// 00853b7b  e991010000           jmp 0x853d11
// 00853b80  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00853b84  51                   push ecx
// 00853b85  8d542418             lea edx, [esp + 0x18]
// 00853b89  52                   push edx
// 00853b8a  8bce                 mov ecx, esi
// 00853b8c  e85fcdffff           call 0x8508f0
// 00853b91  8b442438             mov eax, dword ptr [esp + 0x38]
// 00853b95  c644242401           mov byte ptr [esp + 0x24], 1
// 00853b9a  85c0                 test eax, eax
// 00853b9c  7407                 je 0x853ba5
// 00853b9e  50                   push eax
// 00853b9f  ff1590ba9800         call dword ptr [0x98ba90]
// 00853ba5  8b442434             mov eax, dword ptr [esp + 0x34]
// 00853ba9  55                   push ebp
// 00853baa  50                   push eax
// 00853bab  53                   push ebx
// 00853bac  8d4c2420             lea ecx, [esp + 0x20]
// 00853bb0  51                   push ecx
// 00853bb1  8bce                 mov ecx, esi
// 00853bb3  e898f4ffff           call 0x853050
// 00853bb8  8d4c2414             lea ecx, [esp + 0x14]
// 00853bbc  8bf0                 mov esi, eax
// 00853bbe  ff15c0de9800         call dword ptr [0x98dec0]
// 00853bc4  8b17                 mov edx, dword ptr [edi]
// 00853bc6  8b4208               mov eax, dword ptr [edx + 8]
// 00853bc9  57                   push edi
// 00853bca  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00853bd2  ffd0                 call eax
// 00853bd4  8bc6                 mov eax, esi
// 00853bd6  e93b010000           jmp 0x853d16
// 00853bdb  395e40               cmp dword ptr [esi + 0x40], ebx
// 00853bde  7404                 je 0x853be4
// 00853be0  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00853be4  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00853be8  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00853bec  53                   push ebx
// 00853bed  55                   push ebp
// 00853bee  57                   push edi
// 00853bef  e85cd7ffff           call 0x851350
// 00853bf4  85c0                 test eax, eax
// 00853bf6  0f8515010000         jne 0x853d11
// 00853bfc  8b16                 mov edx, dword ptr [esi]
// 00853bfe  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 00853c04  8bce                 mov ecx, esi
// 00853c06  ffd0                 call eax
// 00853c08  85c0                 test eax, eax
// 00853c0a  0f8498000000         je 0x853ca8
// 00853c10  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00853c14  6a01                 push 1
// 00853c16  51                   push ecx
// 00853c17  8d542438             lea edx, [esp + 0x38]
// 00853c1b  52                   push edx
// 00853c1c  8bce                 mov ecx, esi
// 00853c1e  e83de9ffff           call 0x852560
// 00853c23  c744242402000000     mov dword ptr [esp + 0x24], 2
// 00853c2b  6683ff08             cmp di, 8
// 00853c2f  7533                 jne 0x853c64
// 00853c31  8b742430             mov esi, dword ptr [esp + 0x30]
// 00853c35  85f6                 test esi, esi
// 00853c37  750a                 jne 0x853c43
// 00853c39  6803400080           push 0x80004003
// 00853c3e  e8bd1cfaff           call 0x7f5900
// 00853c43  8b4d00               mov ecx, dword ptr [ebp]
// 00853c46  8b06                 mov eax, dword ptr [esi]
// 00853c48  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00853c4b  51                   push ecx
// 00853c4c  56                   push esi
// 00853c4d  ffd2                 call edx
// 00853c4f  8b06                 mov eax, dword ptr [esi]
// 00853c51  8b4808               mov ecx, dword ptr [eax + 8]
// 00853c54  56                   push esi
// 00853c55  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00853c5d  ffd1                 call ecx
// 00853c5f  e9ad000000           jmp 0x853d11
// 00853c64  8d4c2434             lea ecx, [esp + 0x34]
// 00853c68  ff1574de9800         call dword ptr [0x98de74]
// 00853c6e  53                   push ebx
// 00853c6f  55                   push ebp
// 00853c70  57                   push edi
// 00853c71  8d542440             lea edx, [esp + 0x40]
// 00853c75  52                   push edx
// 00853c76  8bce                 mov ecx, esi
// 00853c78  c644243403           mov byte ptr [esp + 0x34], 3
// 00853c7d  e8cef3ffff           call 0x853050
// 00853c82  85c0                 test eax, eax
// 00853c84  7526                 jne 0x853cac
// 00853c86  8d4c2434             lea ecx, [esp + 0x34]
// 00853c8a  ff15c0de9800         call dword ptr [0x98dec0]
// 00853c90  8b442430             mov eax, dword ptr [esp + 0x30]
// 00853c94  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00853c9c  85c0                 test eax, eax
// 00853c9e  7408                 je 0x853ca8
// 00853ca0  8b08                 mov ecx, dword ptr [eax]
// 00853ca2  8b5108               mov edx, dword ptr [ecx + 8]
// 00853ca5  50                   push eax
// 00853ca6  ffd2                 call edx
// 00853ca8  33c0                 xor eax, eax
// 00853caa  eb6a                 jmp 0x853d16
// 00853cac  8b742430             mov esi, dword ptr [esp + 0x30]
// 00853cb0  85f6                 test esi, esi
// 00853cb2  750a                 jne 0x853cbe
// 00853cb4  6803400080           push 0x80004003
// 00853cb9  e8421cfaff           call 0x7f5900
// 00853cbe  8d4c2434             lea ecx, [esp + 0x34]
// 00853cc2  ff1580de9800         call dword ptr [0x98de80]
// 00853cc8  50                   push eax
// 00853cc9  8d4c241c             lea ecx, [esp + 0x1c]
// 00853ccd  e8beac0100           call 0x86e990
// 00853cd2  8b3e                 mov edi, dword ptr [esi]
// 00853cd4  8bc8                 mov ecx, eax
// 00853cd6  c644242404           mov byte ptr [esp + 0x24], 4
// 00853cdb  83c76c               add edi, 0x6c
// 00853cde  e88db9cdff           call 0x52f670
// 00853ce3  50                   push eax
// 00853ce4  8b07                 mov eax, dword ptr [edi]
// 00853ce6  56                   push esi
// 00853ce7  ffd0                 call eax
// 00853ce9  8d4c2418             lea ecx, [esp + 0x18]
// 00853ced  c644242403           mov byte ptr [esp + 0x24], 3
// 00853cf2  e879a30100           call 0x86e070
// 00853cf7  8d4c2434             lea ecx, [esp + 0x34]
// 00853cfb  ff15c0de9800         call dword ptr [0x98dec0]
// 00853d01  8b0e                 mov ecx, dword ptr [esi]
// 00853d03  8b5108               mov edx, dword ptr [ecx + 8]
// 00853d06  56                   push esi
// 00853d07  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00853d0f  ffd2                 call edx
// 00853d11  b801000000           mov eax, 1
// 00853d16  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00853d1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00853d21  59                   pop ecx
// 00853d22  5f                   pop edi
// 00853d23  5e                   pop esi
// 00853d24  5d                   pop ebp
// 00853d25  5b                   pop ebx
// 00853d26  83c414               add esp, 0x14
// 00853d29  c21000               ret 0x10
// copied from an identical function in another client (function ?ExchangeProp@CXTPPropExchangeXMLNode@@UAEHPBDGPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp