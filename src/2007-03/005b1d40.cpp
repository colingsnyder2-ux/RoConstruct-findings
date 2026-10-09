// roc 2007-03 005b1d40  unit: seg_005b0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b1d40
//
// 005b1d40  56                   push esi
// 005b1d41  57                   push edi
// 005b1d42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b1d46  6a01                 push 1
// 005b1d48  57                   push edi
// 005b1d49  8bf1                 mov esi, ecx
// 005b1d4b  e8c0210000           call 0x5b3f10
// 005b1d50  6a04                 push 4
// 005b1d52  57                   push edi
// 005b1d53  8d4e08               lea ecx, [esi + 8]
// 005b1d56  e8b5210000           call 0x5b3f10
// 005b1d5b  6a03                 push 3
// 005b1d5d  57                   push edi
// 005b1d5e  8d4e10               lea ecx, [esi + 0x10]
// 005b1d61  e8aa210000           call 0x5b3f10
// 005b1d66  6a00                 push 0
// 005b1d68  57                   push edi
// 005b1d69  8d4e18               lea ecx, [esi + 0x18]
// 005b1d6c  e89f210000           call 0x5b3f10
// 005b1d71  6a05                 push 5
// 005b1d73  57                   push edi
// 005b1d74  8d4e20               lea ecx, [esi + 0x20]
// 005b1d77  e894210000           call 0x5b3f10
// 005b1d7c  6a02                 push 2
// 005b1d7e  57                   push edi
// 005b1d7f  8d4e28               lea ecx, [esi + 0x28]
// 005b1d82  e889210000           call 0x5b3f10
// 005b1d87  5f                   pop edi
// 005b1d88  8bc6                 mov eax, esi
// 005b1d8a  5e                   pop esi
// 005b1d8b  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
