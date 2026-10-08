// roc 2007-03 004b9800  unit: seg_004b0000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9800
//
// 004b9800  833d24148900ff       cmp dword ptr [0x891424], -1
// 004b9807  53                   push ebx
// 004b9808  55                   push ebp
// 004b9809  56                   push esi
// 004b980a  57                   push edi
// 004b980b  bfa8948b00           mov edi, 0x8b94a8
// 004b9810  beb0948b00           mov esi, 0x8b94b0
// 004b9815  7d0d                 jge 0x4b9824
// 004b9817  6805110000           push 0x1105
// 004b981c  e89fffffff           call 0x4b97c0
// 004b9821  83c404               add esp, 4
// 004b9824  8b0da8948b00         mov ecx, dword ptr [0x8b94a8]
// 004b982a  a1ac948b00           mov eax, dword ptr [0x8b94ac]
// 004b982f  c705241489006f020000 mov dword ptr [0x891424], 0x26f
// 004b9839  c7056c9e8b00ac948b00 mov dword ptr [0x8b9e6c], 0x8b94ac
// 004b9843  bae3000000           mov edx, 0xe3
// 004b9848  eb06                 jmp 0x4b9850
// 004b984a  8d9b00000000         lea ebx, [ebx]
// 004b9850  8bd8                 mov ebx, eax
// 004b9852  33d9                 xor ebx, ecx
// 004b9854  81e3feffff7f         and ebx, 0x7ffffffe
// 004b985a  33d9                 xor ebx, ecx
// 004b985c  8bc8                 mov ecx, eax
// 004b985e  80e101               and cl, 1
// 004b9861  d1eb                 shr ebx, 1
// 004b9863  f6d9                 neg cl
// 004b9865  1bc9                 sbb ecx, ecx
// 004b9867  81e1dfb00899         and ecx, 0x9908b0df
// 004b986d  33d9                 xor ebx, ecx
// 004b986f  339e2c060000         xor ebx, dword ptr [esi + 0x62c]
// 004b9875  8bc8                 mov ecx, eax
// 004b9877  891f                 mov dword ptr [edi], ebx
// 004b9879  8b06                 mov eax, dword ptr [esi]
// 004b987b  83c704               add edi, 4
// 004b987e  83c604               add esi, 4
// 004b9881  83ea01               sub edx, 1
// 004b9884  75ca                 jne 0x4b9850
// 004b9886  bba8948b00           mov ebx, 0x8b94a8
// 004b988b  bd8c010000           mov ebp, 0x18c
// 004b9890  8bd0                 mov edx, eax
// 004b9892  33d1                 xor edx, ecx
// 004b9894  81e2feffff7f         and edx, 0x7ffffffe
// 004b989a  33d1                 xor edx, ecx
// 004b989c  8bc8                 mov ecx, eax
// 004b989e  80e101               and cl, 1
// 004b98a1  d1ea                 shr edx, 1
// 004b98a3  f6d9                 neg cl
// 004b98a5  1bc9                 sbb ecx, ecx
// 004b98a7  81e1dfb00899         and ecx, 0x9908b0df
// 004b98ad  33d1                 xor edx, ecx
// 004b98af  3313                 xor edx, dword ptr [ebx]
// 004b98b1  8bc8                 mov ecx, eax
// 004b98b3  8917                 mov dword ptr [edi], edx
// 004b98b5  8b06                 mov eax, dword ptr [esi]
// 004b98b7  83c704               add edi, 4
// 004b98ba  83c304               add ebx, 4
// 004b98bd  83c604               add esi, 4
// 004b98c0  83ed01               sub ebp, 1
// 004b98c3  75cb                 jne 0x4b9890
// 004b98c5  8b35a8948b00         mov esi, dword ptr [0x8b94a8]
// 004b98cb  8bc6                 mov eax, esi
// 004b98cd  33c1                 xor eax, ecx
// 004b98cf  25feffff7f           and eax, 0x7ffffffe
// 004b98d4  33c1                 xor eax, ecx
// 004b98d6  d1e8                 shr eax, 1
// 004b98d8  8bce                 mov ecx, esi
// 004b98da  80e101               and cl, 1
// 004b98dd  f6d9                 neg cl
// 004b98df  8bd6                 mov edx, esi
// 004b98e1  1bc9                 sbb ecx, ecx
// 004b98e3  81e1dfb00899         and ecx, 0x9908b0df
// 004b98e9  33c1                 xor eax, ecx
// 004b98eb  3303                 xor eax, dword ptr [ebx]
// 004b98ed  8907                 mov dword ptr [edi], eax
// 004b98ef  8bc2                 mov eax, edx
// 004b98f1  c1e80b               shr eax, 0xb
// 004b98f4  33d0                 xor edx, eax
// 004b98f6  8bca                 mov ecx, edx
// 004b98f8  81e1ad583aff         and ecx, 0xff3a58ad
// 004b98fe  c1e107               shl ecx, 7
// 004b9901  33d1                 xor edx, ecx
// 004b9903  8bc2                 mov eax, edx
// 004b9905  258cdfffff           and eax, 0xffffdf8c
// 004b990a  c1e00f               shl eax, 0xf
// 004b990d  33d0                 xor edx, eax
// 004b990f  5f                   pop edi
// 004b9910  5e                   pop esi
// 004b9911  8bc2                 mov eax, edx
// 004b9913  c1e812               shr eax, 0x12
// 004b9916  5d                   pop ebp
// 004b9917  33c2                 xor eax, edx
// 004b9919  5b                   pop ebx
// 004b991a  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?reloadMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
