// roc 2008-06 0041d310  unit: VDHTMLWindowService::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041d310
//
// 0041d310  6aff                 push -1
// 0041d312  68bea47d00           push 0x7da4be
// 0041d317  64a100000000         mov eax, dword ptr fs:[0]
// 0041d31d  50                   push eax
// 0041d31e  64892500000000       mov dword ptr fs:[0], esp
// 0041d325  83ec08               sub esp, 8
// 0041d328  56                   push esi
// 0041d329  8bf1                 mov esi, ecx
// 0041d32b  c70600000000         mov dword ptr [esi], 0
// 0041d331  89742404             mov dword ptr [esp + 4], esi
// 0041d335  c7460400000000       mov dword ptr [esi + 4], 0
// 0041d33c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041d340  8b10                 mov edx, dword ptr [eax]
// 0041d342  6a00                 push 0
// 0041d344  83ec08               sub esp, 8
// 0041d347  8bcc                 mov ecx, esp
// 0041d349  8911                 mov dword ptr [ecx], edx
// 0041d34b  8b4004               mov eax, dword ptr [eax + 4]
// 0041d34e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0041d356  89642414             mov dword ptr [esp + 0x14], esp
// 0041d35a  894104               mov dword ptr [ecx + 4], eax
// 0041d35d  85c0                 test eax, eax
// 0041d35f  740c                 je 0x41d36d
// 0041d361  83c004               add eax, 4
// 0041d364  b901000000           mov ecx, 1
// 0041d369  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d36d  8d4e08               lea ecx, [esi + 8]
// 0041d370  e87bfcffff           call 0x41cff0
// 0041d375  6a28                 push 0x28
// 0041d377  c644241801           mov byte ptr [esp + 0x18], 1
// 0041d37c  e89f352800           call 0x6a0920
// 0041d381  83c404               add esp, 4
// 0041d384  8944241c             mov dword ptr [esp + 0x1c], eax
// 0041d388  c644241402           mov byte ptr [esp + 0x14], 2
// 0041d38d  85c0                 test eax, eax
// 0041d38f  7409                 je 0x41d39a
// 0041d391  8bc8                 mov ecx, eax
// 0041d393  e8a8d9ffff           call 0x41ad40
// 0041d398  eb02                 jmp 0x41d39c
// 0041d39a  33c0                 xor eax, eax
// 0041d39c  50                   push eax
// 0041d39d  8bce                 mov ecx, esi
// 0041d39f  c644241801           mov byte ptr [esp + 0x18], 1
// 0041d3a4  e847ddffff           call 0x41b0f0
// 0041d3a9  8bce                 mov ecx, esi
// 0041d3ab  e890841700           call 0x595840
// 0041d3b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041d3b4  8bc6                 mov eax, esi
// 0041d3b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d3bd  5e                   pop esi
// 0041d3be  83c414               add esp, 0x14
// 0041d3c1  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
