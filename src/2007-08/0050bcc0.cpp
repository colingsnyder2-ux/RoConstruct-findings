// roc 2007-08 0050bcc0  unit: seg_00500000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bcc0
//
// 0050bcc0  8b442408             mov eax, dword ptr [esp + 8]
// 0050bcc4  53                   push ebx
// 0050bcc5  56                   push esi
// 0050bcc6  8bf1                 mov esi, ecx
// 0050bcc8  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0050bccb  035e44               add ebx, dword ptr [esi + 0x44]
// 0050bcce  39463c               cmp dword ptr [esi + 0x3c], eax
// 0050bcd1  7d2e                 jge 0x50bd01
// 0050bcd3  50                   push eax
// 0050bcd4  89463c               mov dword ptr [esi + 0x3c], eax
// 0050bcd7  8b4640               mov eax, dword ptr [esi + 0x40]
// 0050bcda  50                   push eax
// 0050bcdb  e8c049ffff           call 0x5006a0
// 0050bce0  83c408               add esp, 8
// 0050bce3  85c0                 test eax, eax
// 0050bce5  894640               mov dword ptr [esi + 0x40], eax
// 0050bce8  7517                 jne 0x50bd01
// 0050bcea  6808c58400           push 0x84c508
// 0050bcef  8d4c2414             lea ecx, [esp + 0x14]
// 0050bcf3  51                   push ecx
// 0050bcf4  c7442418180c7a00     mov dword ptr [esp + 0x18], 0x7a0c18
// 0050bcfc  e89d4e1200           call 0x630b9e
// 0050bd01  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050bd05  895634               mov dword ptr [esi + 0x34], edx
// 0050bd08  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 0050bd0c  7205                 jb 0x50bd13
// 0050bd0e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050bd11  eb03                 jmp 0x50bd16
// 0050bd13  8d460c               lea eax, [esi + 0xc]
// 0050bd16  57                   push edi
// 0050bd17  68b8ef7900           push 0x79efb8
// 0050bd1c  50                   push eax
// 0050bd1d  ff1510e97700         call dword ptr [0x77e910]
// 0050bd23  8bf8                 mov edi, eax
// 0050bd25  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050bd28  6a00                 push 0
// 0050bd2a  50                   push eax
// 0050bd2b  57                   push edi
// 0050bd2c  ff15f8e87700         call dword ptr [0x77e8f8]
// 0050bd32  8b4638               mov eax, dword ptr [esi + 0x38]
// 0050bd35  2b4634               sub eax, dword ptr [esi + 0x34]
// 0050bd38  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050bd3b  83c414               add esp, 0x14
// 0050bd3e  3bc8                 cmp ecx, eax
// 0050bd40  7d02                 jge 0x50bd44
// 0050bd42  8bc1                 mov eax, ecx
// 0050bd44  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050bd47  57                   push edi
// 0050bd48  50                   push eax
// 0050bd49  6a01                 push 1
// 0050bd4b  51                   push ecx
// 0050bd4c  ff1500e97700         call dword ptr [0x77e900]
// 0050bd52  57                   push edi
// 0050bd53  ff1518e97700         call dword ptr [0x77e918]
// 0050bd59  2b5e34               sub ebx, dword ptr [esi + 0x34]
// 0050bd5c  83c414               add esp, 0x14
// 0050bd5f  5f                   pop edi
// 0050bd60  895e44               mov dword ptr [esi + 0x44], ebx
// 0050bd63  5e                   pop esi
// 0050bd64  5b                   pop ebx
// 0050bd65  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?loadIntoMemory@BinaryInput@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
