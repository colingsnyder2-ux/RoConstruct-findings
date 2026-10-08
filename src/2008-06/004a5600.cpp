// roc 2008-06 004a5600  unit: RBX::VHint::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5600
//
// 004a5600  51                   push ecx
// 004a5601  53                   push ebx
// 004a5602  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a5606  56                   push esi
// 004a5607  8bf1                 mov esi, ecx
// 004a5609  85db                 test ebx, ebx
// 004a560b  0f8e85000000         jle 0x4a5696
// 004a5611  55                   push ebp
// 004a5612  57                   push edi
// 004a5613  53                   push ebx
// 004a5614  e897fdffff           call 0x4a53b0
// 004a5619  8b16                 mov edx, dword ptr [esi]
// 004a561b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004a561f  83e207               and edx, 7
// 004a5622  89542410             mov dword ptr [esp + 0x10], edx
// 004a5626  83fb08               cmp ebx, 8
// 004a5629  8a4500               mov al, byte ptr [ebp]
// 004a562c  7d0d                 jge 0x4a563b
// 004a562e  807c242000           cmp byte ptr [esp + 0x20], 0
// 004a5633  7406                 je 0x4a563b
// 004a5635  b108                 mov cl, 8
// 004a5637  2acb                 sub cl, bl
// 004a5639  d2e0                 shl al, cl
// 004a563b  8b0e                 mov ecx, dword ptr [esi]
// 004a563d  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004a5640  c1f903               sar ecx, 3
// 004a5643  85d2                 test edx, edx
// 004a5645  7505                 jne 0x4a564c
// 004a5647  880439               mov byte ptr [ecx + edi], al
// 004a564a  eb34                 jmp 0x4a5680
// 004a564c  03f9                 add edi, ecx
// 004a564e  8ac8                 mov cl, al
// 004a5650  884c241c             mov byte ptr [esp + 0x1c], cl
// 004a5654  8aca                 mov cl, dl
// 004a5656  8ad0                 mov dl, al
// 004a5658  d2ea                 shr dl, cl
// 004a565a  b908000000           mov ecx, 8
// 004a565f  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 004a5663  0817                 or byte ptr [edi], dl
// 004a5665  83f908               cmp ecx, 8
// 004a5668  7d12                 jge 0x4a567c
// 004a566a  3bcb                 cmp ecx, ebx
// 004a566c  7d0e                 jge 0x4a567c
// 004a566e  8b16                 mov edx, dword ptr [esi]
// 004a5670  d2e0                 shl al, cl
// 004a5672  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5675  c1fa03               sar edx, 3
// 004a5678  88440a01             mov byte ptr [edx + ecx + 1], al
// 004a567c  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a5680  83fb08               cmp ebx, 8
// 004a5683  7c05                 jl 0x4a568a
// 004a5685  830608               add dword ptr [esi], 8
// 004a5688  eb02                 jmp 0x4a568c
// 004a568a  011e                 add dword ptr [esi], ebx
// 004a568c  83eb08               sub ebx, 8
// 004a568f  45                   inc ebp
// 004a5690  85db                 test ebx, ebx
// 004a5692  7f92                 jg 0x4a5626
// 004a5694  5f                   pop edi
// 004a5695  5d                   pop ebp
// 004a5696  5e                   pop esi
// 004a5697  5b                   pop ebx
// 004a5698  59                   pop ecx
// 004a5699  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?WriteBits@BitStream@RakNet@@QAEXPBEH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
