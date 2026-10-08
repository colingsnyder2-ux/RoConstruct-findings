// roc 2007-08 00576200  unit: RBX::PartInstance  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576200
//
// 00576200  56                   push esi
// 00576201  51                   push ecx
// 00576202  8bf1                 mov esi, ecx
// 00576204  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00576208  8bc4                 mov eax, esp
// 0057620a  8808                 mov byte ptr [eax], cl
// 0057620c  8d4ee8               lea ecx, [esi - 0x18]
// 0057620f  e81cfdffff           call 0x575f30
// 00576214  8d4e0c               lea ecx, [esi + 0xc]
// 00576217  e804720400           call 0x5bd420
// 0057621c  5e                   pop esi
// 0057621d  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?onCanAggregateChanged@PartInstance@RBX@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
