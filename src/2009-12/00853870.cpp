// roc 2009-12 00853870  unit: CXTPPropExchangeXMLNode  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853870
//
// 00853870  6aff                 push -1
// 00853872  686edd9500           push 0x95dd6e
// 00853877  64a100000000         mov eax, dword ptr fs:[0]
// 0085387d  50                   push eax
// 0085387e  51                   push ecx
// 0085387f  56                   push esi
// 00853880  a10052b600           mov eax, dword ptr [0xb65200]
// 00853885  33c4                 xor eax, esp
// 00853887  50                   push eax
// 00853888  8d44240c             lea eax, [esp + 0xc]
// 0085388c  64a300000000         mov dword ptr fs:[0], eax
// 00853892  8bf1                 mov esi, ecx
// 00853894  89742408             mov dword ptr [esp + 8], esi
// 00853898  8d4e54               lea ecx, [esi + 0x54]
// 0085389b  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008538a3  ff15c0de9800         call dword ptr [0x98dec0]
// 008538a9  8d4e50               lea ecx, [esi + 0x50]
// 008538ac  ff15c0de9800         call dword ptr [0x98dec0]
// 008538b2  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008538b5  85c0                 test eax, eax
// 008538b7  7408                 je 0x8538c1
// 008538b9  8b08                 mov ecx, dword ptr [eax]
// 008538bb  8b5108               mov edx, dword ptr [ecx + 8]
// 008538be  50                   push eax
// 008538bf  ffd2                 call edx
// 008538c1  8b4648               mov eax, dword ptr [esi + 0x48]
// 008538c4  c644241401           mov byte ptr [esp + 0x14], 1
// 008538c9  85c0                 test eax, eax
// 008538cb  7408                 je 0x8538d5
// 008538cd  8b08                 mov ecx, dword ptr [eax]
// 008538cf  8b5108               mov edx, dword ptr [ecx + 8]
// 008538d2  50                   push eax
// 008538d3  ffd2                 call edx
// 008538d5  8b4644               mov eax, dword ptr [esi + 0x44]
// 008538d8  c644241400           mov byte ptr [esp + 0x14], 0
// 008538dd  85c0                 test eax, eax
// 008538df  7408                 je 0x8538e9
// 008538e1  8b08                 mov ecx, dword ptr [eax]
// 008538e3  8b5108               mov edx, dword ptr [ecx + 8]
// 008538e6  50                   push eax
// 008538e7  ffd2                 call edx
// 008538e9  8bce                 mov ecx, esi
// 008538eb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008538f3  e878c7ffff           call 0x850070
// 008538f8  f644241c01           test byte ptr [esp + 0x1c], 1
// 008538fd  7409                 je 0x853908
// 008538ff  56                   push esi
// 00853900  e855fff9ff           call 0x7f385a
// 00853905  83c404               add esp, 4
// 00853908  8bc6                 mov eax, esi
// 0085390a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085390e  64890d00000000       mov dword ptr fs:[0], ecx
// 00853915  59                   pop ecx
// 00853916  5e                   pop esi
// 00853917  83c410               add esp, 0x10
// 0085391a  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPPropExchangeXMLNode@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp