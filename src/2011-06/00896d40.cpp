// roc 2011-06 00896d40  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00896d40
//
// 00896d40  83ec38               sub esp, 0x38
// 00896d43  53                   push ebx
// 00896d44  56                   push esi
// 00896d45  57                   push edi
// 00896d46  8bf1                 mov esi, ecx
// 00896d48  e813f7ffff           call 0x896460
// 00896d4d  e88ee6faff           call 0x8453e0
// 00896d52  d905685ba700         fld dword ptr [0xa75b68]
// 00896d58  51                   push ecx
// 00896d59  d91c24               fstp dword ptr [esp]
// 00896d5c  6a10                 push 0x10
// 00896d5e  8bce                 mov ecx, esi
// 00896d60  8bd8                 mov ebx, eax
// 00896d62  8dbe9c040000         lea edi, [esi + 0x49c]
// 00896d68  e84388f7ff           call 0x80f5b0
// 00896d6d  50                   push eax
// 00896d6e  6826020000           push 0x226
// 00896d73  6a0f                 push 0xf
// 00896d75  8bce                 mov ecx, esi
// 00896d77  e83488f7ff           call 0x80f5b0
// 00896d7c  50                   push eax
// 00896d7d  6a05                 push 5
// 00896d7f  8bce                 mov ecx, esi
// 00896d81  e82a88f7ff           call 0x80f5b0
// 00896d86  50                   push eax
// 00896d87  8bcb                 mov ecx, ebx
// 00896d89  e872ddfaff           call 0x844b00
// 00896d8e  50                   push eax
// 00896d8f  8bcf                 mov ecx, edi
// 00896d91  e87adbfaff           call 0x844910
// 00896d96  e845e6faff           call 0x8453e0
// 00896d9b  6a00                 push 0
// 00896d9d  8bc8                 mov ecx, eax
// 00896d9f  e8ccdffaff           call 0x844d70
// 00896da4  85c0                 test eax, eax
// 00896da6  7411                 je 0x896db9
// 00896da8  6a0f                 push 0xf
// 00896daa  8bce                 mov ecx, esi
// 00896dac  e8ff87f7ff           call 0x80f5b0
// 00896db1  50                   push eax
// 00896db2  8bcf                 mov ecx, edi
// 00896db4  e877e5faff           call 0x845330
// 00896db9  e822e6faff           call 0x8453e0
// 00896dbe  8bc8                 mov ecx, eax
// 00896dc0  e81be4faff           call 0x8451e0
// 00896dc5  83e801               sub eax, 1
// 00896dc8  0f846a020000         je 0x897038
// 00896dce  83e801               sub eax, 1
// 00896dd1  0f8492010000         je 0x896f69
// 00896dd7  83e801               sub eax, 1
// 00896dda  0f85f5020000         jne 0x8970d5
// 00896de0  d90548fba700         fld dword ptr [0xa7fb48]
// 00896de6  51                   push ecx
// 00896de7  d91c24               fstp dword ptr [esp]
// 00896dea  689997b500           push 0xb59799
// 00896def  68f3f4fa00           push 0xfaf4f3
// 00896df4  8d8e7c040000         lea ecx, [esi + 0x47c]
// 00896dfa  e811dbfaff           call 0x844910
// 00896dff  d90548fba700         fld dword ptr [0xa7fb48]
// 00896e05  51                   push ecx
// 00896e06  d91c24               fstp dword ptr [esp]
// 00896e09  6876749200           push 0x927476
// 00896e0e  68b3b2c800           push 0xc8b2b3
// 00896e13  8bcf                 mov ecx, edi
// 00896e15  e8f6dafaff           call 0x844910
// 00896e1a  d905685ba700         fld dword ptr [0xa75b68]
// 00896e20  51                   push ecx
// 00896e21  d91c24               fstp dword ptr [esp]
// 00896e24  68f3f3f700           push 0xf7f3f3
// 00896e29  68d7d7e500           push 0xe5d7d7
// 00896e2e  8d8e5c040000         lea ecx, [esi + 0x45c]
// 00896e34  e8d7dafaff           call 0x844910
// 00896e39  d905685ba700         fld dword ptr [0xa75b68]
// 00896e3f  51                   push ecx
// 00896e40  d91c24               fstp dword ptr [esp]
// 00896e43  688583a200           push 0xa28385
// 00896e48  68d7d7e200           push 0xe2d7d7
// 00896e4d  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00896e53  e8b8dafaff           call 0x844910
// 00896e58  d905685ba700         fld dword ptr [0xa75b68]
// 00896e5e  51                   push ecx
// 00896e5f  d91c24               fstp dword ptr [esp]
// 00896e62  68b0aec500           push 0xc5aeb0
// 00896e67  68e8e8f100           push 0xf1e8e8
// 00896e6c  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00896e72  e899dafaff           call 0x844910
// 00896e77  d905685ba700         fld dword ptr [0xa75b68]
// 00896e7d  51                   push ecx
// 00896e7e  d91c24               fstp dword ptr [esp]
// 00896e81  bf7a799900           mov edi, 0x99797a
// 00896e86  57                   push edi
// 00896e87  68f7f5f900           push 0xf9f5f7
// 00896e8c  8d4e28               lea ecx, [esi + 0x28]
// 00896e8f  c786200500007c7c9400 mov dword ptr [esi + 0x520], 0x947c7c
// 00896e99  e872dafaff           call 0x844910
// 00896e9e  b88d8d8d00           mov eax, 0x8d8d8d
// 00896ea3  898638040000         mov dword ptr [esi + 0x438], eax
// 00896ea9  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00896eaf  b84b4b6f00           mov eax, 0x6f4b4b
// 00896eb4  89442410             mov dword ptr [esp + 0x10], eax
// 00896eb8  89442414             mov dword ptr [esp + 0x14], eax
// 00896ebc  89442418             mov dword ptr [esp + 0x18], eax
// 00896ec0  8d44240c             lea eax, [esp + 0xc]
// 00896ec4  50                   push eax
// 00896ec5  8d4c242c             lea ecx, [esp + 0x2c]
// 00896ec9  51                   push ecx
// 00896eca  6a07                 push 7
// 00896ecc  8bce                 mov ecx, esi
// 00896ece  c7863c0300006e6d8f00 mov dword ptr [esi + 0x33c], 0x8f6d6e
// 00896ed8  c7863003000054547500 mov dword ptr [esi + 0x330], 0x755454
// 00896ee2  c786d0020000dbdae400 mov dword ptr [esi + 0x2d0], 0xe4dadb
// 00896eec  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 00896ef6  897e4c               mov dword ptr [esi + 0x4c], edi
// 00896ef9  89be44040000         mov dword ptr [esi + 0x444], edi
// 00896eff  c74424341f000000     mov dword ptr [esp + 0x34], 0x1f
// 00896f07  c744243820000000     mov dword ptr [esp + 0x38], 0x20
// 00896f0f  c744243c25000000     mov dword ptr [esp + 0x3c], 0x25
// 00896f17  c744244032000000     mov dword ptr [esp + 0x40], 0x32
// 00896f1f  c744244421000000     mov dword ptr [esp + 0x44], 0x21
// 00896f27  c744244824000000     mov dword ptr [esp + 0x48], 0x24
// 00896f2f  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 00896f37  c7442418ffeec200     mov dword ptr [esp + 0x18], 0xc2eeff
// 00896f3f  c7442428fe803e00     mov dword ptr [esp + 0x28], 0x3e80fe
// 00896f47  c744242cffc06f00     mov dword ptr [esp + 0x2c], 0x6fc0ff
// 00896f4f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00896f57  e88486f7ff           call 0x80f5e0
// 00896f5c  5f                   pop edi
// 00896f5d  8bce                 mov ecx, esi
// 00896f5f  5e                   pop esi
// 00896f60  5b                   pop ebx
// 00896f61  83c438               add esp, 0x38
// 00896f64  e907e6ffff           jmp 0x895570
// 00896f69  d90548fba700         fld dword ptr [0xa7fb48]
// 00896f6f  51                   push ecx
// 00896f70  d91c24               fstp dword ptr [esp]
// 00896f73  68c0c0a800           push 0xa8c0c0
// 00896f78  8d9e7c040000         lea ebx, [esi + 0x47c]
// 00896f7e  68faf9f500           push 0xf5f9fa
// 00896f83  8bcb                 mov ecx, ebx
// 00896f85  e886d9faff           call 0x844910
// 00896f8a  d90548fba700         fld dword ptr [0xa7fb48]
// 00896f90  51                   push ecx
// 00896f91  d91c24               fstp dword ptr [esp]
// 00896f94  68b0ac9e00           push 0x9eacb0
// 00896f99  68eeedea00           push 0xeaedee
// 00896f9e  8bcf                 mov ecx, edi
// 00896fa0  e86bd9faff           call 0x844910
// 00896fa5  d905685ba700         fld dword ptr [0xa75b68]
// 00896fab  51                   push ecx
// 00896fac  d91c24               fstp dword ptr [esp]
// 00896faf  68f4f1e700           push 0xe7f1f4
// 00896fb4  68e5e5d700           push 0xd7e5e5
// 00896fb9  8d8e5c040000         lea ecx, [esi + 0x45c]
// 00896fbf  e84cd9faff           call 0x844910
// 00896fc4  68ccc7ba00           push 0xbac7cc
// 00896fc9  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00896fcf  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 00896fd9  e852e3faff           call 0x845330
// 00896fde  53                   push ebx
// 00896fdf  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00896fe5  e846d9faff           call 0x844930
// 00896fea  d905685ba700         fld dword ptr [0xa75b68]
// 00896ff0  51                   push ecx
// 00896ff1  d91c24               fstp dword ptr [esp]
// 00896ff4  68aca89900           push 0x99a8ac
// 00896ff9  68ece9d800           push 0xd8e9ec
// 00896ffe  8d4e28               lea ecx, [esi + 0x28]
// 00897001  e80ad9faff           call 0x844910
// 00897006  b8b6c68d00           mov eax, 0x8dc6b6
// 0089700b  5f                   pop edi
// 0089700c  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 00897012  c786f402000093a07000 mov dword ptr [esi + 0x2f4], 0x70a093
// 0089701c  898618030000         mov dword ptr [esi + 0x318], eax
// 00897022  c7869c030000ffffff00 mov dword ptr [esi + 0x39c], 0xffffff
// 0089702c  8bce                 mov ecx, esi
// 0089702e  5e                   pop esi
// 0089702f  5b                   pop ebx
// 00897030  83c438               add esp, 0x38
// 00897033  e938e5ffff           jmp 0x895570
// 00897038  d90548fba700         fld dword ptr [0xa7fb48]
// 0089703e  51                   push ecx
// 0089703f  d91c24               fstp dword ptr [esp]
// 00897042  68c0c0a800           push 0xa8c0c0
// 00897047  8d9e7c040000         lea ebx, [esi + 0x47c]
// 0089704d  68faf9f500           push 0xf5f9fa
// 00897052  8bcb                 mov ecx, ebx
// 00897054  e8b7d8faff           call 0x844910
// 00897059  d90548fba700         fld dword ptr [0xa7fb48]
// 0089705f  51                   push ecx
// 00897060  d91c24               fstp dword ptr [esp]
// 00897063  6898987e00           push 0x7e9898
// 00897068  68eeedea00           push 0xeaedee
// 0089706d  8bcf                 mov ecx, edi
// 0089706f  e89cd8faff           call 0x844910
// 00897074  d905685ba700         fld dword ptr [0xa75b68]
// 0089707a  51                   push ecx
// 0089707b  d91c24               fstp dword ptr [esp]
// 0089707e  68f4f1e700           push 0xe7f1f4
// 00897083  68e5e5d700           push 0xd7e5e5
// 00897088  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0089708e  e87dd8faff           call 0x844910
// 00897093  68ccc7ba00           push 0xbac7cc
// 00897098  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0089709e  c78620050000a3a37c00 mov dword ptr [esi + 0x520], 0x7ca3a3
// 008970a8  e883e2faff           call 0x845330
// 008970ad  53                   push ebx
// 008970ae  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008970b4  e877d8faff           call 0x844930
// 008970b9  d905685ba700         fld dword ptr [0xa75b68]
// 008970bf  51                   push ecx
// 008970c0  d91c24               fstp dword ptr [esp]
// 008970c3  687a799900           push 0x99797a
// 008970c8  68f7f5f900           push 0xf9f5f7
// 008970cd  8d4e28               lea ecx, [esi + 0x28]
// 008970d0  e83bd8faff           call 0x844910
// 008970d5  5f                   pop edi
// 008970d6  8bce                 mov ecx, esi
// 008970d8  5e                   pop esi
// 008970d9  5b                   pop ebx
// 008970da  83c438               add esp, 0x38
// 008970dd  e98ee4ffff           jmp 0x895570
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RefreshMetrics@CXTPWhidbeyTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
