// roc 2007-08 005b6c60  unit: RBX::Sky  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6c60
//
// 005b6c60  56                   push esi
// 005b6c61  57                   push edi
// 005b6c62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b6c66  6a01                 push 1
// 005b6c68  57                   push edi
// 005b6c69  8bf1                 mov esi, ecx
// 005b6c6b  e890240000           call 0x5b9100
// 005b6c70  6a04                 push 4
// 005b6c72  57                   push edi
// 005b6c73  8d4e08               lea ecx, [esi + 8]
// 005b6c76  e885240000           call 0x5b9100
// 005b6c7b  6a03                 push 3
// 005b6c7d  57                   push edi
// 005b6c7e  8d4e10               lea ecx, [esi + 0x10]
// 005b6c81  e87a240000           call 0x5b9100
// 005b6c86  6a00                 push 0
// 005b6c88  57                   push edi
// 005b6c89  8d4e18               lea ecx, [esi + 0x18]
// 005b6c8c  e86f240000           call 0x5b9100
// 005b6c91  6a05                 push 5
// 005b6c93  57                   push edi
// 005b6c94  8d4e20               lea ecx, [esi + 0x20]
// 005b6c97  e864240000           call 0x5b9100
// 005b6c9c  6a02                 push 2
// 005b6c9e  57                   push edi
// 005b6c9f  8d4e28               lea ecx, [esi + 0x28]
// 005b6ca2  e859240000           call 0x5b9100
// 005b6ca7  5f                   pop edi
// 005b6ca8  8bc6                 mov eax, esi
// 005b6caa  5e                   pop esi
// 005b6cab  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
