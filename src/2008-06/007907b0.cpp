// from server: 100% by auto
// roc 2008-06 007907b0  unit: PAVCXTShadowWnd::?$CList  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007907b0
//
// 007907b0  83ec30               sub esp, 0x30
// 007907b3  56                   push esi
// 007907b4  8bf1                 mov esi, ecx
// 007907b6  8b4668               mov eax, dword ptr [esi + 0x68]
// 007907b9  57                   push edi
// 007907ba  50                   push eax
// 007907bb  e81e04f1ff           call 0x6a0bde
// 007907c0  837e6800             cmp dword ptr [esi + 0x68], 0
// 007907c4  0f8455010000         je 0x79091f
// 007907ca  85c0                 test eax, eax
// 007907cc  0f844d010000         je 0x79091f
// 007907d2  837e5800             cmp dword ptr [esi + 0x58], 0
// 007907d6  0f8436010000         je 0x790912
// 007907dc  8b7e54               mov edi, dword ptr [esi + 0x54]
// 007907df  50                   push eax
// 007907e0  8d4c240c             lea ecx, [esp + 0xc]
// 007907e4  e8e772f6ff           call 0x6f7ad0
// 007907e9  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007907ed  741e                 je 0x79080d
// 007907ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 007907f3  8b542410             mov edx, dword ptr [esp + 0x10]
// 007907f7  8d0c38               lea ecx, [eax + edi]
// 007907fa  51                   push ecx
// 007907fb  03d7                 add edx, edi
// 007907fd  52                   push edx
// 007907fe  50                   push eax
// 007907ff  8b442414             mov eax, dword ptr [esp + 0x14]
// 00790803  03c7                 add eax, edi
// 00790805  50                   push eax
// 00790806  8d4c2428             lea ecx, [esp + 0x28]
// 0079080a  51                   push ecx
// 0079080b  eb1a                 jmp 0x790827
// 0079080d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00790811  8b442410             mov eax, dword ptr [esp + 0x10]
// 00790815  52                   push edx
// 00790816  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079081a  8d0c38               lea ecx, [eax + edi]
// 0079081d  51                   push ecx
// 0079081e  03d7                 add edx, edi
// 00790820  52                   push edx
// 00790821  50                   push eax
// 00790822  8d442428             lea eax, [esp + 0x28]
// 00790826  50                   push eax
// 00790827  ff15102d8000         call dword ptr [0x802d10]
// 0079082d  56                   push esi
// 0079082e  8d4c242c             lea ecx, [esp + 0x2c]
// 00790832  e89972f6ff           call 0x6f7ad0
// 00790837  8d4c2428             lea ecx, [esp + 0x28]
// 0079083b  51                   push ecx
// 0079083c  8d54241c             lea edx, [esp + 0x1c]
// 00790840  52                   push edx
// 00790841  ff15682c8000         call dword ptr [0x802c68]
// 00790847  85c0                 test eax, eax
// 00790849  0f85d0000000         jne 0x79091f
// 0079084f  6a01                 push 1
// 00790851  8d44241c             lea eax, [esp + 0x1c]
// 00790855  50                   push eax
// 00790856  8bce                 mov ecx, esi
// 00790858  e88313cdff           call 0x461be0
// 0079085d  e80effffff           call 0x790770
// 00790862  50                   push eax
// 00790863  8bce                 mov ecx, esi
// 00790865  e886faffff           call 0x7902f0
// 0079086a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0079086d  6a00                 push 0
// 0079086f  6a00                 push 0
// 00790871  51                   push ecx
// 00790872  ff15d42b8000         call dword ptr [0x802bd4]
// 00790878  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0079087b  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0079087e  83ec10               sub esp, 0x10
// 00790881  8bc4                 mov eax, esp
// 00790883  8910                 mov dword ptr [eax], edx
// 00790885  8b5674               mov edx, dword ptr [esi + 0x74]
// 00790888  894804               mov dword ptr [eax + 4], ecx
// 0079088b  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0079088e  895008               mov dword ptr [eax + 8], edx
// 00790891  89480c               mov dword ptr [eax + 0xc], ecx
// 00790894  8bce                 mov ecx, esi
// 00790896  e8a5f9ffff           call 0x790240
// 0079089b  837e6400             cmp dword ptr [esi + 0x64], 0
// 0079089f  747e                 je 0x79091f
// 007908a1  e82ad4f7ff           call 0x70dcd0
// 007908a6  8b5020               mov edx, dword ptr [eax + 0x20]
// 007908a9  f7da                 neg edx
// 007908ab  1bd2                 sbb edx, edx
// 007908ad  83e2fc               and edx, 0xfffffffc
// 007908b0  83c204               add edx, 4
// 007908b3  81ca93000000         or edx, 0x93
// 007908b9  52                   push edx
// 007908ba  6a00                 push 0
// 007908bc  6a00                 push 0
// 007908be  6a00                 push 0
// 007908c0  6a00                 push 0
// 007908c2  6a00                 push 0
// 007908c4  8bce                 mov ecx, esi
// 007908c6  e87b01f1ff           call 0x6a0a46
// 007908cb  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 007908ce  85c9                 test ecx, ecx
// 007908d0  7410                 je 0x7908e2
// 007908d2  8b01                 mov eax, dword ptr [ecx]
// 007908d4  8b5004               mov edx, dword ptr [eax + 4]
// 007908d7  6a01                 push 1
// 007908d9  ffd2                 call edx
// 007908db  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 007908e2  ff154c2b8000         call dword ptr [0x802b4c]
// 007908e8  50                   push eax
// 007908e9  e8f002f1ff           call 0x6a0bde
// 007908ee  8b4020               mov eax, dword ptr [eax + 0x20]
// 007908f1  6a00                 push 0
// 007908f3  6a00                 push 0
// 007908f5  50                   push eax
// 007908f6  ff15182e8000         call dword ptr [0x802e18]
// 007908fc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007908ff  6a00                 push 0
// 00790901  6a01                 push 1
// 00790903  6a01                 push 1
// 00790905  51                   push ecx
// 00790906  ff157c2d8000         call dword ptr [0x802d7c]
// 0079090c  5f                   pop edi
// 0079090d  5e                   pop esi
// 0079090e  83c430               add esp, 0x30
// 00790911  c3                   ret 
// 00790912  e859feffff           call 0x790770
// 00790917  50                   push eax
// 00790918  8bce                 mov ecx, esi
// 0079091a  e8d1f9ffff           call 0x7902f0
// 0079091f  5f                   pop edi
// 00790920  5e                   pop esi
// 00790921  83c430               add esp, 0x30
// 00790924  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnParentPosChanged@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
