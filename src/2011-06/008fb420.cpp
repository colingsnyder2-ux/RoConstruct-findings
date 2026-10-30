// roc 2011-06 008fb420  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fb420
//
// 008fb420  6aff                 push -1
// 008fb422  6840f4a000           push 0xa0f440
// 008fb427  64a100000000         mov eax, dword ptr fs:[0]
// 008fb42d  50                   push eax
// 008fb42e  83ec10               sub esp, 0x10
// 008fb431  53                   push ebx
// 008fb432  55                   push ebp
// 008fb433  56                   push esi
// 008fb434  57                   push edi
// 008fb435  a12058c900           mov eax, dword ptr [0xc95820]
// 008fb43a  33c4                 xor eax, esp
// 008fb43c  50                   push eax
// 008fb43d  8d442424             lea eax, [esp + 0x24]
// 008fb441  64a300000000         mov dword ptr fs:[0], eax
// 008fb447  8bf9                 mov edi, ecx
// 008fb449  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fb44d  8b01                 mov eax, dword ptr [ecx]
// 008fb44f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008fb455  33ed                 xor ebp, ebp
// 008fb457  68d810a700           push 0xa710d8
// 008fb45c  396928               cmp dword ptr [ecx + 0x28], ebp
// 008fb45f  0f8598000000         jne 0x8fb4fd
// 008fb465  8b7728               mov esi, dword ptr [edi + 0x28]
// 008fb468  89742420             mov dword ptr [esp + 0x20], esi
// 008fb46c  ffd2                 call edx
// 008fb46e  8bd8                 mov ebx, eax
// 008fb470  895c2414             mov dword ptr [esp + 0x14], ebx
// 008fb474  8b03                 mov eax, dword ptr [ebx]
// 008fb476  8b5004               mov edx, dword ptr [eax + 4]
// 008fb479  55                   push ebp
// 008fb47a  56                   push esi
// 008fb47b  8bcb                 mov ecx, ebx
// 008fb47d  896c2434             mov dword ptr [esp + 0x34], ebp
// 008fb481  ffd2                 call edx
// 008fb483  89442418             mov dword ptr [esp + 0x18], eax
// 008fb487  85f6                 test esi, esi
// 008fb489  7e69                 jle 0x8fb4f4
// 008fb48b  85ed                 test ebp, ebp
// 008fb48d  7c0f                 jl 0x8fb49e
// 008fb48f  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008fb492  7d0a                 jge 0x8fb49e
// 008fb494  8b4724               mov eax, dword ptr [edi + 0x24]
// 008fb497  8d04a8               lea eax, [eax + ebp*4]
// 008fb49a  8b00                 mov eax, dword ptr [eax]
// 008fb49c  eb02                 jmp 0x8fb4a0
// 008fb49e  33c0                 xor eax, eax
// 008fb4a0  89442434             mov dword ptr [esp + 0x34], eax
// 008fb4a4  8b13                 mov edx, dword ptr [ebx]
// 008fb4a6  8b5208               mov edx, dword ptr [edx + 8]
// 008fb4a9  8d442418             lea eax, [esp + 0x18]
// 008fb4ad  50                   push eax
// 008fb4ae  8bcb                 mov ecx, ebx
// 008fb4b0  ffd2                 call edx
// 008fb4b2  8bf0                 mov esi, eax
// 008fb4b4  89742420             mov dword ptr [esp + 0x20], esi
// 008fb4b8  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008fb4bd  e8eeb6ffff           call 0x8f6bb0
// 008fb4c2  8b16                 mov edx, dword ptr [esi]
// 008fb4c4  8b5264               mov edx, dword ptr [edx + 0x64]
// 008fb4c7  50                   push eax
// 008fb4c8  8d442438             lea eax, [esp + 0x38]
// 008fb4cc  50                   push eax
// 008fb4cd  8bce                 mov ecx, esi
// 008fb4cf  ffd2                 call edx
// 008fb4d1  85c0                 test eax, eax
// 008fb4d3  740c                 je 0x8fb4e1
// 008fb4d5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fb4d9  8b01                 mov eax, dword ptr [ecx]
// 008fb4db  8b5064               mov edx, dword ptr [eax + 0x64]
// 008fb4de  56                   push esi
// 008fb4df  ffd2                 call edx
// 008fb4e1  8bce                 mov ecx, esi
// 008fb4e3  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008fb4e8  e8edf0f0ff           call 0x80a5da
// 008fb4ed  45                   inc ebp
// 008fb4ee  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008fb4f2  7c97                 jl 0x8fb48b
// 008fb4f4  8b03                 mov eax, dword ptr [ebx]
// 008fb4f6  8bcb                 mov ecx, ebx
// 008fb4f8  e9b1000000           jmp 0x8fb5ae
// 008fb4fd  ffd2                 call edx
// 008fb4ff  8be8                 mov ebp, eax
// 008fb501  896c2420             mov dword ptr [esp + 0x20], ebp
// 008fb505  8b4500               mov eax, dword ptr [ebp]
// 008fb508  8b5004               mov edx, dword ptr [eax + 4]
// 008fb50b  6a00                 push 0
// 008fb50d  bb02000000           mov ebx, 2
// 008fb512  6a00                 push 0
// 008fb514  8bcd                 mov ecx, ebp
// 008fb516  895c2434             mov dword ptr [esp + 0x34], ebx
// 008fb51a  ffd2                 call edx
// 008fb51c  8bcf                 mov ecx, edi
// 008fb51e  89442414             mov dword ptr [esp + 0x14], eax
// 008fb522  e8a9f4ffff           call 0x8fa9d0
// 008fb527  837c241400           cmp dword ptr [esp + 0x14], 0
// 008fb52c  0f8477000000         je 0x8fb5a9
// 008fb532  8b4500               mov eax, dword ptr [ebp]
// 008fb535  8b5008               mov edx, dword ptr [eax + 8]
// 008fb538  8d4c2414             lea ecx, [esp + 0x14]
// 008fb53c  51                   push ecx
// 008fb53d  8bcd                 mov ecx, ebp
// 008fb53f  ffd2                 call edx
// 008fb541  8bf0                 mov esi, eax
// 008fb543  8974241c             mov dword ptr [esp + 0x1c], esi
// 008fb547  897e24               mov dword ptr [esi + 0x24], edi
// 008fb54a  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008fb54f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008fb557  e854b6ffff           call 0x8f6bb0
// 008fb55c  8b16                 mov edx, dword ptr [esi]
// 008fb55e  8b5264               mov edx, dword ptr [edx + 0x64]
// 008fb561  50                   push eax
// 008fb562  8d442438             lea eax, [esp + 0x38]
// 008fb566  50                   push eax
// 008fb567  8bce                 mov ecx, esi
// 008fb569  ffd2                 call edx
// 008fb56b  85c0                 test eax, eax
// 008fb56d  740c                 je 0x8fb57b
// 008fb56f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fb573  8b01                 mov eax, dword ptr [ecx]
// 008fb575  8b5064               mov edx, dword ptr [eax + 0x64]
// 008fb578  56                   push esi
// 008fb579  ffd2                 call edx
// 008fb57b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008fb57f  85d2                 test edx, edx
// 008fb581  744f                 je 0x8fb5d2
// 008fb583  8b4728               mov eax, dword ptr [edi + 0x28]
// 008fb586  8d4f20               lea ecx, [edi + 0x20]
// 008fb589  52                   push edx
// 008fb58a  50                   push eax
// 008fb58b  e80037f4ff           call 0x83ec90
// 008fb590  8bcf                 mov ecx, edi
// 008fb592  e839e6ffff           call 0x8f9bd0
// 008fb597  8bce                 mov ecx, esi
// 008fb599  885c242c             mov byte ptr [esp + 0x2c], bl
// 008fb59d  e838f0f0ff           call 0x80a5da
// 008fb5a2  837c241400           cmp dword ptr [esp + 0x14], 0
// 008fb5a7  7589                 jne 0x8fb532
// 008fb5a9  8b4500               mov eax, dword ptr [ebp]
// 008fb5ac  8bcd                 mov ecx, ebp
// 008fb5ae  8b10                 mov edx, dword ptr [eax]
// 008fb5b0  6a01                 push 1
// 008fb5b2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008fb5ba  ffd2                 call edx
// 008fb5bc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008fb5c0  64890d00000000       mov dword ptr fs:[0], ecx
// 008fb5c7  59                   pop ecx
// 008fb5c8  5f                   pop edi
// 008fb5c9  5e                   pop esi
// 008fb5ca  5d                   pop ebp
// 008fb5cb  5b                   pop ebx
// 008fb5cc  83c41c               add esp, 0x1c
// 008fb5cf  c20400               ret 4
// 008fb5d2  6a00                 push 0
// 008fb5d4  6a06                 push 6
// 008fb5d6  e8f9f5f0ff           call 0x80abd4
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonGroups@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp