// roc 2009-12 00663a90  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00663a90
//
// 00663a90  51                   push ecx
// 00663a91  53                   push ebx
// 00663a92  55                   push ebp
// 00663a93  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00663a97  56                   push esi
// 00663a98  57                   push edi
// 00663a99  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663a9d  8d4900               lea ecx, [ecx]
// 00663aa0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00663aa3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00663aa6  7606                 jbe 0x663aae
// 00663aa8  ff1560b79800         call dword ptr [0x98b760]
// 00663aae  8b7500               mov esi, dword ptr [ebp]
// 00663ab1  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00663ab4  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00663ab7  7606                 jbe 0x663abf
// 00663ab9  ff1560b79800         call dword ptr [0x98b760]
// 00663abf  8b4500               mov eax, dword ptr [ebp]
// 00663ac2  85f6                 test esi, esi
// 00663ac4  7404                 je 0x663aca
// 00663ac6  3bf0                 cmp esi, eax
// 00663ac8  7406                 je 0x663ad0
// 00663aca  ff1560b79800         call dword ptr [0x98b760]
// 00663ad0  3bfb                 cmp edi, ebx
// 00663ad2  743d                 je 0x663b11
// 00663ad4  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 00663ada  85f6                 test esi, esi
// 00663adc  752b                 jne 0x663b09
// 00663ade  ffd3                 call ebx
// 00663ae0  33c0                 xor eax, eax
// 00663ae2  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663ae5  7202                 jb 0x663ae9
// 00663ae7  ffd3                 call ebx
// 00663ae9  8b07                 mov eax, dword ptr [edi]
// 00663aeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663aef  50                   push eax
// 00663af0  e87bf4ffff           call 0x662f70
// 00663af5  85f6                 test esi, esi
// 00663af7  7514                 jne 0x663b0d
// 00663af9  ffd3                 call ebx
// 00663afb  33c0                 xor eax, eax
// 00663afd  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663b00  7202                 jb 0x663b04
// 00663b02  ffd3                 call ebx
// 00663b04  83c704               add edi, 4
// 00663b07  eba8                 jmp 0x663ab1
// 00663b09  8b06                 mov eax, dword ptr [esi]
// 00663b0b  ebd5                 jmp 0x663ae2
// 00663b0d  8b06                 mov eax, dword ptr [esi]
// 00663b0f  ebec                 jmp 0x663afd
// 00663b11  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00663b14  85c0                 test eax, eax
// 00663b16  7404                 je 0x663b1c
// 00663b18  8be8                 mov ebp, eax
// 00663b1a  eb84                 jmp 0x663aa0
// 00663b1c  5f                   pop edi
// 00663b1d  5e                   pop esi
// 00663b1e  5d                   pop ebp
// 00663b1f  5b                   pop ebx
// 00663b20  59                   pop ecx
// 00663b21  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
