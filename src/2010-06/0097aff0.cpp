// from server: 100% by auto
// roc 2010-06 0097aff0  unit: seg_00970000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0097aff0
//
// 0097aff0  51                   push ecx
// 0097aff1  f30f10051804a200     movss xmm0, dword ptr [0xa20418]
// 0097aff9  8bc1                 mov eax, ecx
// 0097affb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0097afff  f30f1009             movss xmm1, dword ptr [ecx]
// 0097b003  f30f59c8             mulss xmm1, xmm0
// 0097b007  f30f110c24           movss dword ptr [esp], xmm1
// 0097b00c  d90424               fld dword ptr [esp]
// 0097b00f  db5c2408             fistp dword ptr [esp + 8]
// 0097b013  8b542408             mov edx, dword ptr [esp + 8]
// 0097b017  81faff000000         cmp edx, 0xff
// 0097b01d  7e05                 jle 0x97b024
// 0097b01f  baff000000           mov edx, 0xff
// 0097b024  8810                 mov byte ptr [eax], dl
// 0097b026  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 0097b02b  f30f59c8             mulss xmm1, xmm0
// 0097b02f  f30f110c24           movss dword ptr [esp], xmm1
// 0097b034  d90424               fld dword ptr [esp]
// 0097b037  db5c2408             fistp dword ptr [esp + 8]
// 0097b03b  8b542408             mov edx, dword ptr [esp + 8]
// 0097b03f  81faff000000         cmp edx, 0xff
// 0097b045  7e05                 jle 0x97b04c
// 0097b047  baff000000           mov edx, 0xff
// 0097b04c  885001               mov byte ptr [eax + 1], dl
// 0097b04f  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 0097b054  f30f59c8             mulss xmm1, xmm0
// 0097b058  f30f110c24           movss dword ptr [esp], xmm1
// 0097b05d  d90424               fld dword ptr [esp]
// 0097b060  db5c2408             fistp dword ptr [esp + 8]
// 0097b064  8b542408             mov edx, dword ptr [esp + 8]
// 0097b068  81faff000000         cmp edx, 0xff
// 0097b06e  7e05                 jle 0x97b075
// 0097b070  baff000000           mov edx, 0xff
// 0097b075  885002               mov byte ptr [eax + 2], dl
// 0097b078  f30f10490c           movss xmm1, dword ptr [ecx + 0xc]
// 0097b07d  f30f59c8             mulss xmm1, xmm0
// 0097b081  f30f110c24           movss dword ptr [esp], xmm1
// 0097b086  d90424               fld dword ptr [esp]
// 0097b089  db5c2408             fistp dword ptr [esp + 8]
// 0097b08d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0097b091  81f9ff000000         cmp ecx, 0xff
// 0097b097  7e05                 jle 0x97b09e
// 0097b099  b9ff000000           mov ecx, 0xff
// 0097b09e  884803               mov byte ptr [eax + 3], cl
// 0097b0a1  59                   pop ecx
// 0097b0a2  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4uint8.cpp (function ??0Color4uint8@G3D@@QAE@ABVColor4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color4uint8.cpp
