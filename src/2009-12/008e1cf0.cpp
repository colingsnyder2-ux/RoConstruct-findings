// roc 2009-12 008e1cf0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1cf0
//
// 008e1cf0  56                   push esi
// 008e1cf1  8bf1                 mov esi, ecx
// 008e1cf3  e8d8fbffff           call 0x8e18d0
// 008e1cf8  84c0                 test al, al
// 008e1cfa  7566                 jne 0x8e1d62
// 008e1cfc  8b442408             mov eax, dword ptr [esp + 8]
// 008e1d00  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 008e1d06  83c0f3               add eax, -0xd
// 008e1d09  49                   dec ecx
// 008e1d0a  83f81b               cmp eax, 0x1b
// 008e1d0d  774c                 ja 0x8e1d5b
// 008e1d0f  0fb680541e8e00       movzx eax, byte ptr [eax + 0x8e1e54]
// 008e1d16  ff2485381e8e00       jmp dword ptr [eax*4 + 0x8e1e38]
// 008e1d1d  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e1d20  83f8ff               cmp eax, -1
// 008e1d23  741a                 je 0x8e1d3f
// 008e1d25  85c0                 test eax, eax
// 008e1d27  7512                 jne 0x8e1d3b
// 008e1d29  f686a400000010       test byte ptr [esi + 0xa4], 0x10
// 008e1d30  7509                 jne 0x8e1d3b
// 008e1d32  c7467001000000       mov dword ptr [esi + 0x70], 1
// 008e1d39  eb15                 jmp 0x8e1d50
// 008e1d3b  3bc1                 cmp eax, ecx
// 008e1d3d  7509                 jne 0x8e1d48
// 008e1d3f  c7467000000000       mov dword ptr [esi + 0x70], 0
// 008e1d46  eb08                 jmp 0x8e1d50
// 008e1d48  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e1d4b  03c8                 add ecx, eax
// 008e1d4d  894e70               mov dword ptr [esi + 0x70], ecx
// 008e1d50  8b5670               mov edx, dword ptr [esi + 0x70]
// 008e1d53  52                   push edx
// 008e1d54  8bce                 mov ecx, esi
// 008e1d56  e845ffffff           call 0x8e1ca0
// 008e1d5b  8bce                 mov ecx, esi
// 008e1d5d  e8ce20f1ff           call 0x7f3e30
// 008e1d62  5e                   pop esi
// 008e1d63  c20c00               ret 0xc
// 008e1d66  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e1d69  83f8ff               cmp eax, -1
// 008e1d6c  7404                 je 0x8e1d72
// 008e1d6e  85c0                 test eax, eax
// 008e1d70  7518                 jne 0x8e1d8a
// 008e1d72  8bc1                 mov eax, ecx
// 008e1d74  894e70               mov dword ptr [esi + 0x70], ecx
// 008e1d77  50                   push eax
// 008e1d78  8bce                 mov ecx, esi
// 008e1d7a  e821ffffff           call 0x8e1ca0
// 008e1d7f  8bce                 mov ecx, esi
// 008e1d81  e8aa20f1ff           call 0x7f3e30
// 008e1d86  5e                   pop esi
// 008e1d87  c20c00               ret 0xc
// 008e1d8a  3bc1                 cmp eax, ecx
// 008e1d8c  7520                 jne 0x8e1dae
// 008e1d8e  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008e1d95  7417                 je 0x8e1dae
// 008e1d97  48                   dec eax
// 008e1d98  50                   push eax
// 008e1d99  8bce                 mov ecx, esi
// 008e1d9b  894670               mov dword ptr [esi + 0x70], eax
// 008e1d9e  e8fdfeffff           call 0x8e1ca0
// 008e1da3  8bce                 mov ecx, esi
// 008e1da5  e88620f1ff           call 0x7f3e30
// 008e1daa  5e                   pop esi
// 008e1dab  c20c00               ret 0xc
// 008e1dae  2b466c               sub eax, dword ptr [esi + 0x6c]
// 008e1db1  8bce                 mov ecx, esi
// 008e1db3  50                   push eax
// 008e1db4  894670               mov dword ptr [esi + 0x70], eax
// 008e1db7  e8e4feffff           call 0x8e1ca0
// 008e1dbc  8bce                 mov ecx, esi
// 008e1dbe  e86d20f1ff           call 0x7f3e30
// 008e1dc3  5e                   pop esi
// 008e1dc4  c20c00               ret 0xc
// 008e1dc7  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e1dca  83f8ff               cmp eax, -1
// 008e1dcd  7408                 je 0x8e1dd7
// 008e1dcf  40                   inc eax
// 008e1dd0  3bc1                 cmp eax, ecx
// 008e1dd2  894670               mov dword ptr [esi + 0x70], eax
// 008e1dd5  7e07                 jle 0x8e1dde
// 008e1dd7  c7467000000000       mov dword ptr [esi + 0x70], 0
// 008e1dde  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008e1de1  51                   push ecx
// 008e1de2  8bce                 mov ecx, esi
// 008e1de4  e8b7feffff           call 0x8e1ca0
// 008e1de9  8bce                 mov ecx, esi
// 008e1deb  e84020f1ff           call 0x7f3e30
// 008e1df0  5e                   pop esi
// 008e1df1  c20c00               ret 0xc
// 008e1df4  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e1df7  83f8ff               cmp eax, -1
// 008e1dfa  0f844dffffff         je 0x8e1d4d
// 008e1e00  83c0ff               add eax, -1
// 008e1e03  894670               mov dword ptr [esi + 0x70], eax
// 008e1e06  0f8944ffffff         jns 0x8e1d50
// 008e1e0c  e93cffffff           jmp 0x8e1d4d
// 008e1e11  8b06                 mov eax, dword ptr [esi]
// 008e1e13  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008e1e19  6aff                 push -1
// 008e1e1b  8bce                 mov ecx, esi
// 008e1e1d  ffd2                 call edx
// 008e1e1f  5e                   pop esi
// 008e1e20  c20c00               ret 0xc
// 008e1e23  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008e1e26  8b06                 mov eax, dword ptr [esi]
// 008e1e28  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008e1e2e  51                   push ecx
// 008e1e2f  8bce                 mov ecx, esi
// 008e1e31  ffd2                 call edx
// 008e1e33  5e                   pop esi
// 008e1e34  c20c00               ret 0xc
// 008e1e37  90                   nop 
// 008e1e38  231e                 and ebx, dword ptr [esi]
// 008e1e3a  8e00                 mov es, word ptr [eax]
// 008e1e3c  111e                 adc dword ptr [esi], ebx
// 008e1e3e  8e00                 mov es, word ptr [eax]
// 008e1e40  f4                   hlt 
// 008e1e41  1d8e00661d           sbb eax, 0x1d66008e
// 008e1e46  8e00                 mov es, word ptr [eax]
// copied from an identical function in another client (function ?OnKeyDown@CXTColorSelectorCtrl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp