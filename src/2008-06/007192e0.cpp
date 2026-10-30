// from server: 100% by auto
// roc 2008-06 007192e0  unit: CSelectionCaption  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007192e0
//
// 007192e0  8b442408             mov eax, dword ptr [esp + 8]
// 007192e4  53                   push ebx
// 007192e5  55                   push ebp
// 007192e6  56                   push esi
// 007192e7  8bf1                 mov esi, ecx
// 007192e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007192ed  57                   push edi
// 007192ee  898e84000000         mov dword ptr [esi + 0x84], ecx
// 007192f4  85c0                 test eax, eax
// 007192f6  7405                 je 0x7192fd
// 007192f8  8b4020               mov eax, dword ptr [eax + 0x20]
// 007192fb  eb02                 jmp 0x7192ff
// 007192fd  33c0                 xor eax, eax
// 007192ff  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 00719305  894638               mov dword ptr [esi + 0x38], eax
// 00719308  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0071930b  50                   push eax
// 0071930c  ffd7                 call edi
// 0071930e  50                   push eax
// 0071930f  e8ca78f8ff           call 0x6a0bde
// 00719314  898688000000         mov dword ptr [esi + 0x88], eax
// 0071931a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0071931d  51                   push ecx
// 0071931e  ffd7                 call edi
// 00719320  50                   push eax
// 00719321  e8b878f8ff           call 0x6a0bde
// 00719326  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0071932c  8b2d842d8000         mov ebp, dword ptr [0x802d84]
// 00719332  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00719338  8b4220               mov eax, dword ptr [edx + 0x20]
// 0071933b  8d9e98000000         lea ebx, [esi + 0x98]
// 00719341  53                   push ebx
// 00719342  50                   push eax
// 00719343  ffd5                 call ebp
// 00719345  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0071934b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0071934e  8dbea8000000         lea edi, [esi + 0xa8]
// 00719354  57                   push edi
// 00719355  52                   push edx
// 00719356  ffd5                 call ebp
// 00719358  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0071935e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00719361  8d86b8000000         lea eax, [esi + 0xb8]
// 00719367  50                   push eax
// 00719368  52                   push edx
// 00719369  ffd5                 call ebp
// 0071936b  8b4304               mov eax, dword ptr [ebx + 4]
// 0071936e  2b430c               sub eax, dword ptr [ebx + 0xc]
// 00719371  6a05                 push 5
// 00719373  2b4704               sub eax, dword ptr [edi + 4]
// 00719376  8d8edc000000         lea ecx, [esi + 0xdc]
// 0071937c  03470c               add eax, dword ptr [edi + 0xc]
// 0071937f  89467c               mov dword ptr [esi + 0x7c], eax
// 00719382  e8e775f8ff           call 0x6a096e
// 00719387  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0071938d  51                   push ecx
// 0071938e  ff15942c8000         call dword ptr [0x802c94]
// 00719394  8b1d4c2d8000         mov ebx, dword ptr [0x802d4c]
// 0071939a  6a2d                 push 0x2d
// 0071939c  ffd3                 call ebx
// 0071939e  8bf0                 mov esi, eax
// 007193a0  6a2e                 push 0x2e
// 007193a2  03f6                 add esi, esi
// 007193a4  ffd3                 call ebx
// 007193a6  03c0                 add eax, eax
// 007193a8  50                   push eax
// 007193a9  56                   push esi
// 007193aa  57                   push edi
// 007193ab  ff15282d8000         call dword ptr [0x802d28]
// 007193b1  5f                   pop edi
// 007193b2  5e                   pop esi
// 007193b3  5d                   pop ebp
// 007193b4  5b                   pop ebx
// 007193b5  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaption.cpp (function ?SetChildWindow@CXTCaption@@UAEXPAVCWnd@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaption.cpp
