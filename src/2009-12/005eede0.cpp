// roc 2009-12 005eede0  unit: G3D::Log  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eede0
//
// 005eede0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eede4  8b442414             mov eax, dword ptr [esp + 0x14]
// 005eede8  53                   push ebx
// 005eede9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005eeded  55                   push ebp
// 005eedee  03c1                 add eax, ecx
// 005eedf0  394308               cmp dword ptr [ebx + 8], eax
// 005eedf3  56                   push esi
// 005eedf4  57                   push edi
// 005eedf5  0f8cad000000         jl 0x5eeea8
// 005eedfb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005eedff  8b442430             mov eax, dword ptr [esp + 0x30]
// 005eee03  8d1428               lea edx, [eax + ebp]
// 005eee06  39530c               cmp dword ptr [ebx + 0xc], edx
// 005eee09  0f8c99000000         jl 0x5eeea8
// 005eee0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005eee13  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005eee17  03d1                 add edx, ecx
// 005eee19  395708               cmp dword ptr [edi + 8], edx
// 005eee1c  0f8c86000000         jl 0x5eeea8
// 005eee22  8b742420             mov esi, dword ptr [esp + 0x20]
// 005eee26  8d1406               lea edx, [esi + eax]
// 005eee29  39570c               cmp dword ptr [edi + 0xc], edx
// 005eee2c  7c7a                 jl 0x5eeea8
// 005eee2e  85ed                 test ebp, ebp
// 005eee30  7c76                 jl 0x5eeea8
// 005eee32  837c242400           cmp dword ptr [esp + 0x24], 0
// 005eee37  7c6f                 jl 0x5eeea8
// 005eee39  85f6                 test esi, esi
// 005eee3b  7c6b                 jl 0x5eeea8
// 005eee3d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005eee42  7c64                 jl 0x5eeea8
// 005eee44  8b5310               mov edx, dword ptr [ebx + 0x10]
// 005eee47  3b5710               cmp edx, dword ptr [edi + 0x10]
// 005eee4a  755c                 jne 0x5eeea8
// 005eee4c  85c0                 test eax, eax
// 005eee4e  7e51                 jle 0x5eeea1
// 005eee50  2bee                 sub ebp, esi
// 005eee52  89442418             mov dword ptr [esp + 0x18], eax
// 005eee56  eb0c                 jmp 0x5eee64
// 005eee58  eb06                 jmp 0x5eee60
// 005eee5a  8d9b00000000         lea ebx, [ebx]
// 005eee60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eee64  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005eee67  8bd0                 mov edx, eax
// 005eee69  0fafd1               imul edx, ecx
// 005eee6c  52                   push edx
// 005eee6d  8b5708               mov edx, dword ptr [edi + 8]
// 005eee70  8d0c2e               lea ecx, [esi + ebp]
// 005eee73  0fafd6               imul edx, esi
// 005eee76  0faf4b08             imul ecx, dword ptr [ebx + 8]
// 005eee7a  034c2428             add ecx, dword ptr [esp + 0x28]
// 005eee7e  03542420             add edx, dword ptr [esp + 0x20]
// 005eee82  0fafc8               imul ecx, eax
// 005eee85  0faf5710             imul edx, dword ptr [edi + 0x10]
// 005eee89  034b04               add ecx, dword ptr [ebx + 4]
// 005eee8c  035704               add edx, dword ptr [edi + 4]
// 005eee8f  51                   push ecx
// 005eee90  52                   push edx
// 005eee91  e8505e2000           call 0x7f4ce6
// 005eee96  83c40c               add esp, 0xc
// 005eee99  46                   inc esi
// 005eee9a  836c241801           sub dword ptr [esp + 0x18], 1
// 005eee9f  75bf                 jne 0x5eee60
// 005eeea1  5f                   pop edi
// 005eeea2  5e                   pop esi
// 005eeea3  5d                   pop ebp
// 005eeea4  b001                 mov al, 1
// 005eeea6  5b                   pop ebx
// 005eeea7  c3                   ret 
// 005eeea8  5f                   pop edi
// 005eeea9  5e                   pop esi
// 005eeeaa  5d                   pop ebp
// 005eeeab  32c0                 xor al, al
// 005eeead  5b                   pop ebx
// 005eeeae  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?pasteSubImage@GImage@G3D@@SA_NAAV12@ABV12@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
