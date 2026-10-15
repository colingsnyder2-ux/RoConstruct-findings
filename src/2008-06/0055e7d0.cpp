// roc 2008-06 0055e7d0  unit: RBX::MD5HasherImpl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e7d0
//
// 0055e7d0  83ec08               sub esp, 8
// 0055e7d3  56                   push esi
// 0055e7d4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0055e7d8  0fb7460c             movzx eax, word ptr [esi + 0xc]
// 0055e7dc  0fb7d0               movzx edx, ax
// 0055e7df  42                   inc edx
// 0055e7e0  83fa02               cmp edx, 2
// 0055e7e3  51                   push ecx
// 0055e7e4  8bcc                 mov ecx, esp
// 0055e7e6  7d0c                 jge 0x55e7f4
// 0055e7e8  6a00                 push 0
// 0055e7ea  50                   push eax
// 0055e7eb  0fb701               movzx eax, word ptr [ecx]
// 0055e7ee  50                   push eax
// 0055e7ef  e82cd8ffff           call 0x55c020
// 0055e7f4  6683f81f             cmp ax, 0x1f
// 0055e7f8  760c                 jbe 0x55e806
// 0055e7fa  0fb709               movzx ecx, word ptr [ecx]
// 0055e7fd  6a01                 push 1
// 0055e7ff  50                   push eax
// 0055e800  51                   push ecx
// 0055e801  e81ad8ffff           call 0x55c020
// 0055e806  668901               mov word ptr [ecx], ax
// 0055e809  668b5610             mov dx, word ptr [esi + 0x10]
// 0055e80d  6642                 inc dx
// 0055e80f  0fb7c2               movzx eax, dx
// 0055e812  0fb7d0               movzx edx, ax
// 0055e815  42                   inc edx
// 0055e816  83fa02               cmp edx, 2
// 0055e819  51                   push ecx
// 0055e81a  8bcc                 mov ecx, esp
// 0055e81c  7d0c                 jge 0x55e82a
// 0055e81e  6a00                 push 0
// 0055e820  50                   push eax
// 0055e821  0fb701               movzx eax, word ptr [ecx]
// 0055e824  50                   push eax
// 0055e825  e836d8ffff           call 0x55c060
// 0055e82a  6683f80c             cmp ax, 0xc
// 0055e82e  760c                 jbe 0x55e83c
// 0055e830  0fb709               movzx ecx, word ptr [ecx]
// 0055e833  6a01                 push 1
// 0055e835  50                   push eax
// 0055e836  51                   push ecx
// 0055e837  e824d8ffff           call 0x55c060
// 0055e83c  668901               mov word ptr [ecx], ax
// 0055e83f  ba6c070000           mov edx, 0x76c
// 0055e844  66035614             add dx, word ptr [esi + 0x14]
// 0055e848  51                   push ecx
// 0055e849  0fb7c2               movzx eax, dx
// 0055e84c  0fb7d0               movzx edx, ax
// 0055e84f  42                   inc edx
// 0055e850  81fa79050000         cmp edx, 0x579
// 0055e856  8bcc                 mov ecx, esp
// 0055e858  7d0c                 jge 0x55e866
// 0055e85a  6a00                 push 0
// 0055e85c  50                   push eax
// 0055e85d  0fb701               movzx eax, word ptr [ecx]
// 0055e860  50                   push eax
// 0055e861  e8dad7ffff           call 0x55c040
// 0055e866  ba10270000           mov edx, 0x2710
// 0055e86b  663bc2               cmp ax, dx
// 0055e86e  760c                 jbe 0x55e87c
// 0055e870  6a01                 push 1
// 0055e872  50                   push eax
// 0055e873  0fb701               movzx eax, word ptr [ecx]
// 0055e876  50                   push eax
// 0055e877  e8c4d7ffff           call 0x55c040
// 0055e87c  668901               mov word ptr [ecx], ax
// 0055e87f  8d4c2420             lea ecx, [esp + 0x20]
// 0055e883  e878e7ffff           call 0x55d000
// 0055e888  8b0e                 mov ecx, dword ptr [esi]
// 0055e88a  8b5604               mov edx, dword ptr [esi + 4]
// 0055e88d  8b4608               mov eax, dword ptr [esi + 8]
// 0055e890  6a00                 push 0
// 0055e892  6a00                 push 0
// 0055e894  51                   push ecx
// 0055e895  52                   push edx
// 0055e896  50                   push eax
// 0055e897  e894e0ffff           call 0x55c930
// 0055e89c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055e8a0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055e8a4  83c414               add esp, 0x14
// 0055e8a7  89542408             mov dword ptr [esp + 8], edx
// 0055e8ab  8d542404             lea edx, [esp + 4]
// 0055e8af  89442404             mov dword ptr [esp + 4], eax
// 0055e8b3  52                   push edx
// 0055e8b4  8d442418             lea eax, [esp + 0x18]
// 0055e8b8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055e8bc  50                   push eax
// 0055e8bd  8bce                 mov ecx, esi
// 0055e8bf  e8ace9ffff           call 0x55d270
// 0055e8c4  8bc6                 mov eax, esi
// 0055e8c6  5e                   pop esi
// 0055e8c7  83c408               add esp, 8
// 0055e8ca  c3                   ret 
// library rbxgs/roc_unit_00db8fe842d0c314.cpp (function ?create_time@?$second_clock@Vptime@posix_time@boost@@@date_time@boost@@CA?AVptime@posix_time@3@PAUtm@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_00db8fe842d0c314.cpp
