// roc 2008-06 00743d00  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743d00
//
// 00743d00  83ec10               sub esp, 0x10
// 00743d03  56                   push esi
// 00743d04  8bf1                 mov esi, ecx
// 00743d06  e8b574f6ff           call 0x6ab1c0
// 00743d0b  85c0                 test eax, eax
// 00743d0d  7440                 je 0x743d4f
// 00743d0f  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743d15  6a00                 push 0
// 00743d17  6aff                 push -1
// 00743d19  e8b231f7ff           call 0x6b6ed0
// 00743d1e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743d24  8b01                 mov eax, dword ptr [ecx]
// 00743d26  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00743d2c  6a00                 push 0
// 00743d2e  6aff                 push -1
// 00743d30  ffd2                 call edx
// 00743d32  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00743d36  8b06                 mov eax, dword ptr [esi]
// 00743d38  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00743d3c  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00743d42  51                   push ecx
// 00743d43  52                   push edx
// 00743d44  8bce                 mov ecx, esi
// 00743d46  ffd0                 call eax
// 00743d48  5e                   pop esi
// 00743d49  83c410               add esp, 0x10
// 00743d4c  c20c00               ret 0xc
// 00743d4f  837c241800           cmp dword ptr [esp + 0x18], 0
// 00743d54  7427                 je 0x743d7d
// 00743d56  ff15102e8000         call dword ptr [0x802e10]
// 00743d5c  50                   push eax
// 00743d5d  e87ccef5ff           call 0x6a0bde
// 00743d62  3b8674010000         cmp eax, dword ptr [esi + 0x174]
// 00743d68  754c                 jne 0x743db6
// 00743d6a  8b16                 mov edx, dword ptr [esi]
// 00743d6c  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 00743d72  8bce                 mov ecx, esi
// 00743d74  ffd0                 call eax
// 00743d76  5e                   pop esi
// 00743d77  83c410               add esp, 0x10
// 00743d7a  c20c00               ret 0xc
// 00743d7d  8d4c2404             lea ecx, [esp + 4]
// 00743d81  51                   push ecx
// 00743d82  8bce                 mov ecx, esi
// 00743d84  e8a7e6ffff           call 0x742430
// 00743d89  8b542420             mov edx, dword ptr [esp + 0x20]
// 00743d8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00743d91  52                   push edx
// 00743d92  51                   push ecx
// 00743d93  50                   push eax
// 00743d94  ff152c2d8000         call dword ptr [0x802d2c]
// 00743d9a  85c0                 test eax, eax
// 00743d9c  7418                 je 0x743db6
// 00743d9e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00743da2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00743da6  52                   push edx
// 00743da7  50                   push eax
// 00743da8  8bce                 mov ecx, esi
// 00743daa  e891f8ffff           call 0x743640
// 00743daf  5e                   pop esi
// 00743db0  83c410               add esp, 0x10
// 00743db3  c20c00               ret 0xc
// 00743db6  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00743dbc  e867ccf5ff           call 0x6a0a28
// 00743dc1  5e                   pop esi
// 00743dc2  83c410               add esp, 0x10
// 00743dc5  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnClick@CXTPControlEdit@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
