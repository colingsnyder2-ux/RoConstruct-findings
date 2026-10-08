// roc 2011-06 008f0780  unit: PAVCXTShadowWnd::?$CList  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0780
//
// 008f0780  83ec30               sub esp, 0x30
// 008f0783  56                   push esi
// 008f0784  8bf1                 mov esi, ecx
// 008f0786  8b4668               mov eax, dword ptr [esi + 0x68]
// 008f0789  57                   push edi
// 008f078a  50                   push eax
// 008f078b  e8989bf1ff           call 0x80a328
// 008f0790  837e6800             cmp dword ptr [esi + 0x68], 0
// 008f0794  0f8455010000         je 0x8f08ef
// 008f079a  85c0                 test eax, eax
// 008f079c  0f844d010000         je 0x8f08ef
// 008f07a2  837e5800             cmp dword ptr [esi + 0x58], 0
// 008f07a6  0f8436010000         je 0x8f08e2
// 008f07ac  8b7e54               mov edi, dword ptr [esi + 0x54]
// 008f07af  50                   push eax
// 008f07b0  8d4c240c             lea ecx, [esp + 0xc]
// 008f07b4  e877c5f6ff           call 0x85cd30
// 008f07b9  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008f07bd  741e                 je 0x8f07dd
// 008f07bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f07c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f07c7  8d0c38               lea ecx, [eax + edi]
// 008f07ca  51                   push ecx
// 008f07cb  03d7                 add edx, edi
// 008f07cd  52                   push edx
// 008f07ce  50                   push eax
// 008f07cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f07d3  03c7                 add eax, edi
// 008f07d5  50                   push eax
// 008f07d6  8d4c2428             lea ecx, [esp + 0x28]
// 008f07da  51                   push ecx
// 008f07db  eb1a                 jmp 0x8f07f7
// 008f07dd  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f07e1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f07e5  52                   push edx
// 008f07e6  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f07ea  8d0c38               lea ecx, [eax + edi]
// 008f07ed  51                   push ecx
// 008f07ee  03d7                 add edx, edi
// 008f07f0  52                   push edx
// 008f07f1  50                   push eax
// 008f07f2  8d442428             lea eax, [esp + 0x28]
// 008f07f6  50                   push eax
// 008f07f7  ff15c81ba400         call dword ptr [0xa41bc8]
// 008f07fd  56                   push esi
// 008f07fe  8d4c242c             lea ecx, [esp + 0x2c]
// 008f0802  e829c5f6ff           call 0x85cd30
// 008f0807  8d4c2428             lea ecx, [esp + 0x28]
// 008f080b  51                   push ecx
// 008f080c  8d54241c             lea edx, [esp + 0x1c]
// 008f0810  52                   push edx
// 008f0811  ff15001ca400         call dword ptr [0xa41c00]
// 008f0817  85c0                 test eax, eax
// 008f0819  0f85d0000000         jne 0x8f08ef
// 008f081f  6a01                 push 1
// 008f0821  8d44241c             lea eax, [esp + 0x1c]
// 008f0825  50                   push eax
// 008f0826  8bce                 mov ecx, esi
// 008f0828  e8e3afb9ff           call 0x48b810
// 008f082d  e80effffff           call 0x8f0740
// 008f0832  50                   push eax
// 008f0833  8bce                 mov ecx, esi
// 008f0835  e8e6f9ffff           call 0x8f0220
// 008f083a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f083d  6a00                 push 0
// 008f083f  6a00                 push 0
// 008f0841  51                   push ecx
// 008f0842  ff15041ca400         call dword ptr [0xa41c04]
// 008f0848  8b566c               mov edx, dword ptr [esi + 0x6c]
// 008f084b  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008f084e  83ec10               sub esp, 0x10
// 008f0851  8bc4                 mov eax, esp
// 008f0853  8910                 mov dword ptr [eax], edx
// 008f0855  8b5674               mov edx, dword ptr [esi + 0x74]
// 008f0858  894804               mov dword ptr [eax + 4], ecx
// 008f085b  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008f085e  895008               mov dword ptr [eax + 8], edx
// 008f0861  89480c               mov dword ptr [eax + 0xc], ecx
// 008f0864  8bce                 mov ecx, esi
// 008f0866  e805f9ffff           call 0x8f0170
// 008f086b  837e6400             cmp dword ptr [esi + 0x64], 0
// 008f086f  747e                 je 0x8f08ef
// 008f0871  e83ab4f7ff           call 0x86bcb0
// 008f0876  8b5020               mov edx, dword ptr [eax + 0x20]
// 008f0879  f7da                 neg edx
// 008f087b  1bd2                 sbb edx, edx
// 008f087d  83e2fc               and edx, 0xfffffffc
// 008f0880  83c204               add edx, 4
// 008f0883  81ca93000000         or edx, 0x93
// 008f0889  52                   push edx
// 008f088a  6a00                 push 0
// 008f088c  6a00                 push 0
// 008f088e  6a00                 push 0
// 008f0890  6a00                 push 0
// 008f0892  6a00                 push 0
// 008f0894  8bce                 mov ecx, esi
// 008f0896  e88f9bf1ff           call 0x80a42a
// 008f089b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008f089e  85c9                 test ecx, ecx
// 008f08a0  7410                 je 0x8f08b2
// 008f08a2  8b01                 mov eax, dword ptr [ecx]
// 008f08a4  8b5004               mov edx, dword ptr [eax + 4]
// 008f08a7  6a01                 push 1
// 008f08a9  ffd2                 call edx
// 008f08ab  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008f08b2  ff15e819a400         call dword ptr [0xa419e8]
// 008f08b8  50                   push eax
// 008f08b9  e86a9af1ff           call 0x80a328
// 008f08be  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f08c1  6a00                 push 0
// 008f08c3  6a00                 push 0
// 008f08c5  50                   push eax
// 008f08c6  ff15ec19a400         call dword ptr [0xa419ec]
// 008f08cc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f08cf  6a00                 push 0
// 008f08d1  6a01                 push 1
// 008f08d3  6a01                 push 1
// 008f08d5  51                   push ecx
// 008f08d6  ff15741ca400         call dword ptr [0xa41c74]
// 008f08dc  5f                   pop edi
// 008f08dd  5e                   pop esi
// 008f08de  83c430               add esp, 0x30
// 008f08e1  c3                   ret 
// 008f08e2  e859feffff           call 0x8f0740
// 008f08e7  50                   push eax
// 008f08e8  8bce                 mov ecx, esi
// 008f08ea  e831f9ffff           call 0x8f0220
// 008f08ef  5f                   pop edi
// 008f08f0  5e                   pop esi
// 008f08f1  83c430               add esp, 0x30
// 008f08f4  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
