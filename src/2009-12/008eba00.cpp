// roc 2009-12 008eba00  unit: CXTPScrollBase  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eba00
//
// 008eba00  83ec10               sub esp, 0x10
// 008eba03  56                   push esi
// 008eba04  57                   push edi
// 008eba05  8bf1                 mov esi, ecx
// 008eba07  33c9                 xor ecx, ecx
// 008eba09  6a37                 push 0x37
// 008eba0b  51                   push ecx
// 008eba0c  51                   push ecx
// 008eba0d  51                   push ecx
// 008eba0e  33c0                 xor eax, eax
// 008eba10  51                   push ecx
// 008eba11  89461c               mov dword ptr [esi + 0x1c], eax
// 008eba14  8b4608               mov eax, dword ptr [esi + 8]
// 008eba17  51                   push ecx
// 008eba18  50                   push eax
// 008eba19  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008eba20  894e20               mov dword ptr [esi + 0x20], ecx
// 008eba23  ff15e0c99800         call dword ptr [0x98c9e0]
// 008eba29  8b4e08               mov ecx, dword ptr [esi + 8]
// 008eba2c  51                   push ecx
// 008eba2d  e8f880f0ff           call 0x7f3b2a
// 008eba32  8bf8                 mov edi, eax
// 008eba34  8b17                 mov edx, dword ptr [edi]
// 008eba36  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 008eba3c  8bcf                 mov ecx, edi
// 008eba3e  ffd0                 call eax
// 008eba40  f7d8                 neg eax
// 008eba42  1bc0                 sbb eax, eax
// 008eba44  23c7                 and eax, edi
// 008eba46  7410                 je 0x8eba58
// 008eba48  8b10                 mov edx, dword ptr [eax]
// 008eba4a  8bc8                 mov ecx, eax
// 008eba4c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008eba52  6a00                 push 0
// 008eba54  ffd0                 call eax
// 008eba56  eb34                 jmp 0x8eba8c
// 008eba58  57                   push edi
// 008eba59  8d4c240c             lea ecx, [esp + 0xc]
// 008eba5d  e86ef8f5ff           call 0x84b2d0
// 008eba62  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008eba66  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 008eba6a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008eba6e  2b442408             sub eax, dword ptr [esp + 8]
// 008eba72  0fb7d1               movzx edx, cx
// 008eba75  0fb7c8               movzx ecx, ax
// 008eba78  c1e210               shl edx, 0x10
// 008eba7b  0bd1                 or edx, ecx
// 008eba7d  52                   push edx
// 008eba7e  8b5720               mov edx, dword ptr [edi + 0x20]
// 008eba81  6a00                 push 0
// 008eba83  6a05                 push 5
// 008eba85  52                   push edx
// 008eba86  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008eba8c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008eba8f  5f                   pop edi
// 008eba90  5e                   pop esi
// 008eba91  85c9                 test ecx, ecx
// 008eba93  740e                 je 0x8ebaa3
// 008eba95  8b01                 mov eax, dword ptr [ecx]
// 008eba97  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008eba9d  6a01                 push 1
// 008eba9f  6a00                 push 0
// 008ebaa1  ffd2                 call edx
// 008ebaa3  83c410               add esp, 0x10
// 008ebaa6  c3                   ret 
// copied from an identical function in another client (function ?RecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2007FrameHook.cpp