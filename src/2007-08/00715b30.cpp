// from server: 100% by auto
// roc 2007-08 00715b30  unit: CXTCaptionPopupWnd  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715b30
//
// 00715b30  83ec28               sub esp, 0x28
// 00715b33  56                   push esi
// 00715b34  e8c9a3f1ff           call 0x62ff02
// 00715b39  8b7008               mov esi, dword ptr [eax + 8]
// 00715b3c  8d442404             lea eax, [esp + 4]
// 00715b40  50                   push eax
// 00715b41  68b8f17d00           push 0x7df1b8
// 00715b46  56                   push esi
// 00715b47  ff15e8ec7700         call dword ptr [0x77ece8]
// 00715b4d  85c0                 test eax, eax
// 00715b4f  756d                 jne 0x715bbe
// 00715b51  8b0d2cec7700         mov ecx, dword ptr [0x77ec2c]
// 00715b57  57                   push edi
// 00715b58  33ff                 xor edi, edi
// 00715b5a  c744240803000000     mov dword ptr [esp + 8], 3
// 00715b62  894c240c             mov dword ptr [esp + 0xc], ecx
// 00715b66  897c2410             mov dword ptr [esp + 0x10], edi
// 00715b6a  897c2414             mov dword ptr [esp + 0x14], edi
// 00715b6e  89742418             mov dword ptr [esp + 0x18], esi
// 00715b72  897c241c             mov dword ptr [esp + 0x1c], edi
// 00715b76  e887a3f1ff           call 0x62ff02
// 00715b7b  68007f0000           push 0x7f00
// 00715b80  57                   push edi
// 00715b81  ff1520ec7700         call dword ptr [0x77ec20]
// 00715b87  6a0f                 push 0xf
// 00715b89  89442424             mov dword ptr [esp + 0x24], eax
// 00715b8d  ff156cec7700         call dword ptr [0x77ec6c]
// 00715b93  8d542408             lea edx, [esp + 8]
// 00715b97  52                   push edx
// 00715b98  89442428             mov dword ptr [esp + 0x28], eax
// 00715b9c  897c242c             mov dword ptr [esp + 0x2c], edi
// 00715ba0  c7442430b8f17d00     mov dword ptr [esp + 0x30], 0x7df1b8
// 00715ba8  e8452d0200           call 0x7388f2
// 00715bad  85c0                 test eax, eax
// 00715baf  5f                   pop edi
// 00715bb0  750c                 jne 0x715bbe
// 00715bb2  e865270200           call 0x73831c
// 00715bb7  33c0                 xor eax, eax
// 00715bb9  5e                   pop esi
// 00715bba  83c428               add esp, 0x28
// 00715bbd  c3                   ret 
// 00715bbe  b801000000           mov eax, 1
// 00715bc3  5e                   pop esi
// 00715bc4  83c428               add esp, 0x28
// 00715bc7  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?RegisterWindowClass@CXTCaptionPopupWnd@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
