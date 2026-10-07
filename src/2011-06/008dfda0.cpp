// roc 2011-06 008dfda0  unit: VCEdit::?$CXTMaskEditT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dfda0
//
// 008dfda0  56                   push esi
// 008dfda1  8bf1                 mov esi, ecx
// 008dfda3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dfda6  85c0                 test eax, eax
// 008dfda8  7450                 je 0x8dfdfa
// 008dfdaa  53                   push ebx
// 008dfdab  57                   push edi
// 008dfdac  8d7e58               lea edi, [esi + 0x58]
// 008dfdaf  57                   push edi
// 008dfdb0  8d5e54               lea ebx, [esi + 0x54]
// 008dfdb3  53                   push ebx
// 008dfdb4  68b0000000           push 0xb0
// 008dfdb9  50                   push eax
// 008dfdba  ff15c019a400         call dword ptr [0xa419c0]
// 008dfdc0  8d8680000000         lea eax, [esi + 0x80]
// 008dfdc6  50                   push eax
// 008dfdc7  8bce                 mov ecx, esi
// 008dfdc9  e878a8f2ff           call 0x80a646
// 008dfdce  8bce                 mov ecx, esi
// 008dfdd0  e81bebffff           call 0x8de8f0
// 008dfdd5  837c241000           cmp dword ptr [esp + 0x10], 0
// 008dfdda  741c                 je 0x8dfdf8
// 008dfddc  6a01                 push 1
// 008dfdde  53                   push ebx
// 008dfddf  8bce                 mov ecx, esi
// 008dfde1  e87afeffff           call 0x8dfc60
// 008dfde6  6a01                 push 1
// 008dfde8  57                   push edi
// 008dfde9  8bce                 mov ecx, esi
// 008dfdeb  e870feffff           call 0x8dfc60
// 008dfdf0  8b1b                 mov ebx, dword ptr [ebx]
// 008dfdf2  391f                 cmp dword ptr [edi], ebx
// 008dfdf4  7d02                 jge 0x8dfdf8
// 008dfdf6  891f                 mov dword ptr [edi], ebx
// 008dfdf8  5f                   pop edi
// 008dfdf9  5b                   pop ebx
// 008dfdfa  5e                   pop esi
// 008dfdfb  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?GetMaskState@?$CXTPMaskEditT@VCEdit@@@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTFlatComboBox.cpp
