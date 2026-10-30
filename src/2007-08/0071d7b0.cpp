// from server: 100% by auto
// roc 2007-08 0071d7b0  unit: CXTPScrollBase  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d7b0
//
// 0071d7b0  51                   push ecx
// 0071d7b1  56                   push esi
// 0071d7b2  8b7160               mov esi, dword ptr [ecx + 0x60]
// 0071d7b5  85f6                 test esi, esi
// 0071d7b7  894c2404             mov dword ptr [esp + 4], ecx
// 0071d7bb  0f8485000000         je 0x71d846
// 0071d7c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071d7c5  c1e808               shr eax, 8
// 0071d7c8  3c02                 cmp al, 2
// 0071d7ca  57                   push edi
// 0071d7cb  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0071d7ce  7575                 jne 0x71d845
// 0071d7d0  85ff                 test edi, edi
// 0071d7d2  7471                 je 0x71d845
// 0071d7d4  53                   push ebx
// 0071d7d5  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0071d7d9  55                   push ebp
// 0071d7da  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0071d7de  53                   push ebx
// 0071d7df  55                   push ebp
// 0071d7e0  8d4e04               lea ecx, [esi + 4]
// 0071d7e3  51                   push ecx
// 0071d7e4  ff1594ed7700         call dword ptr [0x77ed94]
// 0071d7ea  85c0                 test eax, eax
// 0071d7ec  7505                 jne 0x71d7f3
// 0071d7ee  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0071d7f1  eb24                 jmp 0x71d817
// 0071d7f3  8b5634               mov edx, dword ptr [esi + 0x34]
// 0071d7f6  837a5800             cmp dword ptr [edx + 0x58], 0
// 0071d7fa  8bcb                 mov ecx, ebx
// 0071d7fc  7502                 jne 0x71d800
// 0071d7fe  8bcd                 mov ecx, ebp
// 0071d800  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071d803  03c1                 add eax, ecx
// 0071d805  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0071d808  3bc1                 cmp eax, ecx
// 0071d80a  7c09                 jl 0x71d815
// 0071d80c  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0071d80f  03ca                 add ecx, edx
// 0071d811  3bc1                 cmp eax, ecx
// 0071d813  7c02                 jl 0x71d817
// 0071d815  8bc1                 mov eax, ecx
// 0071d817  8b742410             mov esi, dword ptr [esp + 0x10]
// 0071d81b  50                   push eax
// 0071d81c  8bce                 mov ecx, esi
// 0071d81e  e8fdfeffff           call 0x71d720
// 0071d823  817c241802020000     cmp dword ptr [esp + 0x18], 0x202
// 0071d82b  5d                   pop ebp
// 0071d82c  5b                   pop ebx
// 0071d82d  740d                 je 0x71d83c
// 0071d82f  6a01                 push 1
// 0071d831  ff154cec7700         call dword ptr [0x77ec4c]
// 0071d837  6685c0               test ax, ax
// 0071d83a  7c09                 jl 0x71d845
// 0071d83c  6a00                 push 0
// 0071d83e  8bce                 mov ecx, esi
// 0071d840  e8dbfdffff           call 0x71d620
// 0071d845  5f                   pop edi
// 0071d846  5e                   pop esi
// 0071d847  59                   pop ecx
// 0071d848  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
