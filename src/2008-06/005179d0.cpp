// roc 2008-06 005179d0  unit: G3D::TextInput::WrongSymbol  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005179d0
//
// 005179d0  8b542404             mov edx, dword ptr [esp + 4]
// 005179d4  83ec08               sub esp, 8
// 005179d7  53                   push ebx
// 005179d8  8bd9                 mov ebx, ecx
// 005179da  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005179dd  b95d74d105           mov ecx, 0x5d1745d
// 005179e2  2bc8                 sub ecx, eax
// 005179e4  3bca                 cmp ecx, edx
// 005179e6  7305                 jae 0x5179ed
// 005179e8  e823f0ffff           call 0x516a10
// 005179ed  8bc8                 mov ecx, eax
// 005179ef  d1e9                 shr ecx, 1
// 005179f1  83f908               cmp ecx, 8
// 005179f4  7305                 jae 0x5179fb
// 005179f6  b908000000           mov ecx, 8
// 005179fb  55                   push ebp
// 005179fc  56                   push esi
// 005179fd  57                   push edi
// 005179fe  3bd1                 cmp edx, ecx
// 00517a00  7311                 jae 0x517a13
// 00517a02  be5d74d105           mov esi, 0x5d1745d
// 00517a07  2bf1                 sub esi, ecx
// 00517a09  3bc6                 cmp eax, esi
// 00517a0b  7706                 ja 0x517a13
// 00517a0d  8bd1                 mov edx, ecx
// 00517a0f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00517a13  8b7318               mov esi, dword ptr [ebx + 0x18]
// 00517a16  03c2                 add eax, edx
// 00517a18  6a00                 push 0
// 00517a1a  50                   push eax
// 00517a1b  89742418             mov dword ptr [esp + 0x18], esi
// 00517a1f  e82c91f0ff           call 0x420b50
// 00517a24  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00517a27  8944241c             mov dword ptr [esp + 0x1c], eax
// 00517a2b  03f6                 add esi, esi
// 00517a2d  03f6                 add esi, esi
// 00517a2f  8d3c06               lea edi, [esi + eax]
// 00517a32  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00517a35  03c0                 add eax, eax
// 00517a37  03c0                 add eax, eax
// 00517a39  8d140e               lea edx, [esi + ecx]
// 00517a3c  2bc2                 sub eax, edx
// 00517a3e  03c1                 add eax, ecx
// 00517a40  c1f802               sar eax, 2
// 00517a43  83c408               add esp, 8
// 00517a46  8d0c8500000000       lea ecx, [eax*4]
// 00517a4d  8d2c39               lea ebp, [ecx + edi]
// 00517a50  85c0                 test eax, eax
// 00517a52  760d                 jbe 0x517a61
// 00517a54  51                   push ecx
// 00517a55  52                   push edx
// 00517a56  51                   push ecx
// 00517a57  57                   push edi
// 00517a58  ff1550288000         call dword ptr [0x802850]
// 00517a5e  83c410               add esp, 0x10
// 00517a61  8b542410             mov edx, dword ptr [esp + 0x10]
// 00517a65  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00517a69  3bd0                 cmp edx, eax
// 00517a6b  7743                 ja 0x517ab0
// 00517a6d  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00517a70  c1fe02               sar esi, 2
// 00517a73  8d0cb500000000       lea ecx, [esi*4]
// 00517a7a  8d3c29               lea edi, [ecx + ebp]
// 00517a7d  85f6                 test esi, esi
// 00517a7f  7611                 jbe 0x517a92
// 00517a81  51                   push ecx
// 00517a82  50                   push eax
// 00517a83  51                   push ecx
// 00517a84  55                   push ebp
// 00517a85  ff1550288000         call dword ptr [0x802850]
// 00517a8b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00517a8f  83c410               add esp, 0x10
// 00517a92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00517a96  2bca                 sub ecx, edx
// 00517a98  7408                 je 0x517aa2
// 00517a9a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00517a9e  33c0                 xor eax, eax
// 00517aa0  f3ab                 rep stosd dword ptr es:[edi], eax
// 00517aa2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00517aa6  85d2                 test edx, edx
// 00517aa8  7662                 jbe 0x517b0c
// 00517aaa  8bca                 mov ecx, edx
// 00517aac  8bfd                 mov edi, ebp
// 00517aae  eb58                 jmp 0x517b08
// 00517ab0  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00517ab3  8d3c8500000000       lea edi, [eax*4]
// 00517aba  8bc7                 mov eax, edi
// 00517abc  c1f802               sar eax, 2
// 00517abf  85c0                 test eax, eax
// 00517ac1  7611                 jbe 0x517ad4
// 00517ac3  03c0                 add eax, eax
// 00517ac5  03c0                 add eax, eax
// 00517ac7  50                   push eax
// 00517ac8  51                   push ecx
// 00517ac9  50                   push eax
// 00517aca  55                   push ebp
// 00517acb  ff1550288000         call dword ptr [0x802850]
// 00517ad1  83c410               add esp, 0x10
// 00517ad4  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00517ad7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00517adb  8d0c07               lea ecx, [edi + eax]
// 00517ade  2bf1                 sub esi, ecx
// 00517ae0  03f0                 add esi, eax
// 00517ae2  c1fe02               sar esi, 2
// 00517ae5  8d04b500000000       lea eax, [esi*4]
// 00517aec  8d3c28               lea edi, [eax + ebp]
// 00517aef  85f6                 test esi, esi
// 00517af1  760d                 jbe 0x517b00
// 00517af3  50                   push eax
// 00517af4  51                   push ecx
// 00517af5  50                   push eax
// 00517af6  55                   push ebp
// 00517af7  ff1550288000         call dword ptr [0x802850]
// 00517afd  83c410               add esp, 0x10
// 00517b00  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00517b04  85c9                 test ecx, ecx
// 00517b06  7604                 jbe 0x517b0c
// 00517b08  33c0                 xor eax, eax
// 00517b0a  f3ab                 rep stosd dword ptr es:[edi], eax
// 00517b0c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00517b0f  85c0                 test eax, eax
// 00517b11  7409                 je 0x517b1c
// 00517b13  50                   push eax
// 00517b14  e8618b1800           call 0x6a067a
// 00517b19  83c404               add esp, 4
// 00517b1c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517b20  015314               add dword ptr [ebx + 0x14], edx
// 00517b23  5f                   pop edi
// 00517b24  5e                   pop esi
// 00517b25  896b10               mov dword ptr [ebx + 0x10], ebp
// 00517b28  5d                   pop ebp
// 00517b29  5b                   pop ebx
// 00517b2a  83c408               add esp, 8
// 00517b2d  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?_Growmap@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
