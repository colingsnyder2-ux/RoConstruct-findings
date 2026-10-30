// roc 2011-06 0087e960  unit: CXTCaptionButton  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e960
//
// 0087e960  6aff                 push -1
// 0087e962  686e89a000           push 0xa0896e
// 0087e967  64a100000000         mov eax, dword ptr fs:[0]
// 0087e96d  50                   push eax
// 0087e96e  51                   push ecx
// 0087e96f  53                   push ebx
// 0087e970  56                   push esi
// 0087e971  57                   push edi
// 0087e972  a12058c900           mov eax, dword ptr [0xc95820]
// 0087e977  33c4                 xor eax, esp
// 0087e979  50                   push eax
// 0087e97a  8d442414             lea eax, [esp + 0x14]
// 0087e97e  64a300000000         mov dword ptr fs:[0], eax
// 0087e984  8bf1                 mov esi, ecx
// 0087e986  89742410             mov dword ptr [esp + 0x10], esi
// 0087e98a  e8b7bff8ff           call 0x80a946
// 0087e98f  c706ecf1ac00         mov dword ptr [esi], 0xacf1ec
// 0087e995  33db                 xor ebx, ebx
// 0087e997  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0087e99b  8d7e54               lea edi, [esi + 0x54]
// 0087e99e  e8bdfbffff           call 0x87e560
// 0087e9a3  50                   push eax
// 0087e9a4  8bcf                 mov ecx, edi
// 0087e9a6  e8b5d4feff           call 0x86be60
// 0087e9ab  c70754f0ac00         mov dword ptr [edi], 0xacf054
// 0087e9b1  8dbed0000000         lea edi, [esi + 0xd0]
// 0087e9b7  8bcf                 mov ecx, edi
// 0087e9b9  c70664f0ac00         mov dword ptr [esi], 0xacf064
// 0087e9bf  ff15b42da400         call dword ptr [0xa42db4]
// 0087e9c5  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0087e9cb  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0087e9d0  e839bef8ff           call 0x80a80e
// 0087e9d5  8d8edc000000         lea ecx, [esi + 0xdc]
// 0087e9db  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0087e9e0  e83bfbffff           call 0x87e520
// 0087e9e5  68cabea500           push 0xa5beca
// 0087e9ea  8bcf                 mov ecx, edi
// 0087e9ec  c644242004           mov byte ptr [esp + 0x20], 4
// 0087e9f1  889e81000000         mov byte ptr [esi + 0x81], bl
// 0087e9f7  889e80000000         mov byte ptr [esi + 0x80], bl
// 0087e9fd  ff15a42da400         call dword ptr [0xa42da4]
// 0087ea03  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0087ea09  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0087ea0f  899e88000000         mov dword ptr [esi + 0x88], ebx
// 0087ea15  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0087ea1b  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 0087ea21  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0087ea24  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0087ea27  e8c472ffff           call 0x875cf0
// 0087ea2c  bf10000000           mov edi, 0x10
// 0087ea31  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 0087ea37  7d0d                 jge 0x87ea46
// 0087ea39  e8b272ffff           call 0x875cf0
// 0087ea3e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0087ea44  eb02                 jmp 0x87ea48
// 0087ea46  8bc7                 mov eax, edi
// 0087ea48  898690000000         mov dword ptr [esi + 0x90], eax
// 0087ea4e  e89d72ffff           call 0x875cf0
// 0087ea53  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 0087ea59  7d0d                 jge 0x87ea68
// 0087ea5b  e89072ffff           call 0x875cf0
// 0087ea60  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0087ea66  eb02                 jmp 0x87ea6a
// 0087ea68  8bc7                 mov eax, edi
// 0087ea6a  8b3d181ba400         mov edi, dword ptr [0xa41b18]
// 0087ea70  6a12                 push 0x12
// 0087ea72  898694000000         mov dword ptr [esi + 0x94], eax
// 0087ea78  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0087ea7e  ffd7                 call edi
// 0087ea80  6a0f                 push 0xf
// 0087ea82  894678               mov dword ptr [esi + 0x78], eax
// 0087ea85  ffd7                 call edi
// 0087ea87  6a0f                 push 0xf
// 0087ea89  894670               mov dword ptr [esi + 0x70], eax
// 0087ea8c  ffd7                 call edi
// 0087ea8e  894674               mov dword ptr [esi + 0x74], eax
// 0087ea91  8bc6                 mov eax, esi
// 0087ea93  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087ea97  64890d00000000       mov dword ptr fs:[0], ecx
// 0087ea9e  59                   pop ecx
// 0087ea9f  5f                   pop edi
// 0087eaa0  5e                   pop esi
// 0087eaa1  5b                   pop ebx
// 0087eaa2  83c410               add esp, 0x10
// 0087eaa5  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp