// roc 2009-06 00818db0  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818db0
//
// 00818db0  53                   push ebx
// 00818db1  56                   push esi
// 00818db2  8b742410             mov esi, dword ptr [esp + 0x10]
// 00818db6  57                   push edi
// 00818db7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00818dbb  57                   push edi
// 00818dbc  8bd9                 mov ebx, ecx
// 00818dbe  e80dfeffff           call 0x818bd0
// 00818dc3  57                   push edi
// 00818dc4  8bcb                 mov ecx, ebx
// 00818dc6  89460c               mov dword ptr [esi + 0xc], eax
// 00818dc9  e820370300           call 0x84c4ee
// 00818dce  8930                 mov dword ptr [eax], esi
// 00818dd0  8b460c               mov eax, dword ptr [esi + 0xc]
// 00818dd3  85c0                 test eax, eax
// 00818dd5  7520                 jne 0x818df7
// 00818dd7  6afc                 push -4
// 00818dd9  57                   push edi
// 00818dda  ff1558ed8900         call dword ptr [0x89ed58]
// 00818de0  68008d8100           push 0x818d00
// 00818de5  6afc                 push -4
// 00818de7  57                   push edi
// 00818de8  894608               mov dword ptr [esi + 8], eax
// 00818deb  ff1534ed8900         call dword ptr [0x89ed34]
// 00818df1  5f                   pop edi
// 00818df2  5e                   pop esi
// 00818df3  5b                   pop ebx
// 00818df4  c20800               ret 8
// 00818df7  8b4008               mov eax, dword ptr [eax + 8]
// 00818dfa  5f                   pop edi
// 00818dfb  894608               mov dword ptr [esi + 8], eax
// 00818dfe  5e                   pop esi
// 00818dff  5b                   pop ebx
// 00818e00  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp