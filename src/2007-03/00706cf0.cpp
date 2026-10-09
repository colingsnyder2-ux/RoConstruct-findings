// roc 2007-03 00706cf0  unit: seg_00700000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00706cf0
//
// 00706cf0  83ec28               sub esp, 0x28
// 00706cf3  56                   push esi
// 00706cf4  e89776f1ff           call 0x61e390
// 00706cf9  8b7008               mov esi, dword ptr [eax + 8]
// 00706cfc  8d442404             lea eax, [esp + 4]
// 00706d00  50                   push eax
// 00706d01  68e0dd7d00           push 0x7ddde0
// 00706d06  56                   push esi
// 00706d07  ff157cee7700         call dword ptr [0x77ee7c]
// 00706d0d  85c0                 test eax, eax
// 00706d0f  756d                 jne 0x706d7e
// 00706d11  8b0dfcec7700         mov ecx, dword ptr [0x77ecfc]
// 00706d17  57                   push edi
// 00706d18  33ff                 xor edi, edi
// 00706d1a  c744240803000000     mov dword ptr [esp + 8], 3
// 00706d22  894c240c             mov dword ptr [esp + 0xc], ecx
// 00706d26  897c2410             mov dword ptr [esp + 0x10], edi
// 00706d2a  897c2414             mov dword ptr [esp + 0x14], edi
// 00706d2e  89742418             mov dword ptr [esp + 0x18], esi
// 00706d32  897c241c             mov dword ptr [esp + 0x1c], edi
// 00706d36  e85576f1ff           call 0x61e390
// 00706d3b  68007f0000           push 0x7f00
// 00706d40  57                   push edi
// 00706d41  ff15f0ec7700         call dword ptr [0x77ecf0]
// 00706d47  6a0f                 push 0xf
// 00706d49  89442424             mov dword ptr [esp + 0x24], eax
// 00706d4d  ff15c0ee7700         call dword ptr [0x77eec0]
// 00706d53  8d542408             lea edx, [esp + 8]
// 00706d57  52                   push edx
// 00706d58  89442428             mov dword ptr [esp + 0x28], eax
// 00706d5c  897c242c             mov dword ptr [esp + 0x2c], edi
// 00706d60  c7442430e0dd7d00     mov dword ptr [esp + 0x30], 0x7ddde0
// 00706d68  e8af430300           call 0x73b11c
// 00706d6d  85c0                 test eax, eax
// 00706d6f  5f                   pop edi
// 00706d70  750c                 jne 0x706d7e
// 00706d72  e8d53d0300           call 0x73ab4c
// 00706d77  33c0                 xor eax, eax
// 00706d79  5e                   pop esi
// 00706d7a  83c428               add esp, 0x28
// 00706d7d  c3                   ret 
// 00706d7e  b801000000           mov eax, 1
// 00706d83  5e                   pop esi
// 00706d84  83c428               add esp, 0x28
// 00706d87  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?RegisterWindowClass@CXTCaptionPopupWnd@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
