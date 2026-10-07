// roc 2010-06 00737ea0  unit: seg_00730000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737ea0
//
// 00737ea0  53                   push ebx
// 00737ea1  55                   push ebp
// 00737ea2  56                   push esi
// 00737ea3  8bf1                 mov esi, ecx
// 00737ea5  57                   push edi
// 00737ea6  8bd8                 mov ebx, eax
// 00737ea8  e833ffffff           call 0x737de0
// 00737ead  53                   push ebx
// 00737eae  56                   push esi
// 00737eaf  8be8                 mov ebp, eax
// 00737eb1  e89a8ffeff           call 0x720e50
// 00737eb6  83c40c               add esp, 0xc
// 00737eb9  85c0                 test eax, eax
// 00737ebb  750e                 jne 0x737ecb
// 00737ebd  6854e9a400           push 0xa4e954
// 00737ec2  57                   push edi
// 00737ec3  e8d8a5feff           call 0x7224a0
// 00737ec8  83c408               add esp, 8
// 00737ecb  83fd01               cmp ebp, 1
// 00737ece  741d                 je 0x737eed
// 00737ed0  8b04ada8e6a400       mov eax, dword ptr [ebp*4 + 0xa4e6a8]
// 00737ed7  50                   push eax
// 00737ed8  6838e9a400           push 0xa4e938
// 00737edd  57                   push edi
// 00737ede  e84d97feff           call 0x721630
// 00737ee3  83c40c               add esp, 0xc
// 00737ee6  5e                   pop esi
// 00737ee7  5d                   pop ebp
// 00737ee8  83c8ff               or eax, 0xffffffff
// 00737eeb  5b                   pop ebx
// 00737eec  c3                   ret 
// 00737eed  53                   push ebx
// 00737eee  56                   push esi
// 00737eef  57                   push edi
// 00737ef0  e8cb8ffeff           call 0x720ec0
// 00737ef5  56                   push esi
// 00737ef6  57                   push edi
// 00737ef7  e81490feff           call 0x720f10
// 00737efc  53                   push ebx
// 00737efd  56                   push esi
// 00737efe  e85d85ffff           call 0x730460
// 00737f03  83c41c               add esp, 0x1c
// 00737f06  85c0                 test eax, eax
// 00737f08  7418                 je 0x737f22
// 00737f0a  83f801               cmp eax, 1
// 00737f0d  7413                 je 0x737f22
// 00737f0f  6a01                 push 1
// 00737f11  57                   push edi
// 00737f12  56                   push esi
// 00737f13  e8a88ffeff           call 0x720ec0
// 00737f18  83c40c               add esp, 0xc
// 00737f1b  5e                   pop esi
// 00737f1c  5d                   pop ebp
// 00737f1d  83c8ff               or eax, 0xffffffff
// 00737f20  5b                   pop ebx
// 00737f21  c3                   ret 
// 00737f22  56                   push esi
// 00737f23  e82890feff           call 0x720f50
// 00737f28  8bd8                 mov ebx, eax
// 00737f2a  8d4b01               lea ecx, [ebx + 1]
// 00737f2d  51                   push ecx
// 00737f2e  57                   push edi
// 00737f2f  e81c8ffeff           call 0x720e50
// 00737f34  83c40c               add esp, 0xc
// 00737f37  85c0                 test eax, eax
// 00737f39  750e                 jne 0x737f49
// 00737f3b  681ce9a400           push 0xa4e91c
// 00737f40  57                   push edi
// 00737f41  e85aa5feff           call 0x7224a0
// 00737f46  83c408               add esp, 8
// 00737f49  53                   push ebx
// 00737f4a  57                   push edi
// 00737f4b  56                   push esi
// 00737f4c  e86f8ffeff           call 0x720ec0
// 00737f51  83c40c               add esp, 0xc
// 00737f54  5e                   pop esi
// 00737f55  5d                   pop ebp
// 00737f56  8bc3                 mov eax, ebx
// 00737f58  5b                   pop ebx
// 00737f59  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _auxresume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
