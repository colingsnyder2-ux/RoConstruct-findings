// roc 2009-12 007f7b10  unit: IIHH::?$CMap  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7b10
//
// 007f7b10  56                   push esi
// 007f7b11  8b742408             mov esi, dword ptr [esp + 8]
// 007f7b15  57                   push edi
// 007f7b16  8bf9                 mov edi, ecx
// 007f7b18  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 007f7b1b  33c0                 xor eax, eax
// 007f7b1d  85c9                 test ecx, ecx
// 007f7b1f  7e19                 jle 0x7f7b3a
// 007f7b21  85c0                 test eax, eax
// 007f7b23  0f8c83000000         jl 0x7f7bac
// 007f7b29  3bc1                 cmp eax, ecx
// 007f7b2b  7d7f                 jge 0x7f7bac
// 007f7b2d  8b5760               mov edx, dword ptr [edi + 0x60]
// 007f7b30  393482               cmp dword ptr [edx + eax*4], esi
// 007f7b33  7472                 je 0x7f7ba7
// 007f7b35  40                   inc eax
// 007f7b36  3bc1                 cmp eax, ecx
// 007f7b38  7ce7                 jl 0x7f7b21
// 007f7b3a  8b4764               mov eax, dword ptr [edi + 0x64]
// 007f7b3d  8d4f5c               lea ecx, [edi + 0x5c]
// 007f7b40  56                   push esi
// 007f7b41  50                   push eax
// 007f7b42  e829310700           call 0x86ac70
// 007f7b47  83c8ff               or eax, 0xffffffff
// 007f7b4a  89869c000000         mov dword ptr [esi + 0x9c], eax
// 007f7b50  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 007f7b56  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007f7b59  898e84000000         mov dword ptr [esi + 0x84], ecx
// 007f7b5f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007f7b65  ff1590d69800         call dword ptr [0x98d690]
// 007f7b6b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007f7b71  ff1590d69800         call dword ptr [0x98d690]
// 007f7b77  8d8eec000000         lea ecx, [esi + 0xec]
// 007f7b7d  ff1590d69800         call dword ptr [0x98d690]
// 007f7b83  8d8e08010000         lea ecx, [esi + 0x108]
// 007f7b89  ff1590d69800         call dword ptr [0x98d690]
// 007f7b8f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 007f7b95  ff1590d69800         call dword ptr [0x98d690]
// 007f7b9b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f7ba1  ff1590d69800         call dword ptr [0x98d690]
// 007f7ba7  5f                   pop edi
// 007f7ba8  5e                   pop esi
// 007f7ba9  c20400               ret 4
// 007f7bac  e85bbfffff           call 0x7f3b0c
// copied from an identical function in another client (function ?AddControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp