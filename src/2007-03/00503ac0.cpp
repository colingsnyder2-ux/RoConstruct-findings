// roc 2007-03 00503ac0  unit: seg_00500000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503ac0
//
// 00503ac0  83ec0c               sub esp, 0xc
// 00503ac3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00503ac8  56                   push esi
// 00503ac9  57                   push edi
// 00503aca  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00503ace  7513                 jne 0x503ae3
// 00503ad0  d90560f47900         fld dword ptr [0x79f460]
// 00503ad6  51                   push ecx
// 00503ad7  8bcf                 mov ecx, edi
// 00503ad9  d91c24               fstp dword ptr [esp]
// 00503adc  e85fffffff           call 0x503a40
// 00503ae1  ddd8                 fstp st(0)
// 00503ae3  d907                 fld dword ptr [edi]
// 00503ae5  d9e1                 fabs 
// 00503ae7  d94704               fld dword ptr [edi + 4]
// 00503aea  d9e1                 fabs 
// 00503aec  d8d9                 fcomp st(1)
// 00503aee  dfe0                 fnstsw ax
// 00503af0  f6c441               test ah, 0x41
// 00503af3  7a22                 jp 0x503b17
// 00503af5  d94708               fld dword ptr [edi + 8]
// 00503af8  d9e1                 fabs 
// 00503afa  ded9                 fcompp 
// 00503afc  dfe0                 fnstsw ax
// 00503afe  f6c441               test ah, 0x41
// 00503b01  7a16                 jp 0x503b19
// 00503b03  d94704               fld dword ptr [edi + 4]
// 00503b06  8b742418             mov esi, dword ptr [esp + 0x18]
// 00503b0a  d9e0                 fchs 
// 00503b0c  d91e                 fstp dword ptr [esi]
// 00503b0e  d907                 fld dword ptr [edi]
// 00503b10  d95e04               fstp dword ptr [esi + 4]
// 00503b13  d9ee                 fldz 
// 00503b15  eb15                 jmp 0x503b2c
// 00503b17  ddd8                 fstp st(0)
// 00503b19  d9ee                 fldz 
// 00503b1b  8b742418             mov esi, dword ptr [esp + 0x18]
// 00503b1f  d91e                 fstp dword ptr [esi]
// 00503b21  d94708               fld dword ptr [edi + 8]
// 00503b24  d95e04               fstp dword ptr [esi + 4]
// 00503b27  d94704               fld dword ptr [edi + 4]
// 00503b2a  d9e0                 fchs 
// 00503b2c  d95e08               fstp dword ptr [esi + 8]
// 00503b2f  51                   push ecx
// 00503b30  d90560f47900         fld dword ptr [0x79f460]
// 00503b36  8bce                 mov ecx, esi
// 00503b38  d91c24               fstp dword ptr [esp]
// 00503b3b  e800ffffff           call 0x503a40
// 00503b40  ddd8                 fstp st(0)
// 00503b42  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00503b46  d94608               fld dword ptr [esi + 8]
// 00503b49  d84f04               fmul dword ptr [edi + 4]
// 00503b4c  d94604               fld dword ptr [esi + 4]
// 00503b4f  d84f08               fmul dword ptr [edi + 8]
// 00503b52  dee9                 fsubp st(1)
// 00503b54  d95c2408             fstp dword ptr [esp + 8]
// 00503b58  d906                 fld dword ptr [esi]
// 00503b5a  d84f08               fmul dword ptr [edi + 8]
// 00503b5d  d94608               fld dword ptr [esi + 8]
// 00503b60  d80f                 fmul dword ptr [edi]
// 00503b62  dee9                 fsubp st(1)
// 00503b64  d95c240c             fstp dword ptr [esp + 0xc]
// 00503b68  d907                 fld dword ptr [edi]
// 00503b6a  d84e04               fmul dword ptr [esi + 4]
// 00503b6d  d94704               fld dword ptr [edi + 4]
// 00503b70  5f                   pop edi
// 00503b71  d80e                 fmul dword ptr [esi]
// 00503b73  5e                   pop esi
// 00503b74  dee9                 fsubp st(1)
// 00503b76  d95c2408             fstp dword ptr [esp + 8]
// 00503b7a  d90424               fld dword ptr [esp]
// 00503b7d  d918                 fstp dword ptr [eax]
// 00503b7f  d9442404             fld dword ptr [esp + 4]
// 00503b83  d95804               fstp dword ptr [eax + 4]
// 00503b86  d9442408             fld dword ptr [esp + 8]
// 00503b8a  d95808               fstp dword ptr [eax + 8]
// 00503b8d  83c40c               add esp, 0xc
// 00503b90  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Vector3.cpp (function ?generateOrthonormalBasis@Vector3@G3D@@SAXAAV12@00_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector3.cpp
