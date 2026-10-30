// roc 2009-12 00858e70  unit: CXTPTabClientWnd::CSingleWorkspace  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858e70
//
// 00858e70  56                   push esi
// 00858e71  57                   push edi
// 00858e72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00858e76  8bf1                 mov esi, ecx
// 00858e78  39bec0000000         cmp dword ptr [esi + 0xc0], edi
// 00858e7e  7474                 je 0x858ef4
// 00858e80  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00858e87  756b                 jne 0x858ef4
// 00858e89  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 00858e90  7562                 jne 0x858ef4
// 00858e92  e8b9d7ffff           call 0x856650
// 00858e97  83f801               cmp eax, 1
// 00858e9a  753b                 jne 0x858ed7
// 00858e9c  6a00                 push 0
// 00858e9e  e89de6ffff           call 0x857540
// 00858ea3  85c0                 test eax, eax
// 00858ea5  7405                 je 0x858eac
// 00858ea7  83c0a8               add eax, -0x58
// 00858eaa  eb02                 jmp 0x858eae
// 00858eac  33c0                 xor eax, eax
// 00858eae  83782000             cmp dword ptr [eax + 0x20], 0
// 00858eb2  7423                 je 0x858ed7
// 00858eb4  6a00                 push 0
// 00858eb6  8bce                 mov ecx, esi
// 00858eb8  e883e6ffff           call 0x857540
// 00858ebd  85c0                 test eax, eax
// 00858ebf  7405                 je 0x858ec6
// 00858ec1  8d48a8               lea ecx, [eax - 0x58]
// 00858ec4  eb02                 jmp 0x858ec8
// 00858ec6  33c9                 xor ecx, ecx
// 00858ec8  8bc7                 mov eax, edi
// 00858eca  f7d8                 neg eax
// 00858ecc  1bc0                 sbb eax, eax
// 00858ece  83e005               and eax, 5
// 00858ed1  50                   push eax
// 00858ed2  e871acf9ff           call 0x7f3b48
// 00858ed7  8b16                 mov edx, dword ptr [esi]
// 00858ed9  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00858edf  8bce                 mov ecx, esi
// 00858ee1  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 00858ee7  ffd0                 call eax
// 00858ee9  8b5654               mov edx, dword ptr [esi + 0x54]
// 00858eec  8b4204               mov eax, dword ptr [edx + 4]
// 00858eef  8d4e54               lea ecx, [esi + 0x54]
// 00858ef2  ffd0                 call eax
// 00858ef4  5f                   pop edi
// 00858ef5  5e                   pop esi
// 00858ef6  c20400               ret 4
// copied from an identical function in another client (function ?ShowWorkspace@CXTPTabClientWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp