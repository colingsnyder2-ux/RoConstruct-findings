// roc 2008-06 00647ab0  unit: RBX::Block  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647ab0
//
// 00647ab0  d90588af8400         fld dword ptr [0x84af88]
// 00647ab6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00647ab9  d9c0                 fld st(0)
// 00647abb  56                   push esi
// 00647abc  d902                 fld dword ptr [edx]
// 00647abe  8b742408             mov esi, dword ptr [esp + 8]
// 00647ac2  d826                 fsub dword ptr [esi]
// 00647ac4  57                   push edi
// 00647ac5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00647ac9  d8d2                 fcom st(2)
// 00647acb  dfe0                 fnstsw ax
// 00647acd  ddda                 fstp st(2)
// 00647acf  f6c405               test ah, 5
// 00647ad2  7a0a                 jp 0x647ade
// 00647ad4  ddd8                 fstp st(0)
// 00647ad6  c70700000000         mov dword ptr [edi], 0
// 00647adc  eb02                 jmp 0x647ae0
// 00647ade  ddd9                 fstp st(1)
// 00647ae0  d906                 fld dword ptr [esi]
// 00647ae2  d822                 fsub dword ptr [edx]
// 00647ae4  d8d1                 fcom st(1)
// 00647ae6  dfe0                 fnstsw ax
// 00647ae8  f6c405               test ah, 5
// 00647aeb  7a0a                 jp 0x647af7
// 00647aed  ddd9                 fstp st(1)
// 00647aef  c70703000000         mov dword ptr [edi], 3
// 00647af5  eb02                 jmp 0x647af9
// 00647af7  ddd8                 fstp st(0)
// 00647af9  d94204               fld dword ptr [edx + 4]
// 00647afc  d86604               fsub dword ptr [esi + 4]
// 00647aff  d8d1                 fcom st(1)
// 00647b01  dfe0                 fnstsw ax
// 00647b03  f6c405               test ah, 5
// 00647b06  7a0a                 jp 0x647b12
// 00647b08  ddd9                 fstp st(1)
// 00647b0a  c70701000000         mov dword ptr [edi], 1
// 00647b10  eb02                 jmp 0x647b14
// 00647b12  ddd8                 fstp st(0)
// 00647b14  d94604               fld dword ptr [esi + 4]
// 00647b17  d86204               fsub dword ptr [edx + 4]
// 00647b1a  d8d1                 fcom st(1)
// 00647b1c  dfe0                 fnstsw ax
// 00647b1e  f6c405               test ah, 5
// 00647b21  7a0a                 jp 0x647b2d
// 00647b23  ddd9                 fstp st(1)
// 00647b25  c70704000000         mov dword ptr [edi], 4
// 00647b2b  eb02                 jmp 0x647b2f
// 00647b2d  ddd8                 fstp st(0)
// 00647b2f  d94208               fld dword ptr [edx + 8]
// 00647b32  d86608               fsub dword ptr [esi + 8]
// 00647b35  d8d1                 fcom st(1)
// 00647b37  dfe0                 fnstsw ax
// 00647b39  f6c405               test ah, 5
// 00647b3c  7a0a                 jp 0x647b48
// 00647b3e  ddd9                 fstp st(1)
// 00647b40  c70702000000         mov dword ptr [edi], 2
// 00647b46  eb02                 jmp 0x647b4a
// 00647b48  ddd8                 fstp st(0)
// 00647b4a  d94608               fld dword ptr [esi + 8]
// 00647b4d  d86208               fsub dword ptr [edx + 8]
// 00647b50  ded9                 fcompp 
// 00647b52  dfe0                 fnstsw ax
// 00647b54  f6c405               test ah, 5
// 00647b57  7a06                 jp 0x647b5f
// 00647b59  c70705000000         mov dword ptr [edi], 5
// 00647b5f  833f02               cmp dword ptr [edi], 2
// 00647b62  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00647b65  5f                   pop edi
// 00647b66  5e                   pop esi
// 00647b67  7e11                 jle 0x647b7a
// 00647b69  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647b6d  83c054               add eax, 0x54
// 00647b70  8901                 mov dword ptr [ecx], eax
// 00647b72  b803000000           mov eax, 3
// 00647b77  c20c00               ret 0xc
// 00647b7a  8b542408             mov edx, dword ptr [esp + 8]
// 00647b7e  8902                 mov dword ptr [edx], eax
// 00647b80  b803000000           mov eax, 3
// 00647b85  c20c00               ret 0xc
// library openrbx-client/App\v8world\Block.cpp (function ?getBallInsideInfo@Block@RBX@@QAE?AW4GeoPairType@2@ABVVector3@G3D@@AAPBV45@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8world/Block.cpp
