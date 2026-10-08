// roc 2012-06 009d3840  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d3840
//
// 009d3840  8b542404             mov edx, dword ptr [esp + 4]
// 009d3844  56                   push esi
// 009d3845  8bf1                 mov esi, ecx
// 009d3847  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 009d384d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 009d3853  3bd0                 cmp edx, eax
// 009d3855  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009d3859  750b                 jne 0x9d3866
// 009d385b  3bc1                 cmp eax, ecx
// 009d385d  7507                 jne 0x9d3866
// 009d385f  837c241000           cmp dword ptr [esp + 0x10], 0
// 009d3864  7421                 je 0x9d3887
// 009d3866  6a01                 push 1
// 009d3868  8bce                 mov ecx, esi
// 009d386a  899684010000         mov dword ptr [esi + 0x184], edx
// 009d3870  898688010000         mov dword ptr [esi + 0x188], eax
// 009d3876  e8b517fbff           call 0x985030
// 009d387b  6806100000           push 0x1006
// 009d3880  8bce                 mov ecx, esi
// 009d3882  e8d936fbff           call 0x986f60
// 009d3887  5e                   pop esi
// 009d3888  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
