// from server: 100% by auto
// roc 2008-06 00787ab0  unit: CXTColorHex  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787ab0
//
// 00787ab0  53                   push ebx
// 00787ab1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00787ab5  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 00787abc  56                   push esi
// 00787abd  8bf1                 mov esi, ecx
// 00787abf  0f85b9000000         jne 0x787b7e
// 00787ac5  8b4670               mov eax, dword ptr [esi + 0x70]
// 00787ac8  50                   push eax
// 00787ac9  e8b2f9ffff           call 0x787480
// 00787ace  85c0                 test eax, eax
// 00787ad0  7506                 jne 0x787ad8
// 00787ad2  50                   push eax
// 00787ad3  e8a8f9ffff           call 0x787480
// 00787ad8  0fbe4b08             movsx ecx, byte ptr [ebx + 8]
// 00787adc  83c1f3               add ecx, -0xd
// 00787adf  83f91b               cmp ecx, 0x1b
// 00787ae2  0f8796000000         ja 0x787b7e
// 00787ae8  0fb689a47b7800       movzx ecx, byte ptr [ecx + 0x787ba4]
// 00787aef  ff248d8c7b7800       jmp dword ptr [ecx*4 + 0x787b8c]
// 00787af6  8b10                 mov edx, dword ptr [eax]
// 00787af8  52                   push edx
// 00787af9  8bce                 mov ecx, esi
// 00787afb  e830ffffff           call 0x787a30
// 00787b00  53                   push ebx
// 00787b01  8bce                 mov ecx, esi
// 00787b03  e89091f1ff           call 0x6a0c98
// 00787b08  5e                   pop esi
// 00787b09  5b                   pop ebx
// 00787b0a  c20400               ret 4
// 00787b0d  8b4004               mov eax, dword ptr [eax + 4]
// 00787b10  50                   push eax
// 00787b11  8bce                 mov ecx, esi
// 00787b13  e818ffffff           call 0x787a30
// 00787b18  53                   push ebx
// 00787b19  8bce                 mov ecx, esi
// 00787b1b  e87891f1ff           call 0x6a0c98
// 00787b20  5e                   pop esi
// 00787b21  5b                   pop ebx
// 00787b22  c20400               ret 4
// 00787b25  8b4808               mov ecx, dword ptr [eax + 8]
// 00787b28  51                   push ecx
// 00787b29  8bce                 mov ecx, esi
// 00787b2b  e800ffffff           call 0x787a30
// 00787b30  53                   push ebx
// 00787b31  8bce                 mov ecx, esi
// 00787b33  e86091f1ff           call 0x6a0c98
// 00787b38  5e                   pop esi
// 00787b39  5b                   pop ebx
// 00787b3a  c20400               ret 4
// 00787b3d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00787b40  52                   push edx
// 00787b41  8bce                 mov ecx, esi
// 00787b43  e8e8feffff           call 0x787a30
// 00787b48  53                   push ebx
// 00787b49  8bce                 mov ecx, esi
// 00787b4b  e84891f1ff           call 0x6a0c98
// 00787b50  5e                   pop esi
// 00787b51  5b                   pop ebx
// 00787b52  c20400               ret 4
// 00787b55  8b4620               mov eax, dword ptr [esi + 0x20]
// 00787b58  57                   push edi
// 00787b59  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 00787b5f  50                   push eax
// 00787b60  ffd7                 call edi
// 00787b62  50                   push eax
// 00787b63  e87690f1ff           call 0x6a0bde
// 00787b68  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00787b6b  51                   push ecx
// 00787b6c  ffd7                 call edi
// 00787b6e  50                   push eax
// 00787b6f  e86a90f1ff           call 0x6a0bde
// 00787b74  6a01                 push 1
// 00787b76  8bc8                 mov ecx, eax
// 00787b78  e8054e0300           call 0x7bc982
// 00787b7d  5f                   pop edi
// 00787b7e  53                   push ebx
// 00787b7f  8bce                 mov ecx, esi
// 00787b81  e81291f1ff           call 0x6a0c98
// 00787b86  5e                   pop esi
// 00787b87  5b                   pop ebx
// 00787b88  c20400               ret 4
// 00787b8b  90                   nop 
// 00787b8c  55                   push ebp
// 00787b8d  7b78                 jnp 0x787c07
// 00787b8f  00f6                 add dh, dh
// 00787b91  7a78                 jp 0x787c0b
// 00787b93  000d7b780025         add byte ptr [0x2500787b], cl
// 00787b99  7b78                 jnp 0x787c13
// 00787b9b  003d7b78007e         add byte ptr [0x7e00787b], bh
// 00787ba1  7b78                 jnp 0x787c1b
// 00787ba3  0000                 add byte ptr [eax], al
// 00787ba5  0505050505           add eax, 0x5050505
// 00787baa  0505050505           add eax, 0x5050505
// 00787baf  0505050505           add eax, 0x5050505
// 00787bb4  0505050005           add eax, 0x5000505
// 00787bb9  0505050102           add eax, 0x2010505
// library xtp-11.2.2-lib-strlen/Source\Controls\XTColorPageStandard.cpp (function ?PreTranslateMessage@CXTColorHex@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTColorPageStandard.cpp
