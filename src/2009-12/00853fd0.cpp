// roc 2009-12 00853fd0  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853fd0
//
// 00853fd0  6aff                 push -1
// 00853fd2  6828de9500           push 0x95de28
// 00853fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00853fdd  50                   push eax
// 00853fde  51                   push ecx
// 00853fdf  56                   push esi
// 00853fe0  a10052b600           mov eax, dword ptr [0xb65200]
// 00853fe5  33c4                 xor eax, esp
// 00853fe7  50                   push eax
// 00853fe8  8d44240c             lea eax, [esp + 0xc]
// 00853fec  64a300000000         mov dword ptr fs:[0], eax
// 00853ff2  8bf1                 mov esi, ecx
// 00853ff4  89742408             mov dword ptr [esp + 8], esi
// 00853ff8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00853ffb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00854003  85c0                 test eax, eax
// 00854005  7408                 je 0x85400f
// 00854007  8b08                 mov ecx, dword ptr [eax]
// 00854009  8b5108               mov edx, dword ptr [ecx + 8]
// 0085400c  50                   push eax
// 0085400d  ffd2                 call edx
// 0085400f  8bce                 mov ecx, esi
// 00854011  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00854019  e832bfffff           call 0x84ff50
// 0085401e  f644241c01           test byte ptr [esp + 0x1c], 1
// 00854023  7409                 je 0x85402e
// 00854025  56                   push esi
// 00854026  e82ff8f9ff           call 0x7f385a
// 0085402b  83c404               add esp, 4
// 0085402e  8bc6                 mov eax, esi
// 00854030  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00854034  64890d00000000       mov dword ptr fs:[0], ecx
// 0085403b  59                   pop ecx
// 0085403c  5e                   pop esi
// 0085403d  83c410               add esp, 0x10
// 00854040  c20400               ret 4
// copied from an identical function in another client (function ??_GCXMLEnumerator@CXTPPropExchangeXMLNode@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp