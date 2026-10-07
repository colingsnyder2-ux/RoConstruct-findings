// roc 2012-06 00a6b820  unit: CXTCaptionPopupWnd  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b820
//
// 00a6b820  83ec28               sub esp, 0x28
// 00a6b823  56                   push esi
// 00a6b824  e8a96bf1ff           call 0x9823d2
// 00a6b829  8b7008               mov esi, dword ptr [eax + 8]
// 00a6b82c  8d442404             lea eax, [esp + 4]
// 00a6b830  50                   push eax
// 00a6b831  68d05fc200           push 0xc25fd0
// 00a6b836  56                   push esi
// 00a6b837  ff152c3cb200         call dword ptr [0xb23c2c]
// 00a6b83d  85c0                 test eax, eax
// 00a6b83f  756d                 jne 0xa6b8ae
// 00a6b841  8b0db43ab200         mov ecx, dword ptr [0xb23ab4]
// 00a6b847  57                   push edi
// 00a6b848  33ff                 xor edi, edi
// 00a6b84a  c744240803000000     mov dword ptr [esp + 8], 3
// 00a6b852  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a6b856  897c2410             mov dword ptr [esp + 0x10], edi
// 00a6b85a  897c2414             mov dword ptr [esp + 0x14], edi
// 00a6b85e  89742418             mov dword ptr [esp + 0x18], esi
// 00a6b862  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a6b866  e8676bf1ff           call 0x9823d2
// 00a6b86b  68007f0000           push 0x7f00
// 00a6b870  57                   push edi
// 00a6b871  ff159c3ab200         call dword ptr [0xb23a9c]
// 00a6b877  6a0f                 push 0xf
// 00a6b879  89442424             mov dword ptr [esp + 0x24], eax
// 00a6b87d  ff15783cb200         call dword ptr [0xb23c78]
// 00a6b883  8d542408             lea edx, [esp + 8]
// 00a6b887  52                   push edx
// 00a6b888  89442428             mov dword ptr [esp + 0x28], eax
// 00a6b88c  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a6b890  c7442430d05fc200     mov dword ptr [esp + 0x30], 0xc25fd0
// 00a6b898  e871e00200           call 0xa9990e
// 00a6b89d  5f                   pop edi
// 00a6b89e  85c0                 test eax, eax
// 00a6b8a0  750c                 jne 0xa6b8ae
// 00a6b8a2  e83fde0200           call 0xa996e6
// 00a6b8a7  33c0                 xor eax, eax
// 00a6b8a9  5e                   pop esi
// 00a6b8aa  83c428               add esp, 0x28
// 00a6b8ad  c3                   ret 
// 00a6b8ae  b801000000           mov eax, 1
// 00a6b8b3  5e                   pop esi
// 00a6b8b4  83c428               add esp, 0x28
// 00a6b8b7  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTCaptionPopupWnd.cpp (function ?RegisterWindowClass@CXTCaptionPopupWnd@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionPopupWnd.cpp
