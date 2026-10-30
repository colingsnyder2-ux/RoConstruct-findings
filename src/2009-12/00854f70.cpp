// roc 2009-12 00854f70  unit: CXTPTabClientWnd  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854f70
//
// 00854f70  53                   push ebx
// 00854f71  57                   push edi
// 00854f72  8bf9                 mov edi, ecx
// 00854f74  e8b7eef9ff           call 0x7f3e30
// 00854f79  8bd8                 mov ebx, eax
// 00854f7b  85db                 test ebx, ebx
// 00854f7d  7448                 je 0x854fc7
// 00854f7f  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00854f86  743f                 je 0x854fc7
// 00854f88  56                   push esi
// 00854f89  53                   push ebx
// 00854f8a  e89bebf9ff           call 0x7f3b2a
// 00854f8f  8bf0                 mov esi, eax
// 00854f91  85f6                 test esi, esi
// 00854f93  7431                 je 0x854fc6
// 00854f95  6a00                 push 0
// 00854f97  6a00                 push 0
// 00854f99  680000c700           push 0xc70000
// 00854f9e  8bce                 mov ecx, esi
// 00854fa0  e835f0f9ff           call 0x7f3fda
// 00854fa5  6a00                 push 0
// 00854fa7  6a00                 push 0
// 00854fa9  6800020000           push 0x200
// 00854fae  8bce                 mov ecx, esi
// 00854fb0  e84beef9ff           call 0x7f3e00
// 00854fb5  6a01                 push 1
// 00854fb7  6a00                 push 0
// 00854fb9  6a00                 push 0
// 00854fbb  6a00                 push 0
// 00854fbd  6a00                 push 0
// 00854fbf  8bce                 mov ecx, esi
// 00854fc1  e86cecf9ff           call 0x7f3c32
// 00854fc6  5e                   pop esi
// 00854fc7  8b07                 mov eax, dword ptr [edi]
// 00854fc9  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00854fcf  8bcf                 mov ecx, edi
// 00854fd1  ffd2                 call edx
// 00854fd3  5f                   pop edi
// 00854fd4  8bc3                 mov eax, ebx
// 00854fd6  5b                   pop ebx
// 00854fd7  c20800               ret 8
// copied from an identical function in another client (function ?OnMDICreate@CXTPTabClientWnd@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp