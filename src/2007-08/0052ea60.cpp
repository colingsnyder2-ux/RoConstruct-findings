// roc 2007-08 0052ea60  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ea60
//
// 0052ea60  6aff                 push -1
// 0052ea62  6830057500           push 0x750530
// 0052ea67  64a100000000         mov eax, dword ptr fs:[0]
// 0052ea6d  50                   push eax
// 0052ea6e  64892500000000       mov dword ptr fs:[0], esp
// 0052ea75  83ec14               sub esp, 0x14
// 0052ea78  55                   push ebp
// 0052ea79  56                   push esi
// 0052ea7a  57                   push edi
// 0052ea7b  8be9                 mov ebp, ecx
// 0052ea7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052ea85  8d44240c             lea eax, [esp + 0xc]
// 0052ea89  50                   push eax
// 0052ea8a  6a02                 push 2
// 0052ea8c  8d4c2418             lea ecx, [esp + 0x18]
// 0052ea90  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0052ea98  e87394eeff           call 0x417f10
// 0052ea9d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052eaa1  85c0                 test eax, eax
// 0052eaa3  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 0052eaa9  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0052eab1  740b                 je 0x52eabe
// 0052eab3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052eab7  2bc8                 sub ecx, eax
// 0052eab9  c1f902               sar ecx, 2
// 0052eabc  7506                 jne 0x52eac4
// 0052eabe  ffd7                 call edi
// 0052eac0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052eac4  6a08                 push 8
// 0052eac6  8bf0                 mov esi, eax
// 0052eac8  e829141000           call 0x62fef6
// 0052eacd  83c404               add esp, 4
// 0052ead0  85c0                 test eax, eax
// 0052ead2  740f                 je 0x52eae3
// 0052ead4  d9442430             fld dword ptr [esp + 0x30]
// 0052ead8  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 0052eade  d95804               fstp dword ptr [eax + 4]
// 0052eae1  eb02                 jmp 0x52eae5
// 0052eae3  33c0                 xor eax, eax
// 0052eae5  8b0e                 mov ecx, dword ptr [esi]
// 0052eae7  85c9                 test ecx, ecx
// 0052eae9  8906                 mov dword ptr [esi], eax
// 0052eaeb  7408                 je 0x52eaf5
// 0052eaed  8b11                 mov edx, dword ptr [ecx]
// 0052eaef  8b02                 mov eax, dword ptr [edx]
// 0052eaf1  6a01                 push 1
// 0052eaf3  ffd0                 call eax
// 0052eaf5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052eaf9  85c9                 test ecx, ecx
// 0052eafb  740e                 je 0x52eb0b
// 0052eafd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052eb01  2bc1                 sub eax, ecx
// 0052eb03  c1f802               sar eax, 2
// 0052eb06  83f801               cmp eax, 1
// 0052eb09  7706                 ja 0x52eb11
// 0052eb0b  ffd7                 call edi
// 0052eb0d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052eb11  6a08                 push 8
// 0052eb13  8d7104               lea esi, [ecx + 4]
// 0052eb16  e8db131000           call 0x62fef6
// 0052eb1b  83c404               add esp, 4
// 0052eb1e  85c0                 test eax, eax
// 0052eb20  740f                 je 0x52eb31
// 0052eb22  d9442434             fld dword ptr [esp + 0x34]
// 0052eb26  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 0052eb2c  d95804               fstp dword ptr [eax + 4]
// 0052eb2f  eb02                 jmp 0x52eb33
// 0052eb31  33c0                 xor eax, eax
// 0052eb33  8b0e                 mov ecx, dword ptr [esi]
// 0052eb35  85c9                 test ecx, ecx
// 0052eb37  8906                 mov dword ptr [esi], eax
// 0052eb39  7408                 je 0x52eb43
// 0052eb3b  8b11                 mov edx, dword ptr [ecx]
// 0052eb3d  8b02                 mov eax, dword ptr [edx]
// 0052eb3f  6a01                 push 1
// 0052eb41  ffd0                 call eax
// 0052eb43  8b4d00               mov ecx, dword ptr [ebp]
// 0052eb46  8b11                 mov edx, dword ptr [ecx]
// 0052eb48  8b5204               mov edx, dword ptr [edx + 4]
// 0052eb4b  8d442410             lea eax, [esp + 0x10]
// 0052eb4f  50                   push eax
// 0052eb50  ffd2                 call edx
// 0052eb52  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052eb56  85f6                 test esi, esi
// 0052eb58  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0052eb60  7430                 je 0x52eb92
// 0052eb62  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052eb66  3bf0                 cmp esi, eax
// 0052eb68  8bf8                 mov edi, eax
// 0052eb6a  741d                 je 0x52eb89
// 0052eb6c  8d642400             lea esp, [esp]
// 0052eb70  8b0e                 mov ecx, dword ptr [esi]
// 0052eb72  85c9                 test ecx, ecx
// 0052eb74  7408                 je 0x52eb7e
// 0052eb76  8b01                 mov eax, dword ptr [ecx]
// 0052eb78  8b10                 mov edx, dword ptr [eax]
// 0052eb7a  6a01                 push 1
// 0052eb7c  ffd2                 call edx
// 0052eb7e  83c604               add esi, 4
// 0052eb81  3bf7                 cmp esi, edi
// 0052eb83  75eb                 jne 0x52eb70
// 0052eb85  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052eb89  56                   push esi
// 0052eb8a  e8d3101000           call 0x62fc62
// 0052eb8f  83c404               add esp, 4
// 0052eb92  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052eb96  5f                   pop edi
// 0052eb97  5e                   pop esi
// 0052eb98  5d                   pop ebp
// 0052eb99  64890d00000000       mov dword ptr fs:[0], ecx
// 0052eba0  83c420               add esp, 0x20
// 0052eba3  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@QBEXMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
