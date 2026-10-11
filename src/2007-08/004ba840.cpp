// roc 2007-08 004ba840  unit: RakPeer  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba840
//
// 004ba840  53                   push ebx
// 004ba841  55                   push ebp
// 004ba842  56                   push esi
// 004ba843  57                   push edi
// 004ba844  8bf9                 mov edi, ecx
// 004ba846  8b87e8060000         mov eax, dword ptr [edi + 0x6e8]
// 004ba84c  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004ba84f  3b8fec060000         cmp ecx, dword ptr [edi + 0x6ec]
// 004ba855  7411                 je 0x4ba868
// 004ba857  8b97e8060000         mov edx, dword ptr [edi + 0x6e8]
// 004ba85d  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004ba860  8a4838               mov cl, byte ptr [eax + 0x38]
// 004ba863  80f901               cmp cl, 1
// 004ba866  7528                 jne 0x4ba890
// 004ba868  8b97e8060000         mov edx, dword ptr [edi + 0x6e8]
// 004ba86e  8b723c               mov esi, dword ptr [edx + 0x3c]
// 004ba871  6a40                 push 0x40
// 004ba873  e87e561700           call 0x62fef6
// 004ba878  8b8fe8060000         mov ecx, dword ptr [edi + 0x6e8]
// 004ba87e  89413c               mov dword ptr [ecx + 0x3c], eax
// 004ba881  8b97e8060000         mov edx, dword ptr [edi + 0x6e8]
// 004ba887  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004ba88a  83c404               add esp, 4
// 004ba88d  89703c               mov dword ptr [eax + 0x3c], esi
// 004ba890  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ba894  8bb7e8060000         mov esi, dword ptr [edi + 0x6e8]
// 004ba89a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004ba89d  8d6b07               lea ebp, [ebx + 7]
// 004ba8a0  c1fd03               sar ebp, 3
// 004ba8a3  55                   push ebp
// 004ba8a4  898fe8060000         mov dword ptr [edi + 0x6e8], ecx
// 004ba8aa  e847561700           call 0x62fef6
// 004ba8af  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ba8b3  55                   push ebp
// 004ba8b4  52                   push edx
// 004ba8b5  50                   push eax
// 004ba8b6  894630               mov dword ptr [esi + 0x30], eax
// 004ba8b9  e88e641700           call 0x630d4c
// 004ba8be  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ba8c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ba8c6  8a542434             mov dl, byte ptr [esp + 0x34]
// 004ba8ca  894604               mov dword ptr [esi + 4], eax
// 004ba8cd  8b442438             mov eax, dword ptr [esp + 0x38]
// 004ba8d1  891e                 mov dword ptr [esi], ebx
// 004ba8d3  894e08               mov dword ptr [esi + 8], ecx
// 004ba8d6  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 004ba8db  88560c               mov byte ptr [esi + 0xc], dl
// 004ba8de  8a542440             mov dl, byte ptr [esp + 0x40]
// 004ba8e2  894610               mov dword ptr [esi + 0x10], eax
// 004ba8e5  8b442444             mov eax, dword ptr [esp + 0x44]
// 004ba8e9  66894e14             mov word ptr [esi + 0x14], cx
// 004ba8ed  885618               mov byte ptr [esi + 0x18], dl
// 004ba8f0  89461c               mov dword ptr [esi + 0x1c], eax
// 004ba8f3  c7463400000000       mov dword ptr [esi + 0x34], 0
// 004ba8fa  8b8ff0060000         mov ecx, dword ptr [edi + 0x6f0]
// 004ba900  8387f806000001       add dword ptr [edi + 0x6f8], 1
// 004ba907  c6413801             mov byte ptr [ecx + 0x38], 1
// 004ba90b  8b97f0060000         mov edx, dword ptr [edi + 0x6f0]
// 004ba911  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004ba914  83c410               add esp, 0x10
// 004ba917  8987f0060000         mov dword ptr [edi + 0x6f0], eax
// 004ba91d  5f                   pop edi
// 004ba91e  5e                   pop esi
// 004ba91f  5d                   pop ebp
// 004ba920  5b                   pop ebx
// 004ba921  c22400               ret 0x24
// library openrbx-raknet/RakPeer.cpp (function ?SendBuffered@RakPeer@@IAEXPBDHW4PacketPriority@@W4PacketReliability@@DUSystemAddress@@_NW4ConnectMode@RemoteSystemStruct@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
