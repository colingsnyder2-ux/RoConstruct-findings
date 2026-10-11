// roc 2007-08 005f3480  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3480
//
// 005f3480  6aff                 push -1
// 005f3482  6830057500           push 0x750530
// 005f3487  64a100000000         mov eax, dword ptr fs:[0]
// 005f348d  50                   push eax
// 005f348e  64892500000000       mov dword ptr fs:[0], esp
// 005f3495  83ec14               sub esp, 0x14
// 005f3498  56                   push esi
// 005f3499  57                   push edi
// 005f349a  8bf9                 mov edi, ecx
// 005f349c  c744240800000000     mov dword ptr [esp + 8], 0
// 005f34a4  8d442408             lea eax, [esp + 8]
// 005f34a8  50                   push eax
// 005f34a9  6a01                 push 1
// 005f34ab  8d4c2414             lea ecx, [esp + 0x14]
// 005f34af  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005f34b7  e8544ae2ff           call 0x417f10
// 005f34bc  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f34c0  85f6                 test esi, esi
// 005f34c2  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005f34ca  740b                 je 0x5f34d7
// 005f34cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f34d0  2bce                 sub ecx, esi
// 005f34d2  c1f902               sar ecx, 2
// 005f34d5  750a                 jne 0x5f34e1
// 005f34d7  ff15d8e67700         call dword ptr [0x77e6d8]
// 005f34dd  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f34e1  6a08                 push 8
// 005f34e3  e80eca0300           call 0x62fef6
// 005f34e8  83c404               add esp, 4
// 005f34eb  85c0                 test eax, eax
// 005f34ed  740f                 je 0x5f34fe
// 005f34ef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f34f3  c7007c577a00         mov dword ptr [eax], 0x7a577c
// 005f34f9  895004               mov dword ptr [eax + 4], edx
// 005f34fc  eb02                 jmp 0x5f3500
// 005f34fe  33c0                 xor eax, eax
// 005f3500  8b0e                 mov ecx, dword ptr [esi]
// 005f3502  85c9                 test ecx, ecx
// 005f3504  8906                 mov dword ptr [esi], eax
// 005f3506  7408                 je 0x5f3510
// 005f3508  8b01                 mov eax, dword ptr [ecx]
// 005f350a  8b10                 mov edx, dword ptr [eax]
// 005f350c  6a01                 push 1
// 005f350e  ffd2                 call edx
// 005f3510  8b0f                 mov ecx, dword ptr [edi]
// 005f3512  8b01                 mov eax, dword ptr [ecx]
// 005f3514  8b4004               mov eax, dword ptr [eax + 4]
// 005f3517  8d54240c             lea edx, [esp + 0xc]
// 005f351b  52                   push edx
// 005f351c  ffd0                 call eax
// 005f351e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f3522  85f6                 test esi, esi
// 005f3524  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005f352c  742c                 je 0x5f355a
// 005f352e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f3532  3bf0                 cmp esi, eax
// 005f3534  8bf8                 mov edi, eax
// 005f3536  7419                 je 0x5f3551
// 005f3538  8b0e                 mov ecx, dword ptr [esi]
// 005f353a  85c9                 test ecx, ecx
// 005f353c  7408                 je 0x5f3546
// 005f353e  8b11                 mov edx, dword ptr [ecx]
// 005f3540  8b02                 mov eax, dword ptr [edx]
// 005f3542  6a01                 push 1
// 005f3544  ffd0                 call eax
// 005f3546  83c604               add esi, 4
// 005f3549  3bf7                 cmp esi, edi
// 005f354b  75eb                 jne 0x5f3538
// 005f354d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f3551  56                   push esi
// 005f3552  e80bc70300           call 0x62fc62
// 005f3557  83c404               add esp, 4
// 005f355a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f355e  5f                   pop edi
// 005f355f  5e                   pop esi
// 005f3560  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3567  83c420               add esp, 0x20
// 005f356a  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
