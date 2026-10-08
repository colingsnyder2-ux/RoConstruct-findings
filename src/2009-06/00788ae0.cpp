// roc 2009-06 00788ae0  unit: CXTPToolTipContextToolTip  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00788ae0
//
// 00788ae0  56                   push esi
// 00788ae1  8bf1                 mov esi, ecx
// 00788ae3  e858260100           call 0x79b140
// 00788ae8  8b10                 mov edx, dword ptr [eax]
// 00788aea  8bc8                 mov ecx, eax
// 00788aec  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788aef  685f240000           push 0x245f
// 00788af4  ffd0                 call eax
// 00788af6  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00788afc  85c0                 test eax, eax
// 00788afe  7504                 jne 0x788b04
// 00788b00  33c0                 xor eax, eax
// 00788b02  5e                   pop esi
// 00788b03  c3                   ret 
// 00788b04  e837260100           call 0x79b140
// 00788b09  8b10                 mov edx, dword ptr [eax]
// 00788b0b  8bc8                 mov ecx, eax
// 00788b0d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788b10  685c240000           push 0x245c
// 00788b15  ffd0                 call eax
// 00788b17  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00788b1d  85c0                 test eax, eax
// 00788b1f  74df                 je 0x788b00
// 00788b21  e81a260100           call 0x79b140
// 00788b26  8b10                 mov edx, dword ptr [eax]
// 00788b28  8bc8                 mov ecx, eax
// 00788b2a  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788b2d  685d240000           push 0x245d
// 00788b32  ffd0                 call eax
// 00788b34  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00788b3a  85c0                 test eax, eax
// 00788b3c  74c2                 je 0x788b00
// 00788b3e  57                   push edi
// 00788b3f  e8b201f9ff           call 0x718cf6
// 00788b44  8b3db0ed8900         mov edi, dword ptr [0x89edb0]
// 00788b4a  68897f0000           push 0x7f89
// 00788b4f  6a00                 push 0
// 00788b51  ffd7                 call edi
// 00788b53  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00788b59  85c0                 test eax, eax
// 00788b5b  7519                 jne 0x788b76
// 00788b5d  e8de250100           call 0x79b140
// 00788b62  8b10                 mov edx, dword ptr [eax]
// 00788b64  8bc8                 mov ecx, eax
// 00788b66  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788b69  68f5260000           push 0x26f5
// 00788b6e  ffd0                 call eax
// 00788b70  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00788b76  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00788b7d  743a                 je 0x788bb9
// 00788b7f  e8bc250100           call 0x79b140
// 00788b84  8b10                 mov edx, dword ptr [eax]
// 00788b86  8bc8                 mov ecx, eax
// 00788b88  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788b8b  68f2260000           push 0x26f2
// 00788b90  ffd0                 call eax
// 00788b92  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00788b98  85c0                 test eax, eax
// 00788b9a  741d                 je 0x788bb9
// 00788b9c  e89f250100           call 0x79b140
// 00788ba1  8b10                 mov edx, dword ptr [eax]
// 00788ba3  8bc8                 mov ecx, eax
// 00788ba5  8b4218               mov eax, dword ptr [edx + 0x18]
// 00788ba8  68f3260000           push 0x26f3
// 00788bad  ffd0                 call eax
// 00788baf  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00788bb5  85c0                 test eax, eax
// 00788bb7  7505                 jne 0x788bbe
// 00788bb9  5f                   pop edi
// 00788bba  33c0                 xor eax, eax
// 00788bbc  5e                   pop esi
// 00788bbd  c3                   ret 
// 00788bbe  e83301f9ff           call 0x718cf6
// 00788bc3  68867f0000           push 0x7f86
// 00788bc8  6a00                 push 0
// 00788bca  ffd7                 call edi
// 00788bcc  33c9                 xor ecx, ecx
// 00788bce  85c0                 test eax, eax
// 00788bd0  0f95c1               setne cl
// 00788bd3  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00788bd9  5f                   pop edi
// 00788bda  5e                   pop esi
// 00788bdb  8bc1                 mov eax, ecx
// 00788bdd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
