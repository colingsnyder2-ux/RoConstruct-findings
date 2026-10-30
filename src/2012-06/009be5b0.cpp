// roc 2012-06 009be5b0  unit: CXTPColorManager  size: 1252 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009be5b0
//
// 009be5b0  51                   push ecx
// 009be5b1  53                   push ebx
// 009be5b2  56                   push esi
// 009be5b3  57                   push edi
// 009be5b4  8bf1                 mov esi, ecx
// 009be5b6  e855f0ffff           call 0x9bd610
// 009be5bb  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 009be5c2  7402                 je 0x9be5c6
// 009be5c4  33c0                 xor eax, eax
// 009be5c6  48                   dec eax
// 009be5c7  83f804               cmp eax, 4
// 009be5ca  0f87b0020000         ja 0x9be880
// 009be5d0  ff248580ea9b00       jmp dword ptr [eax*4 + 0x9bea80]
// 009be5d7  d9057027b600         fld dword ptr [0xb62770]
// 009be5dd  51                   push ecx
// 009be5de  d91c24               fstp dword ptr [esp]
// 009be5e1  68002d9600           push 0x962d00
// 009be5e6  685987d600           push 0xd68759
// 009be5eb  8d4e20               lea ecx, [esi + 0x20]
// 009be5ee  c78644020000002d9600 mov dword ptr [esi + 0x244], 0x962d00
// 009be5f8  e843e7ffff           call 0x9bcd40
// 009be5fd  d9057027b600         fld dword ptr [0xb62770]
// 009be603  51                   push ecx
// 009be604  d91c24               fstp dword ptr [esp]
// 009be607  68c4dafa00           push 0xfadac4
// 009be60c  8d7e40               lea edi, [esi + 0x40]
// 009be60f  689ebef500           push 0xf5be9e
// 009be614  8bcf                 mov ecx, edi
// 009be616  e825e7ffff           call 0x9bcd40
// 009be61b  d9057027b600         fld dword ptr [0xb62770]
// 009be621  51                   push ecx
// 009be622  d91c24               fstp dword ptr [esp]
// 009be625  68002d9600           push 0x962d00
// 009be62a  685987d600           push 0xd68759
// 009be62f  8d4e60               lea ecx, [esi + 0x60]
// 009be632  e809e7ffff           call 0x9bcd40
// 009be637  d9058885b600         fld dword ptr [0xb68588]
// 009be63d  51                   push ecx
// 009be63e  d91c24               fstp dword ptr [esp]
// 009be641  6881a9e200           push 0xe2a981
// 009be646  8d9e80000000         lea ebx, [esi + 0x80]
// 009be64c  68ddecfe00           push 0xfeecdd
// 009be651  8bcb                 mov ecx, ebx
// 009be653  e8e8e6ffff           call 0x9bcd40
// 009be658  d9057027b600         fld dword ptr [0xb62770]
// 009be65e  51                   push ecx
// 009be65f  d91c24               fstp dword ptr [esp]
// 009be662  6887ade400           push 0xe4ad87
// 009be667  68e3efff00           push 0xffefe3
// 009be66c  8d8ea0000000         lea ecx, [esi + 0xa0]
// 009be672  e8c9e6ffff           call 0x9bcd40
// 009be677  d9057027b600         fld dword ptr [0xb62770]
// 009be67d  51                   push ecx
// 009be67e  d91c24               fstp dword ptr [esp]
// 009be681  6879a1dc00           push 0xdca179
// 009be686  68cbddf600           push 0xf6ddcb
// 009be68b  8d8ec0000000         lea ecx, [esi + 0xc0]
// 009be691  e8aae6ffff           call 0x9bcd40
// 009be696  d9057027b600         fld dword ptr [0xb62770]
// 009be69c  51                   push ecx
// 009be69d  d91c24               fstp dword ptr [esp]
// 009be6a0  6893b5e700           push 0xe7b593
// 009be6a5  68e3efff00           push 0xffefe3
// 009be6aa  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009be6b0  e88be6ffff           call 0x9bcd40
// 009be6b5  e985030000           jmp 0x9bea3f
// 009be6ba  d9057027b600         fld dword ptr [0xb62770]
// 009be6c0  51                   push ecx
// 009be6c1  d91c24               fstp dword ptr [esp]
// 009be6c4  68637a4400           push 0x447a63
// 009be6c9  68afc08200           push 0x82c0af
// 009be6ce  8d4e20               lea ecx, [esi + 0x20]
// 009be6d1  c7864402000060805800 mov dword ptr [esi + 0x244], 0x588060
// 009be6db  e860e6ffff           call 0x9bcd40
// 009be6e0  d9057027b600         fld dword ptr [0xb62770]
// 009be6e6  51                   push ecx
// 009be6e7  d91c24               fstp dword ptr [esp]
// 009be6ea  68f2f1e400           push 0xe4f1f2
// 009be6ef  8d7e40               lea edi, [esi + 0x40]
// 009be6f2  68d9d9a700           push 0xa7d9d9
// 009be6f7  8bcf                 mov ecx, edi
// 009be6f9  e842e6ffff           call 0x9bcd40
// 009be6fe  d9057027b600         fld dword ptr [0xb62770]
// 009be704  51                   push ecx
// 009be705  d91c24               fstp dword ptr [esp]
// 009be708  68495b4300           push 0x435b49
// 009be70d  68788e6f00           push 0x6f8e78
// 009be712  8d4e60               lea ecx, [esi + 0x60]
// 009be715  e826e6ffff           call 0x9bcd40
// 009be71a  d9056032b600         fld dword ptr [0xb63260]
// 009be720  51                   push ecx
// 009be721  d91c24               fstp dword ptr [esp]
// 009be724  68b7c69100           push 0x91c6b7
// 009be729  8d9e80000000         lea ebx, [esi + 0x80]
// 009be72f  68f4f7de00           push 0xdef7f4
// 009be734  8bcb                 mov ecx, ebx
// 009be736  e805e6ffff           call 0x9bcd40
// 009be73b  d9056032b600         fld dword ptr [0xb63260]
// 009be741  51                   push ecx
// 009be742  d91c24               fstp dword ptr [esp]
// 009be745  68b8c79200           push 0x92c7b8
// 009be74a  68ffffed00           push 0xedffff
// 009be74f  8d8ea0000000         lea ecx, [esi + 0xa0]
// 009be755  e8e6e5ffff           call 0x9bcd40
// 009be75a  d9056032b600         fld dword ptr [0xb63260]
// 009be760  51                   push ecx
// 009be761  d91c24               fstp dword ptr [esp]
// 009be764  68a4b47800           push 0x78b4a4
// 009be769  68e6e6d100           push 0xd1e6e6
// 009be76e  8d8ec0000000         lea ecx, [esi + 0xc0]
// 009be774  e8c7e5ffff           call 0x9bcd40
// 009be779  d9057027b600         fld dword ptr [0xb62770]
// 009be77f  51                   push ecx
// 009be780  d91c24               fstp dword ptr [esp]
// 009be783  68c2ce9f00           push 0x9fcec2
// 009be788  68ecf0d500           push 0xd5f0ec
// 009be78d  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009be793  e8a8e5ffff           call 0x9bcd40
// 009be798  e9a2020000           jmp 0x9bea3f
// 009be79d  d9057027b600         fld dword ptr [0xb62770]
// 009be7a3  51                   push ecx
// 009be7a4  d91c24               fstp dword ptr [esp]
// 009be7a7  68706f9100           push 0x916f70
// 009be7ac  68a8a7bf00           push 0xbfa7a8
// 009be7b1  8d4e20               lea ecx, [esi + 0x20]
// 009be7b4  c786440200007c7c9400 mov dword ptr [esi + 0x244], 0x947c7c
// 009be7be  e87de5ffff           call 0x9bcd40
// 009be7c3  d9057027b600         fld dword ptr [0xb62770]
// 009be7c9  51                   push ecx
// 009be7ca  d91c24               fstp dword ptr [esp]
// 009be7cd  68f3f3f700           push 0xf7f3f3
// 009be7d2  8d7e40               lea edi, [esi + 0x40]
// 009be7d5  68d7d7e500           push 0xe5d7d7
// 009be7da  8bcf                 mov ecx, edi
// 009be7dc  e85fe5ffff           call 0x9bcd40
// 009be7e1  d9057027b600         fld dword ptr [0xb62770]
// 009be7e7  51                   push ecx
// 009be7e8  d91c24               fstp dword ptr [esp]
// 009be7eb  6877769700           push 0x977677
// 009be7f0  68a8a7bf00           push 0xbfa7a8
// 009be7f5  8d4e60               lea ecx, [esi + 0x60]
// 009be7f8  e843e5ffff           call 0x9bcd40
// 009be7fd  d9058885b600         fld dword ptr [0xb68588]
// 009be803  51                   push ecx
// 009be804  d91c24               fstp dword ptr [esp]
// 009be807  689c9bb700           push 0xb79b9c
// 009be80c  8d9e80000000         lea ebx, [esi + 0x80]
// 009be812  68f9f9ff00           push 0xfff9f9
// 009be817  8bcb                 mov ecx, ebx
// 009be819  e822e5ffff           call 0x9bcd40
// 009be81e  d9058885b600         fld dword ptr [0xb68588]
// 009be824  51                   push ecx
// 009be825  d91c24               fstp dword ptr [esp]
// 009be828  689f9db900           push 0xb99d9f
// 009be82d  68f9f9ff00           push 0xfff9f9
// 009be832  8d8ea0000000         lea ecx, [esi + 0xa0]
// 009be838  e803e5ffff           call 0x9bcd40
// 009be83d  d9058885b600         fld dword ptr [0xb68588]
// 009be843  51                   push ecx
// 009be844  d91c24               fstp dword ptr [esp]
// 009be847  68807e9e00           push 0x9e7e80
// 009be84c  68d7d7e200           push 0xe2d7d7
// 009be851  8d8ec0000000         lea ecx, [esi + 0xc0]
// 009be857  e8e4e4ffff           call 0x9bcd40
// 009be85c  d9057027b600         fld dword ptr [0xb62770]
// 009be862  51                   push ecx
// 009be863  d91c24               fstp dword ptr [esp]
// 009be866  68bab9cd00           push 0xcdb9ba
// 009be86b  68e9e7f100           push 0xf1e7e9
// 009be870  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009be876  e8c5e4ffff           call 0x9bcd40
// 009be87b  e9bf010000           jmp 0x9bea3f
// 009be880  d9057027b600         fld dword ptr [0xb62770]
// 009be886  55                   push ebp
// 009be887  51                   push ecx
// 009be888  d91c24               fstp dword ptr [esp]
// 009be88b  6a10                 push 0x10
// 009be88d  e84ee7ffff           call 0x9bcfe0
// 009be892  50                   push eax
// 009be893  6a10                 push 0x10
// 009be895  e846e7ffff           call 0x9bcfe0
// 009be89a  50                   push eax
// 009be89b  8d4e20               lea ecx, [esi + 0x20]
// 009be89e  e89de4ffff           call 0x9bcd40
// 009be8a3  d9057027b600         fld dword ptr [0xb62770]
// 009be8a9  51                   push ecx
// 009be8aa  d91c24               fstp dword ptr [esp]
// 009be8ad  68d7000000           push 0xd7
// 009be8b2  6a05                 push 5
// 009be8b4  8bce                 mov ecx, esi
// 009be8b6  8d7e40               lea edi, [esi + 0x40]
// 009be8b9  e822e7ffff           call 0x9bcfe0
// 009be8be  50                   push eax
// 009be8bf  6a0f                 push 0xf
// 009be8c1  e81ae7ffff           call 0x9bcfe0
// 009be8c6  50                   push eax
// 009be8c7  e864e6ffff           call 0x9bcf30
// 009be8cc  50                   push eax
// 009be8cd  6a0f                 push 0xf
// 009be8cf  8bce                 mov ecx, esi
// 009be8d1  e80ae7ffff           call 0x9bcfe0
// 009be8d6  50                   push eax
// 009be8d7  8bcf                 mov ecx, edi
// 009be8d9  e862e4ffff           call 0x9bcd40
// 009be8de  d9057027b600         fld dword ptr [0xb62770]
// 009be8e4  51                   push ecx
// 009be8e5  d91c24               fstp dword ptr [esp]
// 009be8e8  6a10                 push 0x10
// 009be8ea  8bce                 mov ecx, esi
// 009be8ec  e8efe6ffff           call 0x9bcfe0
// 009be8f1  50                   push eax
// 009be8f2  6a0f                 push 0xf
// 009be8f4  e8e7e6ffff           call 0x9bcfe0
// 009be8f9  50                   push eax
// 009be8fa  8d4e60               lea ecx, [esi + 0x60]
// 009be8fd  e83ee4ffff           call 0x9bcd40
// 009be902  e859efffff           call 0x9bd860
// 009be907  6a0f                 push 0xf
// 009be909  8bc8                 mov ecx, eax
// 009be90b  e8d0e6ffff           call 0x9bcfe0
// 009be910  8be8                 mov ebp, eax
// 009be912  e849efffff           call 0x9bd860
// 009be917  6a05                 push 5
// 009be919  8bc8                 mov ecx, eax
// 009be91b  e8c0e6ffff           call 0x9bcfe0
// 009be920  89442410             mov dword ptr [esp + 0x10], eax
// 009be924  e837efffff           call 0x9bd860
// 009be929  d9057027b600         fld dword ptr [0xb62770]
// 009be92f  51                   push ecx
// 009be930  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009be934  d91c24               fstp dword ptr [esp]
// 009be937  55                   push ebp
// 009be938  68cd000000           push 0xcd
// 009be93d  51                   push ecx
// 009be93e  6a0f                 push 0xf
// 009be940  8bc8                 mov ecx, eax
// 009be942  8d9e80000000         lea ebx, [esi + 0x80]
// 009be948  e893e6ffff           call 0x9bcfe0
// 009be94d  50                   push eax
// 009be94e  8bce                 mov ecx, esi
// 009be950  e8dbe5ffff           call 0x9bcf30
// 009be955  50                   push eax
// 009be956  8bcb                 mov ecx, ebx
// 009be958  e8e3e3ffff           call 0x9bcd40
// 009be95d  d9057027b600         fld dword ptr [0xb62770]
// 009be963  51                   push ecx
// 009be964  d91c24               fstp dword ptr [esp]
// 009be967  6a5d                 push 0x5d
// 009be969  6a05                 push 5
// 009be96b  8bce                 mov ecx, esi
// 009be96d  e86ee6ffff           call 0x9bcfe0
// 009be972  50                   push eax
// 009be973  6a0f                 push 0xf
// 009be975  e866e6ffff           call 0x9bcfe0
// 009be97a  50                   push eax
// 009be97b  e8b0e5ffff           call 0x9bcf30
// 009be980  50                   push eax
// 009be981  6891000000           push 0x91
// 009be986  6a05                 push 5
// 009be988  8bce                 mov ecx, esi
// 009be98a  e851e6ffff           call 0x9bcfe0
// 009be98f  50                   push eax
// 009be990  6a0f                 push 0xf
// 009be992  e849e6ffff           call 0x9bcfe0
// 009be997  50                   push eax
// 009be998  e893e5ffff           call 0x9bcf30
// 009be99d  50                   push eax
// 009be99e  8d8ea0000000         lea ecx, [esi + 0xa0]
// 009be9a4  e897e3ffff           call 0x9bcd40
// 009be9a9  d9057027b600         fld dword ptr [0xb62770]
// 009be9af  51                   push ecx
// 009be9b0  d91c24               fstp dword ptr [esp]
// 009be9b3  6a5f                 push 0x5f
// 009be9b5  6a10                 push 0x10
// 009be9b7  8bce                 mov ecx, esi
// 009be9b9  e822e6ffff           call 0x9bcfe0
// 009be9be  50                   push eax
// 009be9bf  6a0f                 push 0xf
// 009be9c1  e81ae6ffff           call 0x9bcfe0
// 009be9c6  50                   push eax
// 009be9c7  e864e5ffff           call 0x9bcf30
// 009be9cc  50                   push eax
// 009be9cd  6a28                 push 0x28
// 009be9cf  6a05                 push 5
// 009be9d1  8bce                 mov ecx, esi
// 009be9d3  e808e6ffff           call 0x9bcfe0
// 009be9d8  50                   push eax
// 009be9d9  6a0f                 push 0xf
// 009be9db  e800e6ffff           call 0x9bcfe0
// 009be9e0  50                   push eax
// 009be9e1  e84ae5ffff           call 0x9bcf30
// 009be9e6  50                   push eax
// 009be9e7  8d8ec0000000         lea ecx, [esi + 0xc0]
// 009be9ed  e84ee3ffff           call 0x9bcd40
// 009be9f2  d9057027b600         fld dword ptr [0xb62770]
// 009be9f8  51                   push ecx
// 009be9f9  d91c24               fstp dword ptr [esp]
// 009be9fc  6a2a                 push 0x2a
// 009be9fe  6a05                 push 5
// 009bea00  8bce                 mov ecx, esi
// 009bea02  e8d9e5ffff           call 0x9bcfe0
// 009bea07  50                   push eax
// 009bea08  6a0f                 push 0xf
// 009bea0a  e8d1e5ffff           call 0x9bcfe0
// 009bea0f  50                   push eax
// 009bea10  e81be5ffff           call 0x9bcf30
// 009bea15  50                   push eax
// 009bea16  68a5000000           push 0xa5
// 009bea1b  6a05                 push 5
// 009bea1d  8bce                 mov ecx, esi
// 009bea1f  e8bce5ffff           call 0x9bcfe0
// 009bea24  50                   push eax
// 009bea25  6a0f                 push 0xf
// 009bea27  e8b4e5ffff           call 0x9bcfe0
// 009bea2c  50                   push eax
// 009bea2d  e8fee4ffff           call 0x9bcf30
// 009bea32  50                   push eax
// 009bea33  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009bea39  e802e3ffff           call 0x9bcd40
// 009bea3e  5d                   pop ebp
// 009bea3f  6a00                 push 0
// 009bea41  8bce                 mov ecx, esi
// 009bea43  e858e7ffff           call 0x9bd1a0
// 009bea48  85c0                 test eax, eax
// 009bea4a  742c                 je 0x9bea78
// 009bea4c  e80feeffff           call 0x9bd860
// 009bea51  6a0f                 push 0xf
// 009bea53  8bc8                 mov ecx, eax
// 009bea55  e886e5ffff           call 0x9bcfe0
// 009bea5a  50                   push eax
// 009bea5b  8bcb                 mov ecx, ebx
// 009bea5d  e84eedffff           call 0x9bd7b0
// 009bea62  e8f9edffff           call 0x9bd860
// 009bea67  6a0f                 push 0xf
// 009bea69  8bc8                 mov ecx, eax
// 009bea6b  e870e5ffff           call 0x9bcfe0
// 009bea70  50                   push eax
// 009bea71  8bcf                 mov ecx, edi
// 009bea73  e838edffff           call 0x9bd7b0
// 009bea78  5f                   pop edi
// 009bea79  5e                   pop esi
// 009bea7a  5b                   pop ebx
// 009bea7b  59                   pop ecx
// 009bea7c  c3                   ret 
// 009bea7d  8d4900               lea ecx, [ecx]
// 009bea80  d7                   xlatb 
// 009bea81  e59b                 in eax, 0x9b
// 009bea83  00bae69b009d         add byte ptr [edx - 0x62ff641a], bh
// 009bea89  e79b                 out 0x9b, eax
// 009bea8b  00d7                 add bh, dl
// 009bea8d  e59b                 in eax, 0x9b
// 009bea8f  00d7                 add bh, dl
// 009bea91  e59b                 in eax, 0x9b
// copied from an identical function in another client (function ?RefreshGradientColors@CXTPColorManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp