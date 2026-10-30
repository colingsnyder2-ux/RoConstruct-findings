// roc 2007-03 00721b60  unit: seg_00720000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721b60
//
// 00721b60  53                   push ebx
// 00721b61  56                   push esi
// 00721b62  8b742410             mov esi, dword ptr [esp + 0x10]
// 00721b66  57                   push edi
// 00721b67  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00721b6b  57                   push edi
// 00721b6c  8bd9                 mov ebx, ecx
// 00721b6e  e81dfeffff           call 0x721990
// 00721b73  57                   push edi
// 00721b74  8bcb                 mov ecx, ebx
// 00721b76  89460c               mov dword ptr [esi + 0xc], eax
// 00721b79  e8cc940100           call 0x73b04a
// 00721b7e  8930                 mov dword ptr [eax], esi
// 00721b80  8b460c               mov eax, dword ptr [esi + 0xc]
// 00721b83  85c0                 test eax, eax
// 00721b85  7520                 jne 0x721ba7
// 00721b87  6afc                 push -4
// 00721b89  57                   push edi
// 00721b8a  ff1504ed7700         call dword ptr [0x77ed04]
// 00721b90  68c01a7200           push 0x721ac0
// 00721b95  6afc                 push -4
// 00721b97  57                   push edi
// 00721b98  894608               mov dword ptr [esi + 8], eax
// 00721b9b  ff15e8ec7700         call dword ptr [0x77ece8]
// 00721ba1  5f                   pop edi
// 00721ba2  5e                   pop esi
// 00721ba3  5b                   pop ebx
// 00721ba4  c20800               ret 8
// 00721ba7  8b4008               mov eax, dword ptr [eax + 8]
// 00721baa  5f                   pop edi
// 00721bab  894608               mov dword ptr [esi + 8], eax
// 00721bae  5e                   pop esi
// 00721baf  5b                   pop ebx
// 00721bb0  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp