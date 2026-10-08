// roc 2012-06 009ed850  unit: CXTPToolTipContextToolTip  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed850
//
// 009ed850  56                   push esi
// 009ed851  8bf1                 mov esi, ecx
// 009ed853  e898ac0000           call 0x9f84f0
// 009ed858  8b10                 mov edx, dword ptr [eax]
// 009ed85a  8bc8                 mov ecx, eax
// 009ed85c  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed85f  685f240000           push 0x245f
// 009ed864  ffd0                 call eax
// 009ed866  8986ac000000         mov dword ptr [esi + 0xac], eax
// 009ed86c  85c0                 test eax, eax
// 009ed86e  7504                 jne 0x9ed874
// 009ed870  33c0                 xor eax, eax
// 009ed872  5e                   pop esi
// 009ed873  c3                   ret 
// 009ed874  e877ac0000           call 0x9f84f0
// 009ed879  8b10                 mov edx, dword ptr [eax]
// 009ed87b  8bc8                 mov ecx, eax
// 009ed87d  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed880  685c240000           push 0x245c
// 009ed885  ffd0                 call eax
// 009ed887  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 009ed88d  85c0                 test eax, eax
// 009ed88f  74df                 je 0x9ed870
// 009ed891  e85aac0000           call 0x9f84f0
// 009ed896  8b10                 mov edx, dword ptr [eax]
// 009ed898  8bc8                 mov ecx, eax
// 009ed89a  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed89d  685d240000           push 0x245d
// 009ed8a2  ffd0                 call eax
// 009ed8a4  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 009ed8aa  85c0                 test eax, eax
// 009ed8ac  74c2                 je 0x9ed870
// 009ed8ae  57                   push edi
// 009ed8af  e81e4bf9ff           call 0x9823d2
// 009ed8b4  8b3d9c3ab200         mov edi, dword ptr [0xb23a9c]
// 009ed8ba  68897f0000           push 0x7f89
// 009ed8bf  6a00                 push 0
// 009ed8c1  ffd7                 call edi
// 009ed8c3  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 009ed8c9  85c0                 test eax, eax
// 009ed8cb  7519                 jne 0x9ed8e6
// 009ed8cd  e81eac0000           call 0x9f84f0
// 009ed8d2  8b10                 mov edx, dword ptr [eax]
// 009ed8d4  8bc8                 mov ecx, eax
// 009ed8d6  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed8d9  68f5260000           push 0x26f5
// 009ed8de  ffd0                 call eax
// 009ed8e0  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 009ed8e6  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 009ed8ed  743a                 je 0x9ed929
// 009ed8ef  e8fcab0000           call 0x9f84f0
// 009ed8f4  8b10                 mov edx, dword ptr [eax]
// 009ed8f6  8bc8                 mov ecx, eax
// 009ed8f8  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed8fb  68f2260000           push 0x26f2
// 009ed900  ffd0                 call eax
// 009ed902  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 009ed908  85c0                 test eax, eax
// 009ed90a  741d                 je 0x9ed929
// 009ed90c  e8dfab0000           call 0x9f84f0
// 009ed911  8b10                 mov edx, dword ptr [eax]
// 009ed913  8bc8                 mov ecx, eax
// 009ed915  8b4218               mov eax, dword ptr [edx + 0x18]
// 009ed918  68f3260000           push 0x26f3
// 009ed91d  ffd0                 call eax
// 009ed91f  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 009ed925  85c0                 test eax, eax
// 009ed927  7505                 jne 0x9ed92e
// 009ed929  5f                   pop edi
// 009ed92a  33c0                 xor eax, eax
// 009ed92c  5e                   pop esi
// 009ed92d  c3                   ret 
// 009ed92e  e89f4af9ff           call 0x9823d2
// 009ed933  68867f0000           push 0x7f86
// 009ed938  6a00                 push 0
// 009ed93a  ffd7                 call edi
// 009ed93c  33c9                 xor ecx, ecx
// 009ed93e  85c0                 test eax, eax
// 009ed940  0f95c1               setne cl
// 009ed943  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 009ed949  5f                   pop edi
// 009ed94a  5e                   pop esi
// 009ed94b  8bc1                 mov eax, ecx
// 009ed94d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
