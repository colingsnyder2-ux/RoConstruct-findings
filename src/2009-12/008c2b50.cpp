// roc 2009-12 008c2b50  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2b50
//
// 008c2b50  6aff                 push -1
// 008c2b52  68af409600           push 0x9640af
// 008c2b57  64a100000000         mov eax, dword ptr fs:[0]
// 008c2b5d  50                   push eax
// 008c2b5e  51                   push ecx
// 008c2b5f  56                   push esi
// 008c2b60  57                   push edi
// 008c2b61  a10052b600           mov eax, dword ptr [0xb65200]
// 008c2b66  33c4                 xor eax, esp
// 008c2b68  50                   push eax
// 008c2b69  8d442410             lea eax, [esp + 0x10]
// 008c2b6d  64a300000000         mov dword ptr fs:[0], eax
// 008c2b73  8bf1                 mov esi, ecx
// 008c2b75  8974240c             mov dword ptr [esp + 0xc], esi
// 008c2b79  e8ca15f3ff           call 0x7f4148
// 008c2b7e  33ff                 xor edi, edi
// 008c2b80  8d4e68               lea ecx, [esi + 0x68]
// 008c2b83  897c2418             mov dword ptr [esp + 0x18], edi
// 008c2b87  c706b48ea000         mov dword ptr [esi], 0xa08eb4
// 008c2b8d  e81c390600           call 0x9264ae
// 008c2b92  6a0a                 push 0xa
// 008c2b94  8d8e80000000         lea ecx, [esi + 0x80]
// 008c2b9a  e8a1feffff           call 0x8c2a40
// 008c2b9f  6a0a                 push 0xa
// 008c2ba1  8d8e9c000000         lea ecx, [esi + 0x9c]
// 008c2ba7  e894feffff           call 0x8c2a40
// 008c2bac  c644241803           mov byte ptr [esp + 0x18], 3
// 008c2bb1  897e78               mov dword ptr [esi + 0x78], edi
// 008c2bb4  897e7c               mov dword ptr [esi + 0x7c], edi
// 008c2bb7  897e64               mov dword ptr [esi + 0x64], edi
// 008c2bba  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 008c2bc0  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 008c2bc6  e8d5bcfaff           call 0x86e8a0
// 008c2bcb  8b10                 mov edx, dword ptr [eax]
// 008c2bcd  8bc8                 mov ecx, eax
// 008c2bcf  8b4218               mov eax, dword ptr [edx + 0x18]
// 008c2bd2  6896230000           push 0x2396
// 008c2bd7  ffd0                 call eax
// 008c2bd9  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008c2bdf  e8bcbcfaff           call 0x86e8a0
// 008c2be4  8b10                 mov edx, dword ptr [eax]
// 008c2be6  8bc8                 mov ecx, eax
// 008c2be8  8b4218               mov eax, dword ptr [edx + 0x18]
// 008c2beb  6898230000           push 0x2398
// 008c2bf0  ffd0                 call eax
// 008c2bf2  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008c2bf8  e8a3bcfaff           call 0x86e8a0
// 008c2bfd  8b10                 mov edx, dword ptr [eax]
// 008c2bff  8bc8                 mov ecx, eax
// 008c2c01  8b4218               mov eax, dword ptr [edx + 0x18]
// 008c2c04  6899230000           push 0x2399
// 008c2c09  ffd0                 call eax
// 008c2c0b  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008c2c11  e88abcfaff           call 0x86e8a0
// 008c2c16  8b10                 mov edx, dword ptr [eax]
// 008c2c18  8bc8                 mov ecx, eax
// 008c2c1a  8b4218               mov eax, dword ptr [edx + 0x18]
// 008c2c1d  6897230000           push 0x2397
// 008c2c22  ffd0                 call eax
// 008c2c24  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 008c2c2a  8bc6                 mov eax, esi
// 008c2c2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c2c30  64890d00000000       mov dword ptr fs:[0], ecx
// 008c2c37  59                   pop ecx
// 008c2c38  5f                   pop edi
// 008c2c39  5e                   pop esi
// 008c2c3a  83c410               add esp, 0x10
// 008c2c3d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPImageEditorPicture@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp