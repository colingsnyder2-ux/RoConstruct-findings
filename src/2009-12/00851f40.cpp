// roc 2009-12 00851f40  unit: CXTPPropExchangeArchive  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851f40
//
// 00851f40  51                   push ecx
// 00851f41  57                   push edi
// 00851f42  8bf9                 mov edi, ecx
// 00851f44  837f2800             cmp dword ptr [edi + 0x28], 0
// 00851f48  757e                 jne 0x851fc8
// 00851f4a  56                   push esi
// 00851f4b  8b7744               mov esi, dword ptr [edi + 0x44]
// 00851f4e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00851f51  f7d0                 not eax
// 00851f53  a801                 test al, 1
// 00851f55  7511                 jne 0x851f68
// 00851f57  8d4e14               lea ecx, [esi + 0x14]
// 00851f5a  ff1580de9800         call dword ptr [0x98de80]
// 00851f60  50                   push eax
// 00851f61  6a02                 push 2
// 00851f63  e86824faff           call 0x7f43d0
// 00851f68  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00851f6b  83c104               add ecx, 4
// 00851f6e  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00851f71  7607                 jbe 0x851f7a
// 00851f73  8bce                 mov ecx, esi
// 00851f75  e8e2450d00           call 0x92655c
// 00851f7a  8b5628               mov edx, dword ptr [esi + 0x28]
// 00851f7d  c702bfadf00f         mov dword ptr [edx], 0xff0adbf
// 00851f83  83462804             add dword ptr [esi + 0x28], 4
// 00851f87  8b7744               mov esi, dword ptr [edi + 0x44]
// 00851f8a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00851f8d  f7d0                 not eax
// 00851f8f  53                   push ebx
// 00851f90  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00851f93  a801                 test al, 1
// 00851f95  7511                 jne 0x851fa8
// 00851f97  8d4e14               lea ecx, [esi + 0x14]
// 00851f9a  ff1580de9800         call dword ptr [0x98de80]
// 00851fa0  50                   push eax
// 00851fa1  6a02                 push 2
// 00851fa3  e82824faff           call 0x7f43d0
// 00851fa8  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00851fab  83c104               add ecx, 4
// 00851fae  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00851fb1  7607                 jbe 0x851fba
// 00851fb3  8bce                 mov ecx, esi
// 00851fb5  e8a2450d00           call 0x92655c
// 00851fba  8b5628               mov edx, dword ptr [esi + 0x28]
// 00851fbd  891a                 mov dword ptr [edx], ebx
// 00851fbf  83462804             add dword ptr [esi + 0x28], 4
// 00851fc3  5b                   pop ebx
// 00851fc4  5e                   pop esi
// 00851fc5  5f                   pop edi
// 00851fc6  59                   pop ecx
// 00851fc7  c3                   ret 
// 00851fc8  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00851fcb  6a04                 push 4
// 00851fcd  e890450d00           call 0x926562
// 00851fd2  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00851fd5  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00851fd8  8138bfadf00f         cmp dword ptr [eax], 0xff0adbf
// 00851fde  7519                 jne 0x851ff9
// 00851fe0  8d542404             lea edx, [esp + 4]
// 00851fe4  52                   push edx
// 00851fe5  e806d8fdff           call 0x82f7f0
// 00851fea  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00851fed  8d472c               lea eax, [edi + 0x2c]
// 00851ff0  50                   push eax
// 00851ff1  e8fad7fdff           call 0x82f7f0
// 00851ff6  5f                   pop edi
// 00851ff7  59                   pop ecx
// 00851ff8  c3                   ret 
// 00851ff9  c7472c11000000       mov dword ptr [edi + 0x2c], 0x11
// 00852000  5f                   pop edi
// 00852001  59                   pop ecx
// 00852002  c3                   ret 
// copied from an identical function in another client (function ?ExchangeSchemaSafe@CXTPPropExchangeArchive@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp