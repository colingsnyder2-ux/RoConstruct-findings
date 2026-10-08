// roc 2008-06 004b1940  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1940
//
// 004b1940  6aff                 push -1
// 004b1942  6898987d00           push 0x7d9898
// 004b1947  64a100000000         mov eax, dword ptr fs:[0]
// 004b194d  50                   push eax
// 004b194e  64892500000000       mov dword ptr fs:[0], esp
// 004b1955  51                   push ecx
// 004b1956  56                   push esi
// 004b1957  8bf1                 mov esi, ecx
// 004b1959  89742404             mov dword ptr [esp + 4], esi
// 004b195d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b1961  33d2                 xor edx, edx
// 004b1963  c7067c4b8200         mov dword ptr [esi], 0x824b7c
// 004b1969  895608               mov dword ptr [esi + 8], edx
// 004b196c  8b08                 mov ecx, dword ptr [eax]
// 004b196e  89542410             mov dword ptr [esp + 0x10], edx
// 004b1972  3bca                 cmp ecx, edx
// 004b1974  7415                 je 0x4b198b
// 004b1976  52                   push edx
// 004b1977  894e08               mov dword ptr [esi + 8], ecx
// 004b197a  8b08                 mov ecx, dword ptr [eax]
// 004b197c  8d5610               lea edx, [esi + 0x10]
// 004b197f  83c008               add eax, 8
// 004b1982  52                   push edx
// 004b1983  50                   push eax
// 004b1984  8b01                 mov eax, dword ptr [ecx]
// 004b1986  ffd0                 call eax
// 004b1988  83c40c               add esp, 0xc
// 004b198b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b198f  8bc6                 mov eax, esi
// 004b1991  5e                   pop esi
// 004b1992  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1999  83c410               add esp, 0x10
// 004b199c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
