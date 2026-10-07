// roc 2009-06 0056fe10  unit: G3D::Log  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056fe10
//
// 0056fe10  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056fe14  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056fe18  53                   push ebx
// 0056fe19  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0056fe1d  55                   push ebp
// 0056fe1e  03c1                 add eax, ecx
// 0056fe20  394308               cmp dword ptr [ebx + 8], eax
// 0056fe23  56                   push esi
// 0056fe24  57                   push edi
// 0056fe25  0f8cad000000         jl 0x56fed8
// 0056fe2b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056fe2f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056fe33  8d1428               lea edx, [eax + ebp]
// 0056fe36  39530c               cmp dword ptr [ebx + 0xc], edx
// 0056fe39  0f8c99000000         jl 0x56fed8
// 0056fe3f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056fe43  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056fe47  03d1                 add edx, ecx
// 0056fe49  395708               cmp dword ptr [edi + 8], edx
// 0056fe4c  0f8c86000000         jl 0x56fed8
// 0056fe52  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056fe56  8d1406               lea edx, [esi + eax]
// 0056fe59  39570c               cmp dword ptr [edi + 0xc], edx
// 0056fe5c  7c7a                 jl 0x56fed8
// 0056fe5e  85ed                 test ebp, ebp
// 0056fe60  7c76                 jl 0x56fed8
// 0056fe62  837c242400           cmp dword ptr [esp + 0x24], 0
// 0056fe67  7c6f                 jl 0x56fed8
// 0056fe69  85f6                 test esi, esi
// 0056fe6b  7c6b                 jl 0x56fed8
// 0056fe6d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0056fe72  7c64                 jl 0x56fed8
// 0056fe74  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0056fe77  3b5710               cmp edx, dword ptr [edi + 0x10]
// 0056fe7a  755c                 jne 0x56fed8
// 0056fe7c  85c0                 test eax, eax
// 0056fe7e  7e51                 jle 0x56fed1
// 0056fe80  2bee                 sub ebp, esi
// 0056fe82  89442418             mov dword ptr [esp + 0x18], eax
// 0056fe86  eb0c                 jmp 0x56fe94
// 0056fe88  eb06                 jmp 0x56fe90
// 0056fe8a  8d9b00000000         lea ebx, [ebx]
// 0056fe90  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056fe94  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0056fe97  8bd0                 mov edx, eax
// 0056fe99  0fafd1               imul edx, ecx
// 0056fe9c  52                   push edx
// 0056fe9d  8b5708               mov edx, dword ptr [edi + 8]
// 0056fea0  8d0c2e               lea ecx, [esi + ebp]
// 0056fea3  0fafd6               imul edx, esi
// 0056fea6  0faf4b08             imul ecx, dword ptr [ebx + 8]
// 0056feaa  034c2428             add ecx, dword ptr [esp + 0x28]
// 0056feae  03542420             add edx, dword ptr [esp + 0x20]
// 0056feb2  0fafc8               imul ecx, eax
// 0056feb5  0faf5710             imul edx, dword ptr [edi + 0x10]
// 0056feb9  034b04               add ecx, dword ptr [ebx + 4]
// 0056febc  035704               add edx, dword ptr [edi + 4]
// 0056febf  51                   push ecx
// 0056fec0  52                   push edx
// 0056fec1  e8f09f1a00           call 0x719eb6
// 0056fec6  83c40c               add esp, 0xc
// 0056fec9  46                   inc esi
// 0056feca  836c241801           sub dword ptr [esp + 0x18], 1
// 0056fecf  75bf                 jne 0x56fe90
// 0056fed1  5f                   pop edi
// 0056fed2  5e                   pop esi
// 0056fed3  5d                   pop ebp
// 0056fed4  b001                 mov al, 1
// 0056fed6  5b                   pop ebx
// 0056fed7  c3                   ret 
// 0056fed8  5f                   pop edi
// 0056fed9  5e                   pop esi
// 0056feda  5d                   pop ebp
// 0056fedb  32c0                 xor al, al
// 0056fedd  5b                   pop ebx
// 0056fede  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?pasteSubImage@GImage@G3D@@SA_NAAV12@ABV12@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
