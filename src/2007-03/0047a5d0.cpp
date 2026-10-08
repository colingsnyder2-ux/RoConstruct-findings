// roc 2007-03 0047a5d0  unit: seg_00470000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a5d0
//
// 0047a5d0  807c240400           cmp byte ptr [esp + 4], 0
// 0047a5d5  7409                 je 0x47a5e0
// 0047a5d7  c60602               mov byte ptr [esi], 2
// 0047a5da  c6460201             mov byte ptr [esi + 2], 1
// 0047a5de  eb07                 jmp 0x47a5e7
// 0047a5e0  c60603               mov byte ptr [esi], 3
// 0047a5e3  c6460200             mov byte ptr [esi + 2], 0
// 0047a5e7  68387e8b00           push 0x8b7e38
// 0047a5ec  66c746102000         mov word ptr [esi + 0x10], 0x20
// 0047a5f2  894608               mov dword ptr [esi + 8], eax
// 0047a5f5  c6460400             mov byte ptr [esi + 4], 0
// 0047a5f9  ff15f4ed7700         call dword ptr [0x77edf4]
// 0047a5ff  b980000000           mov ecx, 0x80
// 0047a604  33c0                 xor eax, eax
// 0047a606  840dd87e8b00         test byte ptr [0x8b7ed8], cl
// 0047a60c  7405                 je 0x47a613
// 0047a60e  b801000000           mov eax, 1
// 0047a613  840dd97e8b00         test byte ptr [0x8b7ed9], cl
// 0047a619  7403                 je 0x47a61e
// 0047a61b  83c802               or eax, 2
// 0047a61e  840dda7e8b00         test byte ptr [0x8b7eda], cl
// 0047a624  7403                 je 0x47a629
// 0047a626  83c840               or eax, 0x40
// 0047a629  840ddb7e8b00         test byte ptr [0x8b7edb], cl
// 0047a62f  7402                 je 0x47a633
// 0047a631  0bc1                 or eax, ecx
// 0047a633  840ddc7e8b00         test byte ptr [0x8b7edc], cl
// 0047a639  7405                 je 0x47a640
// 0047a63b  0d00010000           or eax, 0x100
// 0047a640  840ddd7e8b00         test byte ptr [0x8b7edd], cl
// 0047a646  7405                 je 0x47a64d
// 0047a648  0d00020000           or eax, 0x200
// 0047a64d  89460c               mov dword ptr [esi + 0xc], eax
// 0047a650  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
