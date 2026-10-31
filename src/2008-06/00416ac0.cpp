// from server: 100% by colin
// roc 2008-06 00416ac0  unit: VCContent::?$CComObject  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416ac0
//
// 00416ac0  55                   push ebp
// 00416ac1  8bec                 mov ebp, esp
// 00416ac3  6aff                 push -1
// 00416ac5  68e0da7b00           push 0x7bdae0
// 00416aca  64a100000000         mov eax, dword ptr fs:[0]
// 00416ad0  50                   push eax
// 00416ad1  64892500000000       mov dword ptr fs:[0], esp
// 00416ad8  83ec08               sub esp, 8
// 00416adb  53                   push ebx
// 00416adc  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00416adf  56                   push esi
// 00416ae0  57                   push edi
// 00416ae1  8965f0               mov dword ptr [ebp - 0x10], esp
// 00416ae4  85db                 test ebx, ebx
// 00416ae6  7518                 jne 0x416b00
// 00416ae8  b803400080           mov eax, 0x80004003
// 00416aed  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00416af0  64890d00000000       mov dword ptr fs:[0], ecx
// 00416af7  5f                   pop edi
// 00416af8  5e                   pop esi
// 00416af9  5b                   pop ebx
// 00416afa  8be5                 mov esp, ebp
// 00416afc  5d                   pop ebp
// 00416afd  c20c00               ret 0xc
// 00416b00  bf0e000780           mov edi, 0x8007000e
// 00416b05  6894000000           push 0x94
// 00416b0a  c70300000000         mov dword ptr [ebx], 0
// 00416b10  897d10               mov dword ptr [ebp + 0x10], edi
// 00416b13  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00416b1a  e8019e2800           call 0x6a0920
// 00416b1f  8bf0                 mov esi, eax
// 00416b21  83c404               add esp, 4
// 00416b24  85f6                 test esi, esi
// 00416b26  7430                 je 0x416b58
// 00416b28  6a01                 push 1
// 00416b2a  6a03                 push 3
// 00416b2c  8d4e0c               lea ecx, [esi + 0xc]
// 00416b2f  c7460800000000       mov dword ptr [esi + 8], 0
// 00416b36  ff1528248000         call dword ptr [0x802428]
// 00416b3c  c706bcea8000         mov dword ptr [esi], 0x80eabc
// 00416b42  c7460498ea8000       mov dword ptr [esi + 4], 0x80ea98
// 00416b49  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00416b4f  8b01                 mov eax, dword ptr [ecx]
// 00416b51  8b5004               mov edx, dword ptr [eax + 4]
// 00416b54  ffd2                 call edx
// 00416b56  eb02                 jmp 0x416b5a
// 00416b58  33f6                 xor esi, esi
// 00416b5a  83c8ff               or eax, 0xffffffff
// 00416b5d  8945fc               mov dword ptr [ebp - 4], eax
// 00416b60  85f6                 test esi, esi
// 00416b62  7436                 je 0x416b9a
// 00416b64  ff4608               inc dword ptr [esi + 8]
// 00416b67  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00416b6a  014608               add dword ptr [esi + 8], eax
// 00416b6d  8b06                 mov eax, dword ptr [esi]
// 00416b6f  8b10                 mov edx, dword ptr [eax]
// 00416b71  53                   push ebx
// 00416b72  51                   push ecx
// 00416b73  56                   push esi
// 00416b74  ffd2                 call edx
// 00416b76  8bf8                 mov edi, eax
// 00416b78  85ff                 test edi, edi
// 00416b7a  741e                 je 0x416b9a
// 00416b7c  8b06                 mov eax, dword ptr [esi]
// 00416b7e  8b5010               mov edx, dword ptr [eax + 0x10]
// 00416b81  6a01                 push 1
// 00416b83  8bce                 mov ecx, esi
// 00416b85  ffd2                 call edx
// 00416b87  eb11                 jmp 0x416b9a
// 00416b89  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00416b8c  e8bf9d2800           call 0x6a0950
// 00416b91  b8976b4100           mov eax, 0x416b97
// 00416b96  c3                   ret 
// 00416b97  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00416b9a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00416b9d  8bc7                 mov eax, edi
// 00416b9f  5f                   pop edi
// 00416ba0  5e                   pop esi
// 00416ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 00416ba8  5b                   pop ebx
// 00416ba9  8be5                 mov esp, ebp
// 00416bab  5d                   pop ebp
// 00416bac  c20c00               ret 0xc

// from server: 0% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp
