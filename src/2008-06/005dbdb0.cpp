// roc 2008-06 005dbdb0  unit: RBX::VPartInstance::?$FilteredSelection  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dbdb0
//
// 005dbdb0  6aff                 push -1
// 005dbdb2  68bea47d00           push 0x7da4be
// 005dbdb7  64a100000000         mov eax, dword ptr fs:[0]
// 005dbdbd  50                   push eax
// 005dbdbe  64892500000000       mov dword ptr fs:[0], esp
// 005dbdc5  83ec08               sub esp, 8
// 005dbdc8  56                   push esi
// 005dbdc9  8bf1                 mov esi, ecx
// 005dbdcb  c70600000000         mov dword ptr [esi], 0
// 005dbdd1  89742404             mov dword ptr [esp + 4], esi
// 005dbdd5  c7460400000000       mov dword ptr [esi + 4], 0
// 005dbddc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005dbde0  8b10                 mov edx, dword ptr [eax]
// 005dbde2  6a00                 push 0
// 005dbde4  83ec08               sub esp, 8
// 005dbde7  8bcc                 mov ecx, esp
// 005dbde9  8911                 mov dword ptr [ecx], edx
// 005dbdeb  8b4004               mov eax, dword ptr [eax + 4]
// 005dbdee  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dbdf6  89642414             mov dword ptr [esp + 0x14], esp
// 005dbdfa  894104               mov dword ptr [ecx + 4], eax
// 005dbdfd  85c0                 test eax, eax
// 005dbdff  740c                 je 0x5dbe0d
// 005dbe01  83c004               add eax, 4
// 005dbe04  b901000000           mov ecx, 1
// 005dbe09  f00fc108             lock xadd dword ptr [eax], ecx
// 005dbe0d  8d4e08               lea ecx, [esi + 8]
// 005dbe10  e8ebfeffff           call 0x5dbd00
// 005dbe15  6a28                 push 0x28
// 005dbe17  c644241801           mov byte ptr [esp + 0x18], 1
// 005dbe1c  e8ff4a0c00           call 0x6a0920
// 005dbe21  83c404               add esp, 4
// 005dbe24  8944241c             mov dword ptr [esp + 0x1c], eax
// 005dbe28  c644241402           mov byte ptr [esp + 0x14], 2
// 005dbe2d  85c0                 test eax, eax
// 005dbe2f  7409                 je 0x5dbe3a
// 005dbe31  8bc8                 mov ecx, eax
// 005dbe33  e808efe3ff           call 0x41ad40
// 005dbe38  eb02                 jmp 0x5dbe3c
// 005dbe3a  33c0                 xor eax, eax
// 005dbe3c  50                   push eax
// 005dbe3d  8bce                 mov ecx, esi
// 005dbe3f  c644241801           mov byte ptr [esp + 0x18], 1
// 005dbe44  e8a7f2e3ff           call 0x41b0f0
// 005dbe49  8bce                 mov ecx, esi
// 005dbe4b  e8f099fbff           call 0x595840
// 005dbe50  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dbe54  8bc6                 mov eax, esi
// 005dbe56  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbe5d  5e                   pop esi
// 005dbe5e  83c414               add esp, 0x14
// 005dbe61  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
