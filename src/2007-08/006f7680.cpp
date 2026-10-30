// from server: 100% by auto
// roc 2007-08 006f7680  unit: VCEdit::?$CXTMaskEditT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7680
//
// 006f7680  56                   push esi
// 006f7681  8bf1                 mov esi, ecx
// 006f7683  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f7686  85c0                 test eax, eax
// 006f7688  7450                 je 0x6f76da
// 006f768a  53                   push ebx
// 006f768b  57                   push edi
// 006f768c  8d7e58               lea edi, [esi + 0x58]
// 006f768f  57                   push edi
// 006f7690  8d5e54               lea ebx, [esi + 0x54]
// 006f7693  53                   push ebx
// 006f7694  68b0000000           push 0xb0
// 006f7699  50                   push eax
// 006f769a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006f76a0  8d8680000000         lea eax, [esi + 0x80]
// 006f76a6  50                   push eax
// 006f76a7  8bce                 mov ecx, esi
// 006f76a9  e8a28bf3ff           call 0x630250
// 006f76ae  8bce                 mov ecx, esi
// 006f76b0  e84bedffff           call 0x6f6400
// 006f76b5  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f76ba  741c                 je 0x6f76d8
// 006f76bc  6a01                 push 1
// 006f76be  53                   push ebx
// 006f76bf  8bce                 mov ecx, esi
// 006f76c1  e87afeffff           call 0x6f7540
// 006f76c6  6a01                 push 1
// 006f76c8  57                   push edi
// 006f76c9  8bce                 mov ecx, esi
// 006f76cb  e870feffff           call 0x6f7540
// 006f76d0  8b1b                 mov ebx, dword ptr [ebx]
// 006f76d2  391f                 cmp dword ptr [edi], ebx
// 006f76d4  7d02                 jge 0x6f76d8
// 006f76d6  891f                 mov dword ptr [edi], ebx
// 006f76d8  5f                   pop edi
// 006f76d9  5b                   pop ebx
// 006f76da  5e                   pop esi
// 006f76db  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTMaskEdit.cpp (function ?GetMaskState@?$CXTMaskEditT@VCEdit@@@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTMaskEdit.cpp
