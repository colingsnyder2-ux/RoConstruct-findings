// roc 2009-12 008149a0  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008149a0
//
// 008149a0  83ec10               sub esp, 0x10
// 008149a3  56                   push esi
// 008149a4  8bf1                 mov esi, ecx
// 008149a6  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 008149ad  0f859d000000         jne 0x814a50
// 008149b3  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008149b9  85c0                 test eax, eax
// 008149bb  0f848f000000         je 0x814a50
// 008149c1  83782000             cmp dword ptr [eax + 0x20], 0
// 008149c5  0f8485000000         je 0x814a50
// 008149cb  8bc8                 mov ecx, eax
// 008149cd  8b01                 mov eax, dword ptr [ecx]
// 008149cf  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008149d5  ffd2                 call edx
// 008149d7  85c0                 test eax, eax
// 008149d9  7435                 je 0x814a10
// 008149db  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008149e1  85c9                 test ecx, ecx
// 008149e3  742b                 je 0x814a10
// 008149e5  837c241800           cmp dword ptr [esp + 0x18], 0
// 008149ea  740e                 je 0x8149fa
// 008149ec  8389e400000008       or dword ptr [ecx + 0xe4], 8
// 008149f3  5e                   pop esi
// 008149f4  83c410               add esp, 0x10
// 008149f7  c20400               ret 4
// 008149fa  8b01                 mov eax, dword ptr [ecx]
// 008149fc  5e                   pop esi
// 008149fd  83c410               add esp, 0x10
// 00814a00  c744240400000000     mov dword ptr [esp + 4], 0
// 00814a08  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00814a0e  ffe2                 jmp edx
// 00814a10  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00814a16  50                   push eax
// 00814a17  8d4c2408             lea ecx, [esp + 8]
// 00814a1b  e8b0680300           call 0x84b2d0
// 00814a20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00814a24  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00814a28  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00814a2c  2b442404             sub eax, dword ptr [esp + 4]
// 00814a30  0fb7d1               movzx edx, cx
// 00814a33  0fb7c8               movzx ecx, ax
// 00814a36  c1e210               shl edx, 0x10
// 00814a39  0bd1                 or edx, ecx
// 00814a3b  52                   push edx
// 00814a3c  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00814a42  8b4220               mov eax, dword ptr [edx + 0x20]
// 00814a45  6a00                 push 0
// 00814a47  6a05                 push 5
// 00814a49  50                   push eax
// 00814a4a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00814a50  5e                   pop esi
// 00814a51  83c410               add esp, 0x10
// 00814a54  c20400               ret 4
// copied from an identical function in another client (function ?RecalcFrameLayout@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp