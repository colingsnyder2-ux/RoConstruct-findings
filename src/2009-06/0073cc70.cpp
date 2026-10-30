// roc 2009-06 0073cc70  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073cc70
//
// 0073cc70  53                   push ebx
// 0073cc71  56                   push esi
// 0073cc72  57                   push edi
// 0073cc73  8bf1                 mov esi, ecx
// 0073cc75  e862f21000           call 0x84bedc
// 0073cc7a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073cc7e  a900010000           test eax, 0x100
// 0073cc83  740c                 je 0x73cc91
// 0073cc85  f6c340               test bl, 0x40
// 0073cc88  7407                 je 0x73cc91
// 0073cc8a  bf01000000           mov edi, 1
// 0073cc8f  eb02                 jmp 0x73cc93
// 0073cc91  33ff                 xor edi, edi
// 0073cc93  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0073cc9a  0f85cc000000         jne 0x73cd6c
// 0073cca0  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 0073cca7  0f84bf000000         je 0x73cd6c
// 0073ccad  8bce                 mov ecx, esi
// 0073ccaf  e8dc06ffff           call 0x72d390
// 0073ccb4  85c0                 test eax, eax
// 0073ccb6  7409                 je 0x73ccc1
// 0073ccb8  8b4074               mov eax, dword ptr [eax + 0x74]
// 0073ccbb  83783400             cmp dword ptr [eax + 0x34], 0
// 0073ccbf  746c                 je 0x73cd2d
// 0073ccc1  f6c308               test bl, 8
// 0073ccc4  741c                 je 0x73cce2
// 0073ccc6  8bce                 mov ecx, esi
// 0073ccc8  e8ddccfdff           call 0x7199aa
// 0073cccd  85c0                 test eax, eax
// 0073cccf  7511                 jne 0x73cce2
// 0073ccd1  6897000000           push 0x97
// 0073ccd6  50                   push eax
// 0073ccd7  50                   push eax
// 0073ccd8  50                   push eax
// 0073ccd9  50                   push eax
// 0073ccda  50                   push eax
// 0073ccdb  8bce                 mov ecx, esi
// 0073ccdd  e822c1fdff           call 0x718e04
// 0073cce2  f6c304               test bl, 4
// 0073cce5  7446                 je 0x73cd2d
// 0073cce7  8bce                 mov ecx, esi
// 0073cce9  e872f1ffff           call 0x73be60
// 0073ccee  85c0                 test eax, eax
// 0073ccf0  753b                 jne 0x73cd2d
// 0073ccf2  8bce                 mov ecx, esi
// 0073ccf4  e8b1ccfdff           call 0x7199aa
// 0073ccf9  85c0                 test eax, eax
// 0073ccfb  7430                 je 0x73cd2d
// 0073ccfd  6af0                 push -0x10
// 0073ccff  ff1588ee8900         call dword ptr [0x89ee88]
// 0073cd05  50                   push eax
// 0073cd06  ff1558ed8900         call dword ptr [0x89ed58]
// 0073cd0c  a900000010           test eax, 0x10000000
// 0073cd11  741a                 je 0x73cd2d
// 0073cd13  a900000020           test eax, 0x20000000
// 0073cd18  7513                 jne 0x73cd2d
// 0073cd1a  6a57                 push 0x57
// 0073cd1c  6a00                 push 0
// 0073cd1e  6a00                 push 0
// 0073cd20  6a00                 push 0
// 0073cd22  6a00                 push 0
// 0073cd24  6a00                 push 0
// 0073cd26  8bce                 mov ecx, esi
// 0073cd28  e8d7c0fdff           call 0x718e04
// 0073cd2d  f6c303               test bl, 3
// 0073cd30  7427                 je 0x73cd59
// 0073cd32  8bcb                 mov ecx, ebx
// 0073cd34  80e101               and cl, 1
// 0073cd37  0fb6d1               movzx edx, cl
// 0073cd3a  f7da                 neg edx
// 0073cd3c  1bd2                 sbb edx, edx
// 0073cd3e  83e2c0               and edx, 0xffffffc0
// 0073cd41  83ea80               sub edx, -0x80
// 0073cd44  83ca17               or edx, 0x17
// 0073cd47  52                   push edx
// 0073cd48  6a00                 push 0
// 0073cd4a  6a00                 push 0
// 0073cd4c  6a00                 push 0
// 0073cd4e  6a00                 push 0
// 0073cd50  6a00                 push 0
// 0073cd52  8bce                 mov ecx, esi
// 0073cd54  e8abc0fdff           call 0x718e04
// 0073cd59  f6c330               test bl, 0x30
// 0073cd5c  740e                 je 0x73cd6c
// 0073cd5e  c1eb04               shr ebx, 4
// 0073cd61  83e301               and ebx, 1
// 0073cd64  53                   push ebx
// 0073cd65  8bce                 mov ecx, esi
// 0073cd67  e84ac3fdff           call 0x7190b6
// 0073cd6c  8bc7                 mov eax, edi
// 0073cd6e  5f                   pop edi
// 0073cd6f  5e                   pop esi
// 0073cd70  5b                   pop ebx
// 0073cd71  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
