// roc 2008-06 005ecbb0  unit: RBX::Sky  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecbb0
//
// 005ecbb0  56                   push esi
// 005ecbb1  57                   push edi
// 005ecbb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ecbb6  6a01                 push 1
// 005ecbb8  57                   push edi
// 005ecbb9  8bf1                 mov esi, ecx
// 005ecbbb  e8b0460000           call 0x5f1270
// 005ecbc0  6a04                 push 4
// 005ecbc2  57                   push edi
// 005ecbc3  8d4e08               lea ecx, [esi + 8]
// 005ecbc6  e8a5460000           call 0x5f1270
// 005ecbcb  6a03                 push 3
// 005ecbcd  57                   push edi
// 005ecbce  8d4e10               lea ecx, [esi + 0x10]
// 005ecbd1  e89a460000           call 0x5f1270
// 005ecbd6  6a00                 push 0
// 005ecbd8  57                   push edi
// 005ecbd9  8d4e18               lea ecx, [esi + 0x18]
// 005ecbdc  e88f460000           call 0x5f1270
// 005ecbe1  6a05                 push 5
// 005ecbe3  57                   push edi
// 005ecbe4  8d4e20               lea ecx, [esi + 0x20]
// 005ecbe7  e884460000           call 0x5f1270
// 005ecbec  6a02                 push 2
// 005ecbee  57                   push edi
// 005ecbef  8d4e28               lea ecx, [esi + 0x28]
// 005ecbf2  e879460000           call 0x5f1270
// 005ecbf7  5f                   pop edi
// 005ecbf8  8bc6                 mov eax, esi
// 005ecbfa  5e                   pop esi
// 005ecbfb  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
