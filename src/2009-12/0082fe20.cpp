// roc 2009-12 0082fe20  unit: CXTPColorManager  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082fe20
//
// 0082fe20  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0082fe25  56                   push esi
// 0082fe26  57                   push edi
// 0082fe27  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082fe2b  8bf1                 mov esi, ecx
// 0082fe2d  7425                 je 0x82fe54
// 0082fe2f  d9442418             fld dword ptr [esp + 0x18]
// 0082fe33  e8b84efcff           call 0x7f4cf0
// 0082fe38  50                   push eax
// 0082fe39  6a00                 push 0
// 0082fe3b  57                   push edi
// 0082fe3c  8bce                 mov ecx, esi
// 0082fe3e  e8bdffffff           call 0x82fe00
// 0082fe43  e8a84efcff           call 0x7f4cf0
// 0082fe48  50                   push eax
// 0082fe49  8bce                 mov ecx, esi
// 0082fe4b  e8d0f1ffff           call 0x82f020
// 0082fe50  d95c2418             fstp dword ptr [esp + 0x18]
// 0082fe54  d9442418             fld dword ptr [esp + 0x18]
// 0082fe58  b802000000           mov eax, 2
// 0082fe5d  d95c2414             fstp dword ptr [esp + 0x14]
// 0082fe61  d9e8                 fld1 
// 0082fe63  d95c2418             fstp dword ptr [esp + 0x18]
// 0082fe67  d9442414             fld dword ptr [esp + 0x14]
// 0082fe6b  a801                 test al, 1
// 0082fe6d  740a                 je 0x82fe79
// 0082fe6f  d9442418             fld dword ptr [esp + 0x18]
// 0082fe73  d8c9                 fmul st(1)
// 0082fe75  d95c2418             fstp dword ptr [esp + 0x18]
// 0082fe79  d1e8                 shr eax, 1
// 0082fe7b  7408                 je 0x82fe85
// 0082fe7d  dcc8                 fmul st(0), st(0)
// 0082fe7f  d95c2414             fstp dword ptr [esp + 0x14]
// 0082fe83  ebe2                 jmp 0x82fe67
// 0082fe85  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082fe89  ddd8                 fstp st(0)
// 0082fe8b  d9442418             fld dword ptr [esp + 0x18]
// 0082fe8f  50                   push eax
// 0082fe90  d95c241c             fstp dword ptr [esp + 0x1c]
// 0082fe94  57                   push edi
// 0082fe95  d9442420             fld dword ptr [esp + 0x20]
// 0082fe99  8bce                 mov ecx, esi
// 0082fe9b  d95c2420             fstp dword ptr [esp + 0x20]
// 0082fe9f  e8bcfeffff           call 0x82fd60
// 0082fea4  d9442418             fld dword ptr [esp + 0x18]
// 0082fea8  5f                   pop edi
// 0082fea9  ded9                 fcompp 
// 0082feab  5e                   pop esi
// 0082feac  dfe0                 fnstsw ax
// 0082feae  f6c405               test ah, 5
// 0082feb1  7a08                 jp 0x82febb
// 0082feb3  b801000000           mov eax, 1
// 0082feb8  c21000               ret 0x10
// 0082febb  33c0                 xor eax, eax
// 0082febd  c21000               ret 0x10
// copied from an identical function in another client (function ?LongColor@CXTPColorManager@@AAEHKKHM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp