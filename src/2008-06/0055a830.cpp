// roc 2008-06 0055a830  unit: RBX::VInstance::?$NonFactoryProduct  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a830
//
// 0055a830  6aff                 push -1
// 0055a832  68bea47d00           push 0x7da4be
// 0055a837  64a100000000         mov eax, dword ptr fs:[0]
// 0055a83d  50                   push eax
// 0055a83e  64892500000000       mov dword ptr fs:[0], esp
// 0055a845  83ec08               sub esp, 8
// 0055a848  56                   push esi
// 0055a849  8bf1                 mov esi, ecx
// 0055a84b  c70600000000         mov dword ptr [esi], 0
// 0055a851  89742404             mov dword ptr [esp + 4], esi
// 0055a855  c7460400000000       mov dword ptr [esi + 4], 0
// 0055a85c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055a860  8b10                 mov edx, dword ptr [eax]
// 0055a862  6a00                 push 0
// 0055a864  83ec08               sub esp, 8
// 0055a867  8bcc                 mov ecx, esp
// 0055a869  8911                 mov dword ptr [ecx], edx
// 0055a86b  8b4004               mov eax, dword ptr [eax + 4]
// 0055a86e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0055a876  89642414             mov dword ptr [esp + 0x14], esp
// 0055a87a  894104               mov dword ptr [ecx + 4], eax
// 0055a87d  85c0                 test eax, eax
// 0055a87f  740c                 je 0x55a88d
// 0055a881  83c004               add eax, 4
// 0055a884  b901000000           mov ecx, 1
// 0055a889  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a88d  8d4e08               lea ecx, [esi + 8]
// 0055a890  e8ebfeffff           call 0x55a780
// 0055a895  6a28                 push 0x28
// 0055a897  c644241801           mov byte ptr [esp + 0x18], 1
// 0055a89c  e87f601400           call 0x6a0920
// 0055a8a1  83c404               add esp, 4
// 0055a8a4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0055a8a8  c644241402           mov byte ptr [esp + 0x14], 2
// 0055a8ad  85c0                 test eax, eax
// 0055a8af  7409                 je 0x55a8ba
// 0055a8b1  8bc8                 mov ecx, eax
// 0055a8b3  e88804ecff           call 0x41ad40
// 0055a8b8  eb02                 jmp 0x55a8bc
// 0055a8ba  33c0                 xor eax, eax
// 0055a8bc  50                   push eax
// 0055a8bd  8bce                 mov ecx, esi
// 0055a8bf  c644241801           mov byte ptr [esp + 0x18], 1
// 0055a8c4  e82708ecff           call 0x41b0f0
// 0055a8c9  8bce                 mov ecx, esi
// 0055a8cb  e870af0300           call 0x595840
// 0055a8d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055a8d4  8bc6                 mov eax, esi
// 0055a8d6  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a8dd  5e                   pop esi
// 0055a8de  83c414               add esp, 0x14
// 0055a8e1  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
