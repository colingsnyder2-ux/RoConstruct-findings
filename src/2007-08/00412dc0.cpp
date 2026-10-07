// roc 2007-08 00412dc0  unit: VCContent::?$CComAggObject  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412dc0
//
// 00412dc0  6aff                 push -1
// 00412dc2  6869a57300           push 0x73a569
// 00412dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00412dcd  50                   push eax
// 00412dce  51                   push ecx
// 00412dcf  56                   push esi
// 00412dd0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00412dd5  33c4                 xor eax, esp
// 00412dd7  50                   push eax
// 00412dd8  8d44240c             lea eax, [esp + 0xc]
// 00412ddc  64a300000000         mov dword ptr fs:[0], eax
// 00412de2  8bf1                 mov esi, ecx
// 00412de4  89742408             mov dword ptr [esp + 8], esi
// 00412de8  ff15f8e67700         call dword ptr [0x77e6f8]
// 00412dee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00412df2  50                   push eax
// 00412df3  8d4e0c               lea ecx, [esi + 0xc]
// 00412df6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00412dfe  c70618707800         mov dword ptr [esi], 0x787018
// 00412e04  ff159ce67700         call dword ptr [0x77e69c]
// 00412e0a  8bc6                 mov eax, esi
// 00412e0c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00412e10  64890d00000000       mov dword ptr fs:[0], ecx
// 00412e17  59                   pop ecx
// 00412e18  5e                   pop esi
// 00412e19  83c410               add esp, 0x10
// 00412e1c  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0logic_error@std@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
