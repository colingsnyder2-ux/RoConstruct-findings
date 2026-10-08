// from server: 100% by auto
// roc 2008-06 0050d530  unit: G3D::Log  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050d530
//
// 0050d530  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050d534  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050d538  53                   push ebx
// 0050d539  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0050d53d  55                   push ebp
// 0050d53e  03c1                 add eax, ecx
// 0050d540  394308               cmp dword ptr [ebx + 8], eax
// 0050d543  56                   push esi
// 0050d544  57                   push edi
// 0050d545  0f8cad000000         jl 0x50d5f8
// 0050d54b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0050d54f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050d553  8d1428               lea edx, [eax + ebp]
// 0050d556  39530c               cmp dword ptr [ebx + 0xc], edx
// 0050d559  0f8c99000000         jl 0x50d5f8
// 0050d55f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050d563  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050d567  03d1                 add edx, ecx
// 0050d569  395708               cmp dword ptr [edi + 8], edx
// 0050d56c  0f8c86000000         jl 0x50d5f8
// 0050d572  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050d576  8d1406               lea edx, [esi + eax]
// 0050d579  39570c               cmp dword ptr [edi + 0xc], edx
// 0050d57c  7c7a                 jl 0x50d5f8
// 0050d57e  85ed                 test ebp, ebp
// 0050d580  7c76                 jl 0x50d5f8
// 0050d582  837c242400           cmp dword ptr [esp + 0x24], 0
// 0050d587  7c6f                 jl 0x50d5f8
// 0050d589  85f6                 test esi, esi
// 0050d58b  7c6b                 jl 0x50d5f8
// 0050d58d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0050d592  7c64                 jl 0x50d5f8
// 0050d594  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0050d597  3b5710               cmp edx, dword ptr [edi + 0x10]
// 0050d59a  755c                 jne 0x50d5f8
// 0050d59c  85c0                 test eax, eax
// 0050d59e  7e51                 jle 0x50d5f1
// 0050d5a0  2bee                 sub ebp, esi
// 0050d5a2  89442418             mov dword ptr [esp + 0x18], eax
// 0050d5a6  eb0c                 jmp 0x50d5b4
// 0050d5a8  eb06                 jmp 0x50d5b0
// 0050d5aa  8d9b00000000         lea ebx, [ebx]
// 0050d5b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050d5b4  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0050d5b7  8bd0                 mov edx, eax
// 0050d5b9  0fafd1               imul edx, ecx
// 0050d5bc  52                   push edx
// 0050d5bd  8b5708               mov edx, dword ptr [edi + 8]
// 0050d5c0  8d0c2e               lea ecx, [esi + ebp]
// 0050d5c3  0fafd6               imul edx, esi
// 0050d5c6  0faf4b08             imul ecx, dword ptr [ebx + 8]
// 0050d5ca  034c2428             add ecx, dword ptr [esp + 0x28]
// 0050d5ce  03542420             add edx, dword ptr [esp + 0x20]
// 0050d5d2  0fafc8               imul ecx, eax
// 0050d5d5  0faf5710             imul edx, dword ptr [edi + 0x10]
// 0050d5d9  034b04               add ecx, dword ptr [ebx + 4]
// 0050d5dc  035704               add edx, dword ptr [edi + 4]
// 0050d5df  51                   push ecx
// 0050d5e0  52                   push edx
// 0050d5e1  e8fa411900           call 0x6a17e0
// 0050d5e6  83c40c               add esp, 0xc
// 0050d5e9  46                   inc esi
// 0050d5ea  836c241801           sub dword ptr [esp + 0x18], 1
// 0050d5ef  75bf                 jne 0x50d5b0
// 0050d5f1  5f                   pop edi
// 0050d5f2  5e                   pop esi
// 0050d5f3  5d                   pop ebp
// 0050d5f4  b001                 mov al, 1
// 0050d5f6  5b                   pop ebx
// 0050d5f7  c3                   ret 
// 0050d5f8  5f                   pop edi
// 0050d5f9  5e                   pop esi
// 0050d5fa  5d                   pop ebp
// 0050d5fb  32c0                 xor al, al
// 0050d5fd  5b                   pop ebx
// 0050d5fe  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?pasteSubImage@GImage@G3D@@SA_NAAV12@ABV12@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
