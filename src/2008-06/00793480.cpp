// roc 2008-06 00793480  unit: CXTCaptionPopupWnd  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793480
//
// 00793480  83ec28               sub esp, 0x28
// 00793483  56                   push esi
// 00793484  e89dd4f0ff           call 0x6a0926
// 00793489  8b7008               mov esi, dword ptr [eax + 8]
// 0079348c  8d442404             lea eax, [esp + 4]
// 00793490  50                   push eax
// 00793491  6880b68600           push 0x86b680
// 00793496  56                   push esi
// 00793497  ff15542c8000         call dword ptr [0x802c54]
// 0079349d  85c0                 test eax, eax
// 0079349f  756d                 jne 0x79350e
// 007934a1  8b0dc42d8000         mov ecx, dword ptr [0x802dc4]
// 007934a7  57                   push edi
// 007934a8  33ff                 xor edi, edi
// 007934aa  c744240803000000     mov dword ptr [esp + 8], 3
// 007934b2  894c240c             mov dword ptr [esp + 0xc], ecx
// 007934b6  897c2410             mov dword ptr [esp + 0x10], edi
// 007934ba  897c2414             mov dword ptr [esp + 0x14], edi
// 007934be  89742418             mov dword ptr [esp + 0x18], esi
// 007934c2  897c241c             mov dword ptr [esp + 0x1c], edi
// 007934c6  e85bd4f0ff           call 0x6a0926
// 007934cb  68007f0000           push 0x7f00
// 007934d0  57                   push edi
// 007934d1  ff15d02d8000         call dword ptr [0x802dd0]
// 007934d7  6a0f                 push 0xf
// 007934d9  89442424             mov dword ptr [esp + 0x24], eax
// 007934dd  ff15e42b8000         call dword ptr [0x802be4]
// 007934e3  8d542408             lea edx, [esp + 8]
// 007934e7  52                   push edx
// 007934e8  89442428             mov dword ptr [esp + 0x28], eax
// 007934ec  897c242c             mov dword ptr [esp + 0x2c], edi
// 007934f0  c744243080b68600     mov dword ptr [esp + 0x30], 0x86b680
// 007934f8  e865900200           call 0x7bc562
// 007934fd  5f                   pop edi
// 007934fe  85c0                 test eax, eax
// 00793500  750c                 jne 0x79350e
// 00793502  e8858a0200           call 0x7bbf8c
// 00793507  33c0                 xor eax, eax
// 00793509  5e                   pop esi
// 0079350a  83c428               add esp, 0x28
// 0079350d  c3                   ret 
// 0079350e  b801000000           mov eax, 1
// 00793513  5e                   pop esi
// 00793514  83c428               add esp, 0x28
// 00793517  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionPopupWnd.cpp (function ?RegisterWindowClass@CXTCaptionPopupWnd@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionPopupWnd.cpp
