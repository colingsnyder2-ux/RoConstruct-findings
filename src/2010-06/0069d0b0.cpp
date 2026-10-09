// roc 2010-06 0069d0b0  unit: RBX::PART::VWedge::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069d0b0
//
// 0069d0b0  56                   push esi
// 0069d0b1  57                   push edi
// 0069d0b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069d0b6  6a01                 push 1
// 0069d0b8  57                   push edi
// 0069d0b9  8bf1                 mov esi, ecx
// 0069d0bb  e890b60700           call 0x718750
// 0069d0c0  6a04                 push 4
// 0069d0c2  57                   push edi
// 0069d0c3  8d4e08               lea ecx, [esi + 8]
// 0069d0c6  e885b60700           call 0x718750
// 0069d0cb  6a03                 push 3
// 0069d0cd  57                   push edi
// 0069d0ce  8d4e10               lea ecx, [esi + 0x10]
// 0069d0d1  e87ab60700           call 0x718750
// 0069d0d6  6a00                 push 0
// 0069d0d8  57                   push edi
// 0069d0d9  8d4e18               lea ecx, [esi + 0x18]
// 0069d0dc  e86fb60700           call 0x718750
// 0069d0e1  6a05                 push 5
// 0069d0e3  57                   push edi
// 0069d0e4  8d4e20               lea ecx, [esi + 0x20]
// 0069d0e7  e864b60700           call 0x718750
// 0069d0ec  6a02                 push 2
// 0069d0ee  57                   push edi
// 0069d0ef  8d4e28               lea ecx, [esi + 0x28]
// 0069d0f2  e859b60700           call 0x718750
// 0069d0f7  5f                   pop edi
// 0069d0f8  8bc6                 mov eax, esi
// 0069d0fa  5e                   pop esi
// 0069d0fb  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
