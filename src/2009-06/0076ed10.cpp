// roc 2009-06 0076ed10  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ed10
//
// 0076ed10  56                   push esi
// 0076ed11  57                   push edi
// 0076ed12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076ed16  57                   push edi
// 0076ed17  8bf1                 mov esi, ecx
// 0076ed19  e872c9feff           call 0x75b690
// 0076ed1e  33c9                 xor ecx, ecx
// 0076ed20  51                   push ecx
// 0076ed21  33c0                 xor eax, eax
// 0076ed23  50                   push eax
// 0076ed24  8d8674010000         lea eax, [esi + 0x174]
// 0076ed2a  50                   push eax
// 0076ed2b  6868b48f00           push 0x8fb468
// 0076ed30  57                   push edi
// 0076ed31  e8ba700000           call 0x775df0
// 0076ed36  33c9                 xor ecx, ecx
// 0076ed38  51                   push ecx
// 0076ed39  33c0                 xor eax, eax
// 0076ed3b  50                   push eax
// 0076ed3c  8d8e7c010000         lea ecx, [esi + 0x17c]
// 0076ed42  51                   push ecx
// 0076ed43  685cb48f00           push 0x8fb45c
// 0076ed48  57                   push edi
// 0076ed49  e8a2700000           call 0x775df0
// 0076ed4e  33c9                 xor ecx, ecx
// 0076ed50  51                   push ecx
// 0076ed51  33c0                 xor eax, eax
// 0076ed53  50                   push eax
// 0076ed54  81c68c010000         add esi, 0x18c
// 0076ed5a  56                   push esi
// 0076ed5b  6850b48f00           push 0x8fb450
// 0076ed60  57                   push edi
// 0076ed61  e88a700000           call 0x775df0
// 0076ed66  83c43c               add esp, 0x3c
// 0076ed69  5f                   pop edi
// 0076ed6a  5e                   pop esi
// 0076ed6b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
