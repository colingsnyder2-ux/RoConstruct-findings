// from server: 100% by auto
// roc 2009-06 00572cd0  unit: seg_00570000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572cd0
//
// 00572cd0  6aff                 push -1
// 00572cd2  6821058600           push 0x860521
// 00572cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00572cdd  50                   push eax
// 00572cde  64892500000000       mov dword ptr fs:[0], esp
// 00572ce5  83ec68               sub esp, 0x68
// 00572ce8  55                   push ebp
// 00572ce9  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00572ced  56                   push esi
// 00572cee  57                   push edi
// 00572cef  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00572cf6  6a01                 push 1
// 00572cf8  6a00                 push 0
// 00572cfa  6a01                 push 1
// 00572cfc  8bf1                 mov esi, ecx
// 00572cfe  57                   push edi
// 00572cff  55                   push ebp
// 00572d00  8d4c243c             lea ecx, [esp + 0x3c]
// 00572d04  c706a0fc8b00         mov dword ptr [esi], 0x8bfca0
// 00572d0a  e8311b0000           call 0x574840
// 00572d0f  6816d28a00           push 0x8ad216
// 00572d14  8d4c2410             lea ecx, [esp + 0x10]
// 00572d18  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00572d23  ff15b4e48900         call dword ptr [0x89e4b4]
// 00572d29  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00572d30  50                   push eax
// 00572d31  57                   push edi
// 00572d32  8d4c2414             lea ecx, [esp + 0x14]
// 00572d36  55                   push ebp
// 00572d37  51                   push ecx
// 00572d38  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00572d40  e85bd9ffff           call 0x5706a0
// 00572d45  83c410               add esp, 0x10
// 00572d48  50                   push eax
// 00572d49  8d54242c             lea edx, [esp + 0x2c]
// 00572d4d  52                   push edx
// 00572d4e  8bce                 mov ecx, esi
// 00572d50  e89bfcffff           call 0x5729f0
// 00572d55  8d4c240c             lea ecx, [esp + 0xc]
// 00572d59  c644247c00           mov byte ptr [esp + 0x7c], 0
// 00572d5e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00572d64  8d4c2428             lea ecx, [esp + 0x28]
// 00572d68  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00572d70  e82b1e0000           call 0x574ba0
// 00572d75  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00572d79  5f                   pop edi
// 00572d7a  8bc6                 mov eax, esi
// 00572d7c  5e                   pop esi
// 00572d7d  5d                   pop ebp
// 00572d7e  64890d00000000       mov dword ptr fs:[0], ecx
// 00572d85  83c474               add esp, 0x74
// 00572d88  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
