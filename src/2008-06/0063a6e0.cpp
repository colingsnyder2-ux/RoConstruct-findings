// roc 2008-06 0063a6e0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a6e0
//
// 0063a6e0  6aff                 push -1
// 0063a6e2  68bea47d00           push 0x7da4be
// 0063a6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a6ed  50                   push eax
// 0063a6ee  64892500000000       mov dword ptr fs:[0], esp
// 0063a6f5  83ec08               sub esp, 8
// 0063a6f8  56                   push esi
// 0063a6f9  8bf1                 mov esi, ecx
// 0063a6fb  c70600000000         mov dword ptr [esi], 0
// 0063a701  89742404             mov dword ptr [esp + 4], esi
// 0063a705  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a70c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a710  8b10                 mov edx, dword ptr [eax]
// 0063a712  6a00                 push 0
// 0063a714  83ec08               sub esp, 8
// 0063a717  8bcc                 mov ecx, esp
// 0063a719  8911                 mov dword ptr [ecx], edx
// 0063a71b  8b4004               mov eax, dword ptr [eax + 4]
// 0063a71e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a726  89642414             mov dword ptr [esp + 0x14], esp
// 0063a72a  894104               mov dword ptr [ecx + 4], eax
// 0063a72d  85c0                 test eax, eax
// 0063a72f  740c                 je 0x63a73d
// 0063a731  83c004               add eax, 4
// 0063a734  b901000000           mov ecx, 1
// 0063a739  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a73d  8d4e08               lea ecx, [esi + 8]
// 0063a740  e8cbf5ffff           call 0x639d10
// 0063a745  6a28                 push 0x28
// 0063a747  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a74c  e8cf610600           call 0x6a0920
// 0063a751  83c404               add esp, 4
// 0063a754  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a758  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a75d  85c0                 test eax, eax
// 0063a75f  7409                 je 0x63a76a
// 0063a761  8bc8                 mov ecx, eax
// 0063a763  e8d805deff           call 0x41ad40
// 0063a768  eb02                 jmp 0x63a76c
// 0063a76a  33c0                 xor eax, eax
// 0063a76c  50                   push eax
// 0063a76d  8bce                 mov ecx, esi
// 0063a76f  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a774  e87709deff           call 0x41b0f0
// 0063a779  8bce                 mov ecx, esi
// 0063a77b  e8c0b0f5ff           call 0x595840
// 0063a780  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a784  8bc6                 mov eax, esi
// 0063a786  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a78d  5e                   pop esi
// 0063a78e  83c414               add esp, 0x14
// 0063a791  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
