// roc 2007-08 0054ac30  unit: RBX::ServiceProvider  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ac30
//
// 0054ac30  6aff                 push -1
// 0054ac32  68e9237500           push 0x7523e9
// 0054ac37  64a100000000         mov eax, dword ptr fs:[0]
// 0054ac3d  50                   push eax
// 0054ac3e  64892500000000       mov dword ptr fs:[0], esp
// 0054ac45  83ec08               sub esp, 8
// 0054ac48  56                   push esi
// 0054ac49  33f6                 xor esi, esi
// 0054ac4b  56                   push esi
// 0054ac4c  56                   push esi
// 0054ac4d  83ec1c               sub esp, 0x1c
// 0054ac50  89742428             mov dword ptr [esp + 0x28], esi
// 0054ac54  8bcc                 mov ecx, esp
// 0054ac56  89642428             mov dword ptr [esp + 0x28], esp
// 0054ac5a  6854597800           push 0x785954
// 0054ac5f  ff1598e67700         call dword ptr [0x77e698]
// 0054ac65  83ec1c               sub esp, 0x1c
// 0054ac68  8bcc                 mov ecx, esp
// 0054ac6a  89642448             mov dword ptr [esp + 0x48], esp
// 0054ac6e  6854597800           push 0x785954
// 0054ac73  89742458             mov dword ptr [esp + 0x58], esi
// 0054ac77  ff1598e67700         call dword ptr [0x77e698]
// 0054ac7d  a174a57b00           mov eax, dword ptr [0x7ba574]
// 0054ac82  8b0d70a57b00         mov ecx, dword ptr [0x7ba570]
// 0054ac88  8b156ca57b00         mov edx, dword ptr [0x7ba56c]
// 0054ac8e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0054ac92  50                   push eax
// 0054ac93  6a08                 push 8
// 0054ac95  6a0f                 push 0xf
// 0054ac97  51                   push ecx
// 0054ac98  52                   push edx
// 0054ac99  8bce                 mov ecx, esi
// 0054ac9b  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0054aca3  e868fdffff           call 0x54aa10
// 0054aca8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0054acac  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054acb0  894608               mov dword ptr [esi + 8], eax
// 0054acb3  b001                 mov al, 1
// 0054acb5  884614               mov byte ptr [esi + 0x14], al
// 0054acb8  884615               mov byte ptr [esi + 0x15], al
// 0054acbb  8bc6                 mov eax, esi
// 0054acbd  64890d00000000       mov dword ptr fs:[0], ecx
// 0054acc4  5e                   pop esi
// 0054acc5  83c414               add esp, 0x14
// 0054acc8  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp