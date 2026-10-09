// roc 2009-12 006f1f70  unit: RBX::BasicPartInstance  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f1f70
//
// 006f1f70  56                   push esi
// 006f1f71  57                   push edi
// 006f1f72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f1f76  6a01                 push 1
// 006f1f78  57                   push edi
// 006f1f79  8bf1                 mov esi, ecx
// 006f1f7b  e840b20200           call 0x71d1c0
// 006f1f80  6a04                 push 4
// 006f1f82  57                   push edi
// 006f1f83  8d4e08               lea ecx, [esi + 8]
// 006f1f86  e835b20200           call 0x71d1c0
// 006f1f8b  6a03                 push 3
// 006f1f8d  57                   push edi
// 006f1f8e  8d4e10               lea ecx, [esi + 0x10]
// 006f1f91  e82ab20200           call 0x71d1c0
// 006f1f96  6a00                 push 0
// 006f1f98  57                   push edi
// 006f1f99  8d4e18               lea ecx, [esi + 0x18]
// 006f1f9c  e81fb20200           call 0x71d1c0
// 006f1fa1  6a05                 push 5
// 006f1fa3  57                   push edi
// 006f1fa4  8d4e20               lea ecx, [esi + 0x20]
// 006f1fa7  e814b20200           call 0x71d1c0
// 006f1fac  6a02                 push 2
// 006f1fae  57                   push edi
// 006f1faf  8d4e28               lea ecx, [esi + 0x28]
// 006f1fb2  e809b20200           call 0x71d1c0
// 006f1fb7  5f                   pop edi
// 006f1fb8  8bc6                 mov eax, esi
// 006f1fba  5e                   pop esi
// 006f1fbb  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
