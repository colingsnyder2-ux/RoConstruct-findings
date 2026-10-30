// roc 2009-12 0080ee30  unit: CXTPImageManagerIcon  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ee30
//
// 0080ee30  51                   push ecx
// 0080ee31  53                   push ebx
// 0080ee32  56                   push esi
// 0080ee33  8b742410             mov esi, dword ptr [esp + 0x10]
// 0080ee37  8b4618               mov eax, dword ptr [esi + 0x18]
// 0080ee3a  f7d0                 not eax
// 0080ee3c  bb20000000           mov ebx, 0x20
// 0080ee41  57                   push edi
// 0080ee42  8bf9                 mov edi, ecx
// 0080ee44  895c240c             mov dword ptr [esp + 0xc], ebx
// 0080ee48  a801                 test al, 1
// 0080ee4a  7458                 je 0x80eea4
// 0080ee4c  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0080ee4f  83c104               add ecx, 4
// 0080ee52  55                   push ebp
// 0080ee53  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 0080ee56  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 0080ee59  7607                 jbe 0x80ee62
// 0080ee5b  8bce                 mov ecx, esi
// 0080ee5d  e8fa761100           call 0x92655c
// 0080ee62  8b5628               mov edx, dword ptr [esi + 0x28]
// 0080ee65  892a                 mov dword ptr [edx], ebp
// 0080ee67  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0080ee6a  83462804             add dword ptr [esi + 0x28], 4
// 0080ee6e  8b4628               mov eax, dword ptr [esi + 0x28]
// 0080ee71  f7d1                 not ecx
// 0080ee73  5d                   pop ebp
// 0080ee74  f6c101               test cl, 1
// 0080ee77  7511                 jne 0x80ee8a
// 0080ee79  8d4e14               lea ecx, [esi + 0x14]
// 0080ee7c  ff1580de9800         call dword ptr [0x98de80]
// 0080ee82  50                   push eax
// 0080ee83  6a02                 push 2
// 0080ee85  e84655feff           call 0x7f43d0
// 0080ee8a  83c004               add eax, 4
// 0080ee8d  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0080ee90  7607                 jbe 0x80ee99
// 0080ee92  8bce                 mov ecx, esi
// 0080ee94  e8c3761100           call 0x92655c
// 0080ee99  8b5628               mov edx, dword ptr [esi + 0x28]
// 0080ee9c  891a                 mov dword ptr [edx], ebx
// 0080ee9e  83462804             add dword ptr [esi + 0x28], 4
// 0080eea2  eb1b                 jmp 0x80eebf
// 0080eea4  8d472c               lea eax, [edi + 0x2c]
// 0080eea7  50                   push eax
// 0080eea8  8bce                 mov ecx, esi
// 0080eeaa  e841090200           call 0x82f7f0
// 0080eeaf  8d4c240c             lea ecx, [esp + 0xc]
// 0080eeb3  51                   push ecx
// 0080eeb4  8bce                 mov ecx, esi
// 0080eeb6  e835090200           call 0x82f7f0
// 0080eebb  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0080eebf  53                   push ebx
// 0080eec0  56                   push esi
// 0080eec1  8d5730               lea edx, [edi + 0x30]
// 0080eec4  52                   push edx
// 0080eec5  8bcf                 mov ecx, edi
// 0080eec7  e814fdffff           call 0x80ebe0
// 0080eecc  53                   push ebx
// 0080eecd  56                   push esi
// 0080eece  8d8708010000         lea eax, [edi + 0x108]
// 0080eed4  50                   push eax
// 0080eed5  8bcf                 mov ecx, edi
// 0080eed7  e804fdffff           call 0x80ebe0
// 0080eedc  53                   push ebx
// 0080eedd  56                   push esi
// 0080eede  8d8f9c000000         lea ecx, [edi + 0x9c]
// 0080eee4  51                   push ecx
// 0080eee5  8bcf                 mov ecx, edi
// 0080eee7  e8f4fcffff           call 0x80ebe0
// 0080eeec  83fb07               cmp ebx, 7
// 0080eeef  7e10                 jle 0x80ef01
// 0080eef1  53                   push ebx
// 0080eef2  56                   push esi
// 0080eef3  8d97c0000000         lea edx, [edi + 0xc0]
// 0080eef9  52                   push edx
// 0080eefa  8bcf                 mov ecx, edi
// 0080eefc  e8dffcffff           call 0x80ebe0
// 0080ef01  83fb10               cmp ebx, 0x10
// 0080ef04  7e10                 jle 0x80ef16
// 0080ef06  53                   push ebx
// 0080ef07  56                   push esi
// 0080ef08  8d87e4000000         lea eax, [edi + 0xe4]
// 0080ef0e  50                   push eax
// 0080ef0f  8bcf                 mov ecx, edi
// 0080ef11  e8cafcffff           call 0x80ebe0
// 0080ef16  5f                   pop edi
// 0080ef17  5e                   pop esi
// 0080ef18  5b                   pop ebx
// 0080ef19  59                   pop ecx
// 0080ef1a  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@CXTPImageManagerIcon@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp