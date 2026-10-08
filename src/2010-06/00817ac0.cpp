// roc 2010-06 00817ac0  unit: CXTPToolTipContextToolTip  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00817ac0
//
// 00817ac0  56                   push esi
// 00817ac1  8bf1                 mov esi, ecx
// 00817ac3  e8e8ad0000           call 0x8228b0
// 00817ac8  8b10                 mov edx, dword ptr [eax]
// 00817aca  8bc8                 mov ecx, eax
// 00817acc  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817acf  685f240000           push 0x245f
// 00817ad4  ffd0                 call eax
// 00817ad6  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00817adc  85c0                 test eax, eax
// 00817ade  7504                 jne 0x817ae4
// 00817ae0  33c0                 xor eax, eax
// 00817ae2  5e                   pop esi
// 00817ae3  c3                   ret 
// 00817ae4  e8c7ad0000           call 0x8228b0
// 00817ae9  8b10                 mov edx, dword ptr [eax]
// 00817aeb  8bc8                 mov ecx, eax
// 00817aed  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817af0  685c240000           push 0x245c
// 00817af5  ffd0                 call eax
// 00817af7  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00817afd  85c0                 test eax, eax
// 00817aff  74df                 je 0x817ae0
// 00817b01  e8aaad0000           call 0x8228b0
// 00817b06  8b10                 mov edx, dword ptr [eax]
// 00817b08  8bc8                 mov ecx, eax
// 00817b0a  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817b0d  685d240000           push 0x245d
// 00817b12  ffd0                 call eax
// 00817b14  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00817b1a  85c0                 test eax, eax
// 00817b1c  74c2                 je 0x817ae0
// 00817b1e  57                   push edi
// 00817b1f  e83a01f9ff           call 0x7a7c5e
// 00817b24  8b3dccbb9e00         mov edi, dword ptr [0x9ebbcc]
// 00817b2a  68897f0000           push 0x7f89
// 00817b2f  6a00                 push 0
// 00817b31  ffd7                 call edi
// 00817b33  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00817b39  85c0                 test eax, eax
// 00817b3b  7519                 jne 0x817b56
// 00817b3d  e86ead0000           call 0x8228b0
// 00817b42  8b10                 mov edx, dword ptr [eax]
// 00817b44  8bc8                 mov ecx, eax
// 00817b46  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817b49  68f5260000           push 0x26f5
// 00817b4e  ffd0                 call eax
// 00817b50  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00817b56  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00817b5d  743a                 je 0x817b99
// 00817b5f  e84cad0000           call 0x8228b0
// 00817b64  8b10                 mov edx, dword ptr [eax]
// 00817b66  8bc8                 mov ecx, eax
// 00817b68  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817b6b  68f2260000           push 0x26f2
// 00817b70  ffd0                 call eax
// 00817b72  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00817b78  85c0                 test eax, eax
// 00817b7a  741d                 je 0x817b99
// 00817b7c  e82fad0000           call 0x8228b0
// 00817b81  8b10                 mov edx, dword ptr [eax]
// 00817b83  8bc8                 mov ecx, eax
// 00817b85  8b4218               mov eax, dword ptr [edx + 0x18]
// 00817b88  68f3260000           push 0x26f3
// 00817b8d  ffd0                 call eax
// 00817b8f  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00817b95  85c0                 test eax, eax
// 00817b97  7505                 jne 0x817b9e
// 00817b99  5f                   pop edi
// 00817b9a  33c0                 xor eax, eax
// 00817b9c  5e                   pop esi
// 00817b9d  c3                   ret 
// 00817b9e  e8bb00f9ff           call 0x7a7c5e
// 00817ba3  68867f0000           push 0x7f86
// 00817ba8  6a00                 push 0
// 00817baa  ffd7                 call edi
// 00817bac  33c9                 xor ecx, ecx
// 00817bae  85c0                 test eax, eax
// 00817bb0  0f95c1               setne cl
// 00817bb3  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00817bb9  5f                   pop edi
// 00817bba  5e                   pop esi
// 00817bbb  8bc1                 mov eax, ecx
// 00817bbd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
