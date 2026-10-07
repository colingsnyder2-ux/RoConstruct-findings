// roc 2012-06 009bf580  unit: CRobloxTreeCtrl  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf580
//
// 009bf580  51                   push ecx
// 009bf581  56                   push esi
// 009bf582  8bf1                 mov esi, ecx
// 009bf584  837e0400             cmp dword ptr [esi + 4], 0
// 009bf588  c744240400000000     mov dword ptr [esp + 4], 0
// 009bf590  750a                 jne 0x9bf59c
// 009bf592  b801000000           mov eax, 1
// 009bf597  5e                   pop esi
// 009bf598  59                   pop ecx
// 009bf599  c21000               ret 0x10
// 009bf59c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009bf5a0  8b542414             mov edx, dword ptr [esp + 0x14]
// 009bf5a4  55                   push ebp
// 009bf5a5  57                   push edi
// 009bf5a6  8d44240c             lea eax, [esp + 0xc]
// 009bf5aa  50                   push eax
// 009bf5ab  51                   push ecx
// 009bf5ac  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009bf5af  52                   push edx
// 009bf5b0  e8dd34fcff           call 0x982a92
// 009bf5b5  8bf8                 mov edi, eax
// 009bf5b7  85ff                 test edi, edi
// 009bf5b9  7465                 je 0x9bf620
// 009bf5bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009bf5bf  83e010               and eax, 0x10
// 009bf5c2  7574                 jne 0x9bf638
// 009bf5c4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009bf5c8  85ed                 test ebp, ebp
// 009bf5ca  7416                 je 0x9bf5e2
// 009bf5cc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009bf5cf  e8fe9f0d00           call 0xa995d2
// 009bf5d4  a900010000           test eax, 0x100
// 009bf5d9  740b                 je 0x9bf5e6
// 009bf5db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009bf5df  83e040               and eax, 0x40
// 009bf5e2  85c0                 test eax, eax
// 009bf5e4  7552                 jne 0x9bf638
// 009bf5e6  f644240c29           test byte ptr [esp + 0xc], 0x29
// 009bf5eb  7533                 jne 0x9bf620
// 009bf5ed  8b06                 mov eax, dword ptr [esi]
// 009bf5ef  8b5058               mov edx, dword ptr [eax + 0x58]
// 009bf5f2  53                   push ebx
// 009bf5f3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009bf5f7  53                   push ebx
// 009bf5f8  55                   push ebp
// 009bf5f9  57                   push edi
// 009bf5fa  8bce                 mov ecx, esi
// 009bf5fc  ffd2                 call edx
// 009bf5fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009bf602  8b542420             mov edx, dword ptr [esp + 0x20]
// 009bf606  8b06                 mov eax, dword ptr [esi]
// 009bf608  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009bf60b  51                   push ecx
// 009bf60c  52                   push edx
// 009bf60d  53                   push ebx
// 009bf60e  55                   push ebp
// 009bf60f  57                   push edi
// 009bf610  8bce                 mov ecx, esi
// 009bf612  ffd0                 call eax
// 009bf614  0fb64638             movzx eax, byte ptr [esi + 0x38]
// 009bf618  5b                   pop ebx
// 009bf619  5f                   pop edi
// 009bf61a  5d                   pop ebp
// 009bf61b  5e                   pop esi
// 009bf61c  59                   pop ecx
// 009bf61d  c21000               ret 0x10
// 009bf620  8b442420             mov eax, dword ptr [esp + 0x20]
// 009bf624  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009bf628  8b16                 mov edx, dword ptr [esi]
// 009bf62a  8b5260               mov edx, dword ptr [edx + 0x60]
// 009bf62d  50                   push eax
// 009bf62e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009bf632  51                   push ecx
// 009bf633  50                   push eax
// 009bf634  8bce                 mov ecx, esi
// 009bf636  ffd2                 call edx
// 009bf638  5f                   pop edi
// 009bf639  5d                   pop ebp
// 009bf63a  b801000000           mov eax, 1
// 009bf63f  5e                   pop esi
// 009bf640  59                   pop ecx
// 009bf641  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnButtonDown@CXTPTreeBase@@MAEHHIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
