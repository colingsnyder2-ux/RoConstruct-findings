// roc 2009-12 0083cf20  unit: CXTPControlPopupColor  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083cf20
//
// 0083cf20  6aff                 push -1
// 0083cf22  6868c89500           push 0x95c868
// 0083cf27  64a100000000         mov eax, dword ptr fs:[0]
// 0083cf2d  50                   push eax
// 0083cf2e  83ec2c               sub esp, 0x2c
// 0083cf31  53                   push ebx
// 0083cf32  56                   push esi
// 0083cf33  57                   push edi
// 0083cf34  a10052b600           mov eax, dword ptr [0xb65200]
// 0083cf39  33c4                 xor eax, esp
// 0083cf3b  50                   push eax
// 0083cf3c  8d44243c             lea eax, [esp + 0x3c]
// 0083cf40  64a300000000         mov dword ptr fs:[0], eax
// 0083cf46  8bf1                 mov esi, ecx
// 0083cf48  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0083cf4c  3b8684010000         cmp eax, dword ptr [esi + 0x184]
// 0083cf52  0f84e8000000         je 0x83d040
// 0083cf58  898684010000         mov dword ptr [esi + 0x184], eax
// 0083cf5e  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0083cf64  85c0                 test eax, eax
// 0083cf66  7526                 jne 0x83cf8e
// 0083cf68  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0083cf6e  85c0                 test eax, eax
// 0083cf70  7f1c                 jg 0x83cf8e
// 0083cf72  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083cf78  85c9                 test ecx, ecx
// 0083cf7a  740c                 je 0x83cf88
// 0083cf7c  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083cf7f  85c0                 test eax, eax
// 0083cf81  7f0b                 jg 0x83cf8e
// 0083cf83  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083cf86  eb06                 jmp 0x83cf8e
// 0083cf88  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0083cf8e  50                   push eax
// 0083cf8f  8bce                 mov ecx, esi
// 0083cf91  e87a8ffbff           call 0x7f5f10
// 0083cf96  8bc8                 mov ecx, eax
// 0083cf98  e8d304fdff           call 0x80d470
// 0083cf9d  8bf8                 mov edi, eax
// 0083cf9f  85ff                 test edi, edi
// 0083cfa1  0f8499000000         je 0x83d040
// 0083cfa7  8bcf                 mov ecx, edi
// 0083cfa9  e832f8fcff           call 0x80c7e0
// 0083cfae  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0083cfb1  83c720               add edi, 0x20
// 0083cfb4  f7d8                 neg eax
// 0083cfb6  1bc0                 sbb eax, eax
// 0083cfb8  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083cfbc  7479                 je 0x83d037
// 0083cfbe  8bff                 mov edi, edi
// 0083cfc0  8d442410             lea eax, [esp + 0x10]
// 0083cfc4  50                   push eax
// 0083cfc5  8d4c2418             lea ecx, [esp + 0x18]
// 0083cfc9  51                   push ecx
// 0083cfca  8d542454             lea edx, [esp + 0x54]
// 0083cfce  52                   push edx
// 0083cfcf  8bcf                 mov ecx, edi
// 0083cfd1  e84ac8fcff           call 0x809820
// 0083cfd6  8d4c2418             lea ecx, [esp + 0x18]
// 0083cfda  e851d8fcff           call 0x80a830
// 0083cfdf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0083cfe3  8d442418             lea eax, [esp + 0x18]
// 0083cfe7  50                   push eax
// 0083cfe8  53                   push ebx
// 0083cfe9  8bce                 mov ecx, esi
// 0083cfeb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0083cff3  e808fdffff           call 0x83cd00
// 0083cff8  8d4c2418             lea ecx, [esp + 0x18]
// 0083cffc  e89fd8fcff           call 0x80a8a0
// 0083d001  85c0                 test eax, eax
// 0083d003  751a                 jne 0x83d01f
// 0083d005  83ec24               sub esp, 0x24
// 0083d008  8d54243c             lea edx, [esp + 0x3c]
// 0083d00c  8bcc                 mov ecx, esp
// 0083d00e  89642438             mov dword ptr [esp + 0x38], esp
// 0083d012  52                   push edx
// 0083d013  e828d8fcff           call 0x80a840
// 0083d018  8bcb                 mov ecx, ebx
// 0083d01a  e8d10cfdff           call 0x80dcf0
// 0083d01f  8d4c2418             lea ecx, [esp + 0x18]
// 0083d023  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0083d02b  e8b0fdfcff           call 0x80cde0
// 0083d030  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0083d035  7589                 jne 0x83cfc0
// 0083d037  6a00                 push 0
// 0083d039  8bce                 mov ecx, esi
// 0083d03b  e88096fbff           call 0x7f66c0
// 0083d040  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083d044  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d04b  59                   pop ecx
// 0083d04c  5f                   pop edi
// 0083d04d  5e                   pop esi
// 0083d04e  5b                   pop ebx
// 0083d04f  83c438               add esp, 0x38
// 0083d052  c20400               ret 4
// copied from an identical function in another client (function ?SetColor@CXTPControlPopupColor@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopupColor.cpp