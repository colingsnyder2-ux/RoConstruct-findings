// roc 2011-06 008e7df0  unit: CXTColorPageStandard  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7df0
//
// 008e7df0  6aff                 push -1
// 008e7df2  6876dfa000           push 0xa0df76
// 008e7df7  64a100000000         mov eax, dword ptr fs:[0]
// 008e7dfd  50                   push eax
// 008e7dfe  51                   push ecx
// 008e7dff  56                   push esi
// 008e7e00  a12058c900           mov eax, dword ptr [0xc95820]
// 008e7e05  33c4                 xor eax, esp
// 008e7e07  50                   push eax
// 008e7e08  8d44240c             lea eax, [esp + 0xc]
// 008e7e0c  64a300000000         mov dword ptr fs:[0], eax
// 008e7e12  8bf1                 mov esi, ecx
// 008e7e14  89742408             mov dword ptr [esp + 8], esi
// 008e7e18  6a30                 push 0x30
// 008e7e1a  6a00                 push 0
// 008e7e1c  6862240000           push 0x2462
// 008e7e21  e88a4f0e00           call 0x9ccdb0
// 008e7e26  8d8e88000000         lea ecx, [esi + 0x88]
// 008e7e2c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e7e34  c706b48ead00         mov dword ptr [esi], 0xad8eb4
// 008e7e3a  e8e1f9ffff           call 0x8e7820
// 008e7e3f  8bce                 mov ecx, esi
// 008e7e41  c644241401           mov byte ptr [esp + 0x14], 1
// 008e7e46  e8c74d0e00           call 0x9ccc12
// 008e7e4b  83c004               add eax, 4
// 008e7e4e  8320df               and dword ptr [eax], 0xffffffdf
// 008e7e51  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e7e55  898618010000         mov dword ptr [esi + 0x118], eax
// 008e7e5b  8bc6                 mov eax, esi
// 008e7e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e7e61  64890d00000000       mov dword ptr fs:[0], ecx
// 008e7e68  59                   pop ecx
// 008e7e69  5e                   pop esi
// 008e7e6a  83c410               add esp, 0x10
// 008e7e6d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageStandard@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp