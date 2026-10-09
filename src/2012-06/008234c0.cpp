// roc 2012-06 008234c0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008234c0
//
// 008234c0  56                   push esi
// 008234c1  57                   push edi
// 008234c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008234c6  6a01                 push 1
// 008234c8  57                   push edi
// 008234c9  8bf1                 mov esi, ecx
// 008234cb  e840ef1400           call 0x972410
// 008234d0  6a04                 push 4
// 008234d2  57                   push edi
// 008234d3  8d4e08               lea ecx, [esi + 8]
// 008234d6  e835ef1400           call 0x972410
// 008234db  6a03                 push 3
// 008234dd  57                   push edi
// 008234de  8d4e10               lea ecx, [esi + 0x10]
// 008234e1  e82aef1400           call 0x972410
// 008234e6  6a00                 push 0
// 008234e8  57                   push edi
// 008234e9  8d4e18               lea ecx, [esi + 0x18]
// 008234ec  e81fef1400           call 0x972410
// 008234f1  6a05                 push 5
// 008234f3  57                   push edi
// 008234f4  8d4e20               lea ecx, [esi + 0x20]
// 008234f7  e814ef1400           call 0x972410
// 008234fc  6a02                 push 2
// 008234fe  57                   push edi
// 008234ff  8d4e28               lea ecx, [esi + 0x28]
// 00823502  e809ef1400           call 0x972410
// 00823507  5f                   pop edi
// 00823508  8bc6                 mov eax, esi
// 0082350a  5e                   pop esi
// 0082350b  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
