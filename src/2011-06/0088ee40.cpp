// roc 2011-06 0088ee40  unit: CXTPRibbonTheme  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088ee40
//
// 0088ee40  6aff                 push -1
// 0088ee42  68de91a000           push 0xa091de
// 0088ee47  64a100000000         mov eax, dword ptr fs:[0]
// 0088ee4d  50                   push eax
// 0088ee4e  83ec24               sub esp, 0x24
// 0088ee51  53                   push ebx
// 0088ee52  55                   push ebp
// 0088ee53  56                   push esi
// 0088ee54  57                   push edi
// 0088ee55  a12058c900           mov eax, dword ptr [0xc95820]
// 0088ee5a  33c4                 xor eax, esp
// 0088ee5c  50                   push eax
// 0088ee5d  8d442438             lea eax, [esp + 0x38]
// 0088ee61  64a300000000         mov dword ptr fs:[0], eax
// 0088ee67  8bf9                 mov edi, ecx
// 0088ee69  837c245000           cmp dword ptr [esp + 0x50], 0
// 0088ee6e  740f                 je 0x88ee7f
// 0088ee70  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0088ee74  50                   push eax
// 0088ee75  e896fbffff           call 0x88ea10
// 0088ee7a  e980010000           jmp 0x88efff
// 0088ee7f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0088ee83  55                   push ebp
// 0088ee84  8d4c241c             lea ecx, [esp + 0x1c]
// 0088ee88  e803dffcff           call 0x85cd90
// 0088ee8d  8b742448             mov esi, dword ptr [esp + 0x48]
// 0088ee91  8d8fbc000000         lea ecx, [edi + 0xbc]
// 0088ee97  51                   push ecx
// 0088ee98  56                   push esi
// 0088ee99  8d4c2430             lea ecx, [esp + 0x30]
// 0088ee9d  e87ee2fcff           call 0x85d120
// 0088eea2  51                   push ecx
// 0088eea3  8bcc                 mov ecx, esp
// 0088eea5  89642450             mov dword ptr [esp + 0x50], esp
// 0088eea9  6864d0ac00           push 0xacd064
// 0088eeae  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0088eeb6  ff15002ea400         call dword ptr [0xa42e00]
// 0088eebc  51                   push ecx
// 0088eebd  8bcc                 mov ecx, esp
// 0088eebf  89642458             mov dword ptr [esp + 0x58], esp
// 0088eec3  685cd0ac00           push 0xacd05c
// 0088eec8  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0088eecd  ff15002ea400         call dword ptr [0xa42e00]
// 0088eed3  8bcf                 mov ecx, edi
// 0088eed5  c644244802           mov byte ptr [esp + 0x48], 2
// 0088eeda  e8a1030000           call 0x88f280
// 0088eedf  8bc8                 mov ecx, eax
// 0088eee1  c644244800           mov byte ptr [esp + 0x48], 0
// 0088eee6  e865f00500           call 0x8edf50
// 0088eeeb  51                   push ecx
// 0088eeec  8bcc                 mov ecx, esp
// 0088eeee  89642450             mov dword ptr [esp + 0x50], esp
// 0088eef2  6850d0ac00           push 0xacd050
// 0088eef7  89442458             mov dword ptr [esp + 0x58], eax
// 0088eefb  ff15002ea400         call dword ptr [0xa42e00]
// 0088ef01  51                   push ecx
// 0088ef02  8bcc                 mov ecx, esp
// 0088ef04  89642450             mov dword ptr [esp + 0x50], esp
// 0088ef08  685cd0ac00           push 0xacd05c
// 0088ef0d  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0088ef12  ff15002ea400         call dword ptr [0xa42e00]
// 0088ef18  8bcf                 mov ecx, edi
// 0088ef1a  c644244804           mov byte ptr [esp + 0x48], 4
// 0088ef1f  e85c030000           call 0x88f280
// 0088ef24  8bc8                 mov ecx, eax
// 0088ef26  c644244800           mov byte ptr [esp + 0x48], 0
// 0088ef2b  e820f00500           call 0x8edf50
// 0088ef30  51                   push ecx
// 0088ef31  8bcc                 mov ecx, esp
// 0088ef33  8964244c             mov dword ptr [esp + 0x4c], esp
// 0088ef37  6840d0ac00           push 0xacd040
// 0088ef3c  89442454             mov dword ptr [esp + 0x54], eax
// 0088ef40  ff15002ea400         call dword ptr [0xa42e00]
// 0088ef46  51                   push ecx
// 0088ef47  8bcc                 mov ecx, esp
// 0088ef49  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ef4d  685cd0ac00           push 0xacd05c
// 0088ef52  c644244c05           mov byte ptr [esp + 0x4c], 5
// 0088ef57  ff15002ea400         call dword ptr [0xa42e00]
// 0088ef5d  8bcf                 mov ecx, edi
// 0088ef5f  c644244806           mov byte ptr [esp + 0x48], 6
// 0088ef64  e817030000           call 0x88f280
// 0088ef69  8bc8                 mov ecx, eax
// 0088ef6b  c644244800           mov byte ptr [esp + 0x48], 0
// 0088ef70  e8dbef0500           call 0x8edf50
// 0088ef75  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088ef79  6a00                 push 0
// 0088ef7b  52                   push edx
// 0088ef7c  8bd8                 mov ebx, eax
// 0088ef7e  8b442458             mov eax, dword ptr [esp + 0x58]
// 0088ef82  50                   push eax
// 0088ef83  8d4c2424             lea ecx, [esp + 0x24]
// 0088ef87  51                   push ecx
// 0088ef88  56                   push esi
// 0088ef89  e8f2fdfcff           call 0x85ed80
// 0088ef8e  8bc8                 mov ecx, eax
// 0088ef90  e81bfefcff           call 0x85edb0
// 0088ef95  53                   push ebx
// 0088ef96  53                   push ebx
// 0088ef97  8d542420             lea edx, [esp + 0x20]
// 0088ef9b  52                   push edx
// 0088ef9c  8bce                 mov ecx, esi
// 0088ef9e  e877bef7ff           call 0x80ae1a
// 0088efa3  6a01                 push 1
// 0088efa5  8bce                 mov ecx, esi
// 0088efa7  e842d61300           call 0x9cc5ee
// 0088efac  8b1e                 mov ebx, dword ptr [esi]
// 0088efae  33c0                 xor eax, eax
// 0088efb0  39456c               cmp dword ptr [ebp + 0x6c], eax
// 0088efb3  8bcf                 mov ecx, edi
// 0088efb5  0f95c0               setne al
// 0088efb8  83c011               add eax, 0x11
// 0088efbb  50                   push eax
// 0088efbc  e8ef05f8ff           call 0x80f5b0
// 0088efc1  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0088efc4  50                   push eax
// 0088efc5  8bce                 mov ecx, esi
// 0088efc7  ffd2                 call edx
// 0088efc9  8b3e                 mov edi, dword ptr [esi]
// 0088efcb  6a25                 push 0x25
// 0088efcd  8d44241c             lea eax, [esp + 0x1c]
// 0088efd1  83c554               add ebp, 0x54
// 0088efd4  50                   push eax
// 0088efd5  8bcd                 mov ecx, ebp
// 0088efd7  ff15a826a400         call dword ptr [0xa426a8]
// 0088efdd  50                   push eax
// 0088efde  8bcd                 mov ecx, ebp
// 0088efe0  ff15c82da400         call dword ptr [0xa42dc8]
// 0088efe6  8b5770               mov edx, dword ptr [edi + 0x70]
// 0088efe9  50                   push eax
// 0088efea  8bce                 mov ecx, esi
// 0088efec  ffd2                 call edx
// 0088efee  8d4c2428             lea ecx, [esp + 0x28]
// 0088eff2  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0088effa  e8a1e1fcff           call 0x85d1a0
// 0088efff  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088f003  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f00a  59                   pop ecx
// 0088f00b  5f                   pop edi
// 0088f00c  5e                   pop esi
// 0088f00d  5d                   pop ebp
// 0088f00e  5b                   pop ebx
// 0088f00f  83c430               add esp, 0x30
// 0088f012  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp