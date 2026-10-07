// roc 2011-06 0050ebe0  unit: RBX::Network::VMarker::?$EventDesc  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050ebe0
//
// 0050ebe0  83ec10               sub esp, 0x10
// 0050ebe3  33c0                 xor eax, eax
// 0050ebe5  890424               mov dword ptr [esp], eax
// 0050ebe8  89442404             mov dword ptr [esp + 4], eax
// 0050ebec  89442408             mov dword ptr [esp + 8], eax
// 0050ebf0  8944240c             mov dword ptr [esp + 0xc], eax
// 0050ebf4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050ebf8  56                   push esi
// 0050ebf9  50                   push eax
// 0050ebfa  ff156c1da400         call dword ptr [0xa41d6c]
// 0050ec00  6a00                 push 0
// 0050ec02  6a02                 push 2
// 0050ec04  6a02                 push 2
// 0050ec06  6689442412           mov word ptr [esp + 0x12], ax
// 0050ec0b  ff15a41da400         call dword ptr [0xa41da4]
// 0050ec11  8bf0                 mov esi, eax
// 0050ec13  83feff               cmp esi, -1
// 0050ec16  7507                 jne 0x50ec1f
// 0050ec18  b001                 mov al, 1
// 0050ec1a  5e                   pop esi
// 0050ec1b  83c410               add esp, 0x10
// 0050ec1e  c3                   ret 
// 0050ec1f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050ec23  b902000000           mov ecx, 2
// 0050ec28  66894c2404           mov word ptr [esp + 4], cx
// 0050ec2d  85c0                 test eax, eax
// 0050ec2f  7412                 je 0x50ec43
// 0050ec31  803800               cmp byte ptr [eax], 0
// 0050ec34  740d                 je 0x50ec43
// 0050ec36  50                   push eax
// 0050ec37  ff15641da400         call dword ptr [0xa41d64]
// 0050ec3d  89442408             mov dword ptr [esp + 8], eax
// 0050ec41  eb08                 jmp 0x50ec4b
// 0050ec43  c744240800000000     mov dword ptr [esp + 8], 0
// 0050ec4b  57                   push edi
// 0050ec4c  6a10                 push 0x10
// 0050ec4e  8d54240c             lea edx, [esp + 0xc]
// 0050ec52  52                   push edx
// 0050ec53  56                   push esi
// 0050ec54  ff15741da400         call dword ptr [0xa41d74]
// 0050ec5a  56                   push esi
// 0050ec5b  8bf8                 mov edi, eax
// 0050ec5d  ff15701da400         call dword ptr [0xa41d70]
// 0050ec63  33c0                 xor eax, eax
// 0050ec65  83ffff               cmp edi, -1
// 0050ec68  5f                   pop edi
// 0050ec69  0f9ec0               setle al
// 0050ec6c  5e                   pop esi
// 0050ec6d  83c410               add esp, 0x10
// 0050ec70  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?IsPortInUse_Old@SocketLayer@RakNet@@SA_NGPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
