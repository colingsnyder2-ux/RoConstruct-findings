// from server: 100% by auto
// roc 2007-08 0069cc20  unit: CXTPPropertyGridView  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cc20
//
// 0069cc20  83ec1c               sub esp, 0x1c
// 0069cc23  57                   push edi
// 0069cc24  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0069cc28  85ff                 test edi, edi
// 0069cc2a  894c2404             mov dword ptr [esp + 4], ecx
// 0069cc2e  750c                 jne 0x69cc3c
// 0069cc30  b857000780           mov eax, 0x80070057
// 0069cc35  5f                   pop edi
// 0069cc36  83c41c               add esp, 0x1c
// 0069cc39  c20c00               ret 0xc
// 0069cc3c  56                   push esi
// 0069cc3d  8d71ac               lea esi, [ecx - 0x54]
// 0069cc40  85f6                 test esi, esi
// 0069cc42  66c7070000           mov word ptr [edi], 0
// 0069cc47  7406                 je 0x69cc4f
// 0069cc49  837e2000             cmp dword ptr [esi + 0x20], 0
// 0069cc4d  750d                 jne 0x69cc5c
// 0069cc4f  5e                   pop esi
// 0069cc50  b801000000           mov eax, 1
// 0069cc55  5f                   pop edi
// 0069cc56  83c41c               add esp, 0x1c
// 0069cc59  c20c00               ret 0xc
// 0069cc5c  53                   push ebx
// 0069cc5d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0069cc61  55                   push ebp
// 0069cc62  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0069cc66  56                   push esi
// 0069cc67  8d4c2420             lea ecx, [esp + 0x20]
// 0069cc6b  e83033feff           call 0x67ffa0
// 0069cc70  55                   push ebp
// 0069cc71  53                   push ebx
// 0069cc72  50                   push eax
// 0069cc73  ff1594ed7700         call dword ptr [0x77ed94]
// 0069cc79  85c0                 test eax, eax
// 0069cc7b  750f                 jne 0x69cc8c
// 0069cc7d  5d                   pop ebp
// 0069cc7e  5b                   pop ebx
// 0069cc7f  5e                   pop esi
// 0069cc80  b801000000           mov eax, 1
// 0069cc85  5f                   pop edi
// 0069cc86  83c41c               add esp, 0x1c
// 0069cc89  c20c00               ret 0xc
// 0069cc8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069cc90  8d442414             lea eax, [esp + 0x14]
// 0069cc94  66c7070300           mov word ptr [edi], 3
// 0069cc99  c7470800000000       mov dword ptr [edi + 8], 0
// 0069cca0  8b51cc               mov edx, dword ptr [ecx - 0x34]
// 0069cca3  50                   push eax
// 0069cca4  52                   push edx
// 0069cca5  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0069cca9  896c2420             mov dword ptr [esp + 0x20], ebp
// 0069ccad  ff1550ec7700         call dword ptr [0x77ec50]
// 0069ccb3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0069ccb7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069ccbb  50                   push eax
// 0069ccbc  51                   push ecx
// 0069ccbd  8bce                 mov ecx, esi
// 0069ccbf  e8dcefffff           call 0x69bca0
// 0069ccc4  85c0                 test eax, eax
// 0069ccc6  7411                 je 0x69ccd9
// 0069ccc8  6a01                 push 1
// 0069ccca  8bc8                 mov ecx, eax
// 0069cccc  66c7070900           mov word ptr [edi], 9
// 0069ccd1  e8eeb60900           call 0x7383c4
// 0069ccd6  894708               mov dword ptr [edi + 8], eax
// 0069ccd9  5d                   pop ebp
// 0069ccda  5b                   pop ebx
// 0069ccdb  5e                   pop esi
// 0069ccdc  33c0                 xor eax, eax
// 0069ccde  5f                   pop edi
// 0069ccdf  83c41c               add esp, 0x1c
// 0069cce2  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleHitTest@CXTPPropertyGridView@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
