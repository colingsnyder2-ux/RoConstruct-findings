// roc 2009-12 00863ae0  unit: CXTPToolTipContextToolTip  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863ae0
//
// 00863ae0  56                   push esi
// 00863ae1  8bf1                 mov esi, ecx
// 00863ae3  e8b8ad0000           call 0x86e8a0
// 00863ae8  8b10                 mov edx, dword ptr [eax]
// 00863aea  8bc8                 mov ecx, eax
// 00863aec  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863aef  685f240000           push 0x245f
// 00863af4  ffd0                 call eax
// 00863af6  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00863afc  85c0                 test eax, eax
// 00863afe  7504                 jne 0x863b04
// 00863b00  33c0                 xor eax, eax
// 00863b02  5e                   pop esi
// 00863b03  c3                   ret 
// 00863b04  e897ad0000           call 0x86e8a0
// 00863b09  8b10                 mov edx, dword ptr [eax]
// 00863b0b  8bc8                 mov ecx, eax
// 00863b0d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863b10  685c240000           push 0x245c
// 00863b15  ffd0                 call eax
// 00863b17  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00863b1d  85c0                 test eax, eax
// 00863b1f  74df                 je 0x863b00
// 00863b21  e87aad0000           call 0x86e8a0
// 00863b26  8b10                 mov edx, dword ptr [eax]
// 00863b28  8bc8                 mov ecx, eax
// 00863b2a  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863b2d  685d240000           push 0x245d
// 00863b32  ffd0                 call eax
// 00863b34  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00863b3a  85c0                 test eax, eax
// 00863b3c  74c2                 je 0x863b00
// 00863b3e  57                   push edi
// 00863b3f  e8dafff8ff           call 0x7f3b1e
// 00863b44  8b3d48ca9800         mov edi, dword ptr [0x98ca48]
// 00863b4a  68897f0000           push 0x7f89
// 00863b4f  6a00                 push 0
// 00863b51  ffd7                 call edi
// 00863b53  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00863b59  85c0                 test eax, eax
// 00863b5b  7519                 jne 0x863b76
// 00863b5d  e83ead0000           call 0x86e8a0
// 00863b62  8b10                 mov edx, dword ptr [eax]
// 00863b64  8bc8                 mov ecx, eax
// 00863b66  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863b69  68f5260000           push 0x26f5
// 00863b6e  ffd0                 call eax
// 00863b70  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00863b76  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00863b7d  743a                 je 0x863bb9
// 00863b7f  e81cad0000           call 0x86e8a0
// 00863b84  8b10                 mov edx, dword ptr [eax]
// 00863b86  8bc8                 mov ecx, eax
// 00863b88  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863b8b  68f2260000           push 0x26f2
// 00863b90  ffd0                 call eax
// 00863b92  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00863b98  85c0                 test eax, eax
// 00863b9a  741d                 je 0x863bb9
// 00863b9c  e8ffac0000           call 0x86e8a0
// 00863ba1  8b10                 mov edx, dword ptr [eax]
// 00863ba3  8bc8                 mov ecx, eax
// 00863ba5  8b4218               mov eax, dword ptr [edx + 0x18]
// 00863ba8  68f3260000           push 0x26f3
// 00863bad  ffd0                 call eax
// 00863baf  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00863bb5  85c0                 test eax, eax
// 00863bb7  7505                 jne 0x863bbe
// 00863bb9  5f                   pop edi
// 00863bba  33c0                 xor eax, eax
// 00863bbc  5e                   pop esi
// 00863bbd  c3                   ret 
// 00863bbe  e85bfff8ff           call 0x7f3b1e
// 00863bc3  68867f0000           push 0x7f86
// 00863bc8  6a00                 push 0
// 00863bca  ffd7                 call edi
// 00863bcc  33c9                 xor ecx, ecx
// 00863bce  85c0                 test eax, eax
// 00863bd0  0f95c1               setne cl
// 00863bd3  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00863bd9  5f                   pop edi
// 00863bda  5e                   pop esi
// 00863bdb  8bc1                 mov eax, ecx
// 00863bdd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
