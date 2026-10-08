// roc 2007-08 004c9ed0  unit: seg_004c0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9ed0
//
// 004c9ed0  56                   push esi
// 004c9ed1  57                   push edi
// 004c9ed2  8bf1                 mov esi, ecx
// 004c9ed4  33ff                 xor edi, edi
// 004c9ed6  397e04               cmp dword ptr [esi + 4], edi
// 004c9ed9  7628                 jbe 0x4c9f03
// 004c9edb  53                   push ebx
// 004c9edc  8d642400             lea esp, [esp]
// 004c9ee0  8b06                 mov eax, dword ptr [esi]
// 004c9ee2  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 004c9ee5  85db                 test ebx, ebx
// 004c9ee7  7411                 je 0x4c9efa
// 004c9ee9  8b0b                 mov ecx, dword ptr [ebx]
// 004c9eeb  51                   push ecx
// 004c9eec  e8715d1600           call 0x62fc62
// 004c9ef1  53                   push ebx
// 004c9ef2  e86b5d1600           call 0x62fc62
// 004c9ef7  83c408               add esp, 8
// 004c9efa  83c701               add edi, 1
// 004c9efd  3b7e04               cmp edi, dword ptr [esi + 4]
// 004c9f00  72de                 jb 0x4c9ee0
// 004c9f02  5b                   pop ebx
// 004c9f03  8b4608               mov eax, dword ptr [esi + 8]
// 004c9f06  85c0                 test eax, eax
// 004c9f08  7426                 je 0x4c9f30
// 004c9f0a  3d00020000           cmp eax, 0x200
// 004c9f0f  7618                 jbe 0x4c9f29
// 004c9f11  8b16                 mov edx, dword ptr [esi]
// 004c9f13  52                   push edx
// 004c9f14  e8495d1600           call 0x62fc62
// 004c9f19  83c404               add esp, 4
// 004c9f1c  c7460800000000       mov dword ptr [esi + 8], 0
// 004c9f23  c70600000000         mov dword ptr [esi], 0
// 004c9f29  c7460400000000       mov dword ptr [esi + 4], 0
// 004c9f30  5f                   pop edi
// 004c9f31  5e                   pop esi
// 004c9f32  c3                   ret 
// library rbxgs-raknet/RPCMap.cpp (function ?Clear@RPCMap@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
