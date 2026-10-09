// roc 2008-06 0057acb0  unit: RBX::ServiceProvider  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057acb0
//
// 0057acb0  6aff                 push -1
// 0057acb2  68bea47d00           push 0x7da4be
// 0057acb7  64a100000000         mov eax, dword ptr fs:[0]
// 0057acbd  50                   push eax
// 0057acbe  64892500000000       mov dword ptr fs:[0], esp
// 0057acc5  83ec08               sub esp, 8
// 0057acc8  56                   push esi
// 0057acc9  8bf1                 mov esi, ecx
// 0057accb  c70600000000         mov dword ptr [esi], 0
// 0057acd1  89742404             mov dword ptr [esp + 4], esi
// 0057acd5  c7460400000000       mov dword ptr [esi + 4], 0
// 0057acdc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057ace0  8b10                 mov edx, dword ptr [eax]
// 0057ace2  6a00                 push 0
// 0057ace4  83ec08               sub esp, 8
// 0057ace7  8bcc                 mov ecx, esp
// 0057ace9  8911                 mov dword ptr [ecx], edx
// 0057aceb  8b4004               mov eax, dword ptr [eax + 4]
// 0057acee  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057acf6  89642414             mov dword ptr [esp + 0x14], esp
// 0057acfa  894104               mov dword ptr [ecx + 4], eax
// 0057acfd  85c0                 test eax, eax
// 0057acff  740c                 je 0x57ad0d
// 0057ad01  83c004               add eax, 4
// 0057ad04  b901000000           mov ecx, 1
// 0057ad09  f00fc108             lock xadd dword ptr [eax], ecx
// 0057ad0d  8d4e08               lea ecx, [esi + 8]
// 0057ad10  e8ebfbffff           call 0x57a900
// 0057ad15  6a28                 push 0x28
// 0057ad17  c644241801           mov byte ptr [esp + 0x18], 1
// 0057ad1c  e8ff5b1200           call 0x6a0920
// 0057ad21  83c404               add esp, 4
// 0057ad24  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057ad28  c644241402           mov byte ptr [esp + 0x14], 2
// 0057ad2d  85c0                 test eax, eax
// 0057ad2f  7409                 je 0x57ad3a
// 0057ad31  8bc8                 mov ecx, eax
// 0057ad33  e80800eaff           call 0x41ad40
// 0057ad38  eb02                 jmp 0x57ad3c
// 0057ad3a  33c0                 xor eax, eax
// 0057ad3c  50                   push eax
// 0057ad3d  8bce                 mov ecx, esi
// 0057ad3f  c644241801           mov byte ptr [esp + 0x18], 1
// 0057ad44  e8a703eaff           call 0x41b0f0
// 0057ad49  8bce                 mov ecx, esi
// 0057ad4b  e8f0aa0100           call 0x595840
// 0057ad50  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057ad54  8bc6                 mov eax, esi
// 0057ad56  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ad5d  5e                   pop esi
// 0057ad5e  83c414               add esp, 0x14
// 0057ad61  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
