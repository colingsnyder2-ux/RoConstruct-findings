// roc 2009-12 0080ac70  unit: CXTPImageManagerResource::CBitmapDC  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ac70
//
// 0080ac70  6aff                 push -1
// 0080ac72  6808989500           push 0x959808
// 0080ac77  64a100000000         mov eax, dword ptr fs:[0]
// 0080ac7d  50                   push eax
// 0080ac7e  83ec08               sub esp, 8
// 0080ac81  56                   push esi
// 0080ac82  57                   push edi
// 0080ac83  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ac88  33c4                 xor eax, esp
// 0080ac8a  50                   push eax
// 0080ac8b  8d442414             lea eax, [esp + 0x14]
// 0080ac8f  64a300000000         mov dword ptr fs:[0], eax
// 0080ac95  8b742430             mov esi, dword ptr [esp + 0x30]
// 0080ac99  85f6                 test esi, esi
// 0080ac9b  0f84c2000000         je 0x80ad63
// 0080aca1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080aca5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080aca9  85c0                 test eax, eax
// 0080acab  7508                 jne 0x80acb5
// 0080acad  85c9                 test ecx, ecx
// 0080acaf  0f84ae000000         je 0x80ad63
// 0080acb5  3bf0                 cmp esi, eax
// 0080acb7  751d                 jne 0x80acd6
// 0080acb9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080acbd  50                   push eax
// 0080acbe  ff1508cb9800         call dword ptr [0x98cb08]
// 0080acc4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080acc8  64890d00000000       mov dword ptr fs:[0], ecx
// 0080accf  59                   pop ecx
// 0080acd0  5f                   pop edi
// 0080acd1  5e                   pop esi
// 0080acd2  83c414               add esp, 0x14
// 0080acd5  c3                   ret 
// 0080acd6  50                   push eax
// 0080acd7  56                   push esi
// 0080acd8  51                   push ecx
// 0080acd9  ff15a0b29800         call dword ptr [0x98b2a0]
// 0080acdf  8d4c240c             lea ecx, [esp + 0xc]
// 0080ace3  8bf8                 mov edi, eax
// 0080ace5  e82693feff           call 0x7f4010
// 0080acea  6a01                 push 1
// 0080acec  6a01                 push 1
// 0080acee  6a21                 push 0x21
// 0080acf0  57                   push edi
// 0080acf1  56                   push esi
// 0080acf2  8d4c2420             lea ecx, [esp + 0x20]
// 0080acf6  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0080acfe  e80793feff           call 0x7f400a
// 0080ad03  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080ad07  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080ad0b  51                   push ecx
// 0080ad0c  6aff                 push -1
// 0080ad0e  52                   push edx
// 0080ad0f  e80a8efeff           call 0x7f3b1e
// 0080ad14  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0080ad1a  8b08                 mov ecx, dword ptr [eax]
// 0080ad1c  e8bfebffff           call 0x8098e0
// 0080ad21  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080ad25  6a00                 push 0
// 0080ad27  6a00                 push 0
// 0080ad29  51                   push ecx
// 0080ad2a  e8ef8dfeff           call 0x7f3b1e
// 0080ad2f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080ad35  8b0a                 mov ecx, dword ptr [edx]
// 0080ad37  e8c4ecffff           call 0x809a00
// 0080ad3c  8d4c240c             lea ecx, [esp + 0xc]
// 0080ad40  8bf0                 mov esi, eax
// 0080ad42  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0080ad4a  e8a392feff           call 0x7f3ff2
// 0080ad4f  8bc6                 mov eax, esi
// 0080ad51  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ad55  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ad5c  59                   pop ecx
// 0080ad5d  5f                   pop edi
// 0080ad5e  5e                   pop esi
// 0080ad5f  83c414               add esp, 0x14
// 0080ad62  c3                   ret 
// 0080ad63  33c0                 xor eax, eax
// 0080ad65  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ad69  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ad70  59                   pop ecx
// 0080ad71  5f                   pop edi
// 0080ad72  5e                   pop esi
// 0080ad73  83c414               add esp, 0x14
// 0080ad76  c3                   ret 
// copied from an identical function in another client (function ?ScaleToFit@CXTPImageManagerIcon@@SAPAUHICON__@@PAU2@VCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp