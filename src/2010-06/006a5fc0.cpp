// roc 2010-06 006a5fc0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a5fc0
//
// 006a5fc0  53                   push ebx
// 006a5fc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006a5fc5  55                   push ebp
// 006a5fc6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006a5fca  56                   push esi
// 006a5fcb  57                   push edi
// 006a5fcc  8bf9                 mov edi, ecx
// 006a5fce  33f6                 xor esi, esi
// 006a5fd0  f6474401             test byte ptr [edi + 0x44], 1
// 006a5fd4  750d                 jne 0x6a5fe3
// 006a5fd6  8d4708               lea eax, [edi + 8]
// 006a5fd9  50                   push eax
// 006a5fda  55                   push ebp
// 006a5fdb  53                   push ebx
// 006a5fdc  e85fdeffff           call 0x6a3e40
// 006a5fe1  8bf0                 mov esi, eax
// 006a5fe3  f6474402             test byte ptr [edi + 0x44], 2
// 006a5fe7  754b                 jne 0x6a6034
// 006a5fe9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a5fed  8bcd                 mov ecx, ebp
// 006a5fef  2bce                 sub ecx, esi
// 006a5ff1  51                   push ecx
// 006a5ff2  8d141e               lea edx, [esi + ebx]
// 006a5ff5  52                   push edx
// 006a5ff6  50                   push eax
// 006a5ff7  8bcf                 mov ecx, edi
// 006a5ff9  e8e2efffff           call 0x6a4fe0
// 006a5ffe  83f8ff               cmp eax, -1
// 006a6001  7424                 je 0x6a6027
// 006a6003  03f0                 add esi, eax
// 006a6005  8bcd                 mov ecx, ebp
// 006a6007  2bce                 sub ecx, esi
// 006a6009  3bc1                 cmp eax, ecx
// 006a600b  7d21                 jge 0x6a602e
// 006a600d  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a6011  51                   push ecx
// 006a6012  8d0c1e               lea ecx, [esi + ebx]
// 006a6015  51                   push ecx
// 006a6016  52                   push edx
// 006a6017  8bcf                 mov ecx, edi
// 006a6019  e8c2efffff           call 0x6a4fe0
// 006a601e  83f8ff               cmp eax, -1
// 006a6021  7404                 je 0x6a6027
// 006a6023  03f0                 add esi, eax
// 006a6025  eb07                 jmp 0x6a602e
// 006a6027  8bcf                 mov ecx, edi
// 006a6029  e8e2e1ffff           call 0x6a4210
// 006a602e  f6474402             test byte ptr [edi + 0x44], 2
// 006a6032  7418                 je 0x6a604c
// 006a6034  3bf5                 cmp esi, ebp
// 006a6036  7d14                 jge 0x6a604c
// 006a6038  8d4724               lea eax, [edi + 0x24]
// 006a603b  50                   push eax
// 006a603c  2bee                 sub ebp, esi
// 006a603e  55                   push ebp
// 006a603f  8d0c1e               lea ecx, [esi + ebx]
// 006a6042  51                   push ecx
// 006a6043  8bcf                 mov ecx, edi
// 006a6045  e8f6ddffff           call 0x6a3e40
// 006a604a  03f0                 add esi, eax
// 006a604c  85f6                 test esi, esi
// 006a604e  7409                 je 0x6a6059
// 006a6050  5f                   pop edi
// 006a6051  8bc6                 mov eax, esi
// 006a6053  5e                   pop esi
// 006a6054  5d                   pop ebp
// 006a6055  5b                   pop ebx
// 006a6056  c20c00               ret 0xc
// 006a6059  5f                   pop edi
// 006a605a  5e                   pop esi
// 006a605b  5d                   pop ebp
// 006a605c  83c8ff               or eax, 0xffffffff
// 006a605f  5b                   pop ebx
// 006a6060  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp