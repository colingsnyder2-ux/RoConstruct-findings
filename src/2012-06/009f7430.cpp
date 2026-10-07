// roc 2012-06 009f7430  unit: CXTCaption  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7430
//
// 009f7430  8b442408             mov eax, dword ptr [esp + 8]
// 009f7434  53                   push ebx
// 009f7435  55                   push ebp
// 009f7436  56                   push esi
// 009f7437  8bf1                 mov esi, ecx
// 009f7439  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f743d  57                   push edi
// 009f743e  898e84000000         mov dword ptr [esi + 0x84], ecx
// 009f7444  85c0                 test eax, eax
// 009f7446  7405                 je 0x9f744d
// 009f7448  8b4020               mov eax, dword ptr [eax + 0x20]
// 009f744b  eb02                 jmp 0x9f744f
// 009f744d  33c0                 xor eax, eax
// 009f744f  8b3d503ab200         mov edi, dword ptr [0xb23a50]
// 009f7455  894638               mov dword ptr [esi + 0x38], eax
// 009f7458  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009f745b  50                   push eax
// 009f745c  ffd7                 call edi
// 009f745e  50                   push eax
// 009f745f  e802b2f8ff           call 0x982666
// 009f7464  898688000000         mov dword ptr [esi + 0x88], eax
// 009f746a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009f746d  51                   push ecx
// 009f746e  ffd7                 call edi
// 009f7470  50                   push eax
// 009f7471  e8f0b1f8ff           call 0x982666
// 009f7476  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 009f747c  8b2dd83ab200         mov ebp, dword ptr [0xb23ad8]
// 009f7482  89868c000000         mov dword ptr [esi + 0x8c], eax
// 009f7488  8b4220               mov eax, dword ptr [edx + 0x20]
// 009f748b  8d9e98000000         lea ebx, [esi + 0x98]
// 009f7491  53                   push ebx
// 009f7492  50                   push eax
// 009f7493  ffd5                 call ebp
// 009f7495  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 009f749b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009f749e  8dbea8000000         lea edi, [esi + 0xa8]
// 009f74a4  57                   push edi
// 009f74a5  52                   push edx
// 009f74a6  ffd5                 call ebp
// 009f74a8  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009f74ae  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009f74b1  8d86b8000000         lea eax, [esi + 0xb8]
// 009f74b7  50                   push eax
// 009f74b8  52                   push edx
// 009f74b9  ffd5                 call ebp
// 009f74bb  8b4304               mov eax, dword ptr [ebx + 4]
// 009f74be  2b430c               sub eax, dword ptr [ebx + 0xc]
// 009f74c1  6a05                 push 5
// 009f74c3  2b4704               sub eax, dword ptr [edi + 4]
// 009f74c6  8d8edc000000         lea ecx, [esi + 0xdc]
// 009f74cc  03470c               add eax, dword ptr [edi + 0xc]
// 009f74cf  89467c               mov dword ptr [esi + 0x7c], eax
// 009f74d2  e8cdb5f8ff           call 0x982aa4
// 009f74d7  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 009f74dd  51                   push ecx
// 009f74de  ff15c43cb200         call dword ptr [0xb23cc4]
// 009f74e4  8b1dfc3bb200         mov ebx, dword ptr [0xb23bfc]
// 009f74ea  6a2d                 push 0x2d
// 009f74ec  ffd3                 call ebx
// 009f74ee  8bf0                 mov esi, eax
// 009f74f0  6a2e                 push 0x2e
// 009f74f2  03f6                 add esi, esi
// 009f74f4  ffd3                 call ebx
// 009f74f6  03c0                 add eax, eax
// 009f74f8  50                   push eax
// 009f74f9  56                   push esi
// 009f74fa  57                   push edi
// 009f74fb  ff154c3bb200         call dword ptr [0xb23b4c]
// 009f7501  5f                   pop edi
// 009f7502  5e                   pop esi
// 009f7503  5d                   pop ebp
// 009f7504  5b                   pop ebx
// 009f7505  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTCaption.cpp (function ?SetChildWindow@CXTCaption@@UAEXPAVCWnd@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaption.cpp
