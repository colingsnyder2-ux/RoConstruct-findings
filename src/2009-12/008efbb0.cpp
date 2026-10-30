// roc 2009-12 008efbb0  unit: CXTPRibbonGroupPopupToolBar  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008efbb0
//
// 008efbb0  83ec08               sub esp, 8
// 008efbb3  53                   push ebx
// 008efbb4  8bd9                 mov ebx, ecx
// 008efbb6  8b8b7c020000         mov ecx, dword ptr [ebx + 0x27c]
// 008efbbc  85c9                 test ecx, ecx
// 008efbbe  0f84e2000000         je 0x8efca6
// 008efbc4  e83799ffff           call 0x8e9500
// 008efbc9  89442408             mov dword ptr [esp + 8], eax
// 008efbcd  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008efbd3  33c9                 xor ecx, ecx
// 008efbd5  394828               cmp dword ptr [eax + 0x28], ecx
// 008efbd8  894c2404             mov dword ptr [esp + 4], ecx
// 008efbdc  0f8ec4000000         jle 0x8efca6
// 008efbe2  55                   push ebp
// 008efbe3  56                   push esi
// 008efbe4  57                   push edi
// 008efbe5  eb04                 jmp 0x8efbeb
// 008efbe7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008efbeb  85c9                 test ecx, ecx
// 008efbed  7c0d                 jl 0x8efbfc
// 008efbef  3b4828               cmp ecx, dword ptr [eax + 0x28]
// 008efbf2  7d08                 jge 0x8efbfc
// 008efbf4  8b4024               mov eax, dword ptr [eax + 0x24]
// 008efbf7  8b3c88               mov edi, dword ptr [eax + ecx*4]
// 008efbfa  eb02                 jmp 0x8efbfe
// 008efbfc  33ff                 xor edi, edi
// 008efbfe  8bcf                 mov ecx, edi
// 008efc00  e85b99ffff           call 0x8e9560
// 008efc05  85c0                 test eax, eax
// 008efc07  7431                 je 0x8efc3a
// 008efc09  39bb7c020000         cmp dword ptr [ebx + 0x27c], edi
// 008efc0f  7529                 jne 0x8efc3a
// 008efc11  8bbb74020000         mov edi, dword ptr [ebx + 0x274]
// 008efc17  bd01000000           mov ebp, 1
// 008efc1c  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008efc1f  33f6                 xor esi, esi
// 008efc21  85c0                 test eax, eax
// 008efc23  7e32                 jle 0x8efc57
// 008efc25  85f6                 test esi, esi
// 008efc27  7c15                 jl 0x8efc3e
// 008efc29  3bf0                 cmp esi, eax
// 008efc2b  7d11                 jge 0x8efc3e
// 008efc2d  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 008efc30  7d79                 jge 0x8efcab
// 008efc32  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 008efc35  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 008efc38  eb06                 jmp 0x8efc40
// 008efc3a  33ed                 xor ebp, ebp
// 008efc3c  ebde                 jmp 0x8efc1c
// 008efc3e  33c0                 xor eax, eax
// 008efc40  55                   push ebp
// 008efc41  6a00                 push 0
// 008efc43  50                   push eax
// 008efc44  8d8b5c020000         lea ecx, [ebx + 0x25c]
// 008efc4a  e8318dfaff           call 0x898980
// 008efc4f  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008efc52  46                   inc esi
// 008efc53  3bf0                 cmp esi, eax
// 008efc55  7cce                 jl 0x8efc25
// 008efc57  8b4768               mov eax, dword ptr [edi + 0x68]
// 008efc5a  f680d000000001       test byte ptr [eax + 0xd0], 1
// 008efc61  750f                 jne 0x8efc72
// 008efc63  55                   push ebp
// 008efc64  6a00                 push 0
// 008efc66  50                   push eax
// 008efc67  8d8b5c020000         lea ecx, [ebx + 0x25c]
// 008efc6d  e80e8dfaff           call 0x898980
// 008efc72  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008efc75  55                   push ebp
// 008efc76  6870839a00           push 0x9a8370
// 008efc7b  52                   push edx
// 008efc7c  8d8b5c020000         lea ecx, [ebx + 0x25c]
// 008efc82  e8f98cfaff           call 0x898980
// 008efc87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008efc8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008efc8f  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008efc95  41                   inc ecx
// 008efc96  3b4828               cmp ecx, dword ptr [eax + 0x28]
// 008efc99  894c2410             mov dword ptr [esp + 0x10], ecx
// 008efc9d  0f8c44ffffff         jl 0x8efbe7
// 008efca3  5f                   pop edi
// 008efca4  5e                   pop esi
// 008efca5  5d                   pop ebp
// 008efca6  5b                   pop ebx
// 008efca7  83c408               add esp, 8
// 008efcaa  c3                   ret 
// 008efcab  e85c3ef0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?CreateKeyboardTips@CXTPRibbonGroupPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp