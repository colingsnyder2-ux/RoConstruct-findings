// roc 2009-12 0082eeb0  unit: CXTPReportSelectedRows  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082eeb0
//
// 0082eeb0  6aff                 push -1
// 0082eeb2  68d8bd9500           push 0x95bdd8
// 0082eeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0082eebd  50                   push eax
// 0082eebe  51                   push ecx
// 0082eebf  53                   push ebx
// 0082eec0  55                   push ebp
// 0082eec1  56                   push esi
// 0082eec2  57                   push edi
// 0082eec3  a10052b600           mov eax, dword ptr [0xb65200]
// 0082eec8  33c4                 xor eax, esp
// 0082eeca  50                   push eax
// 0082eecb  8d442418             lea eax, [esp + 0x18]
// 0082eecf  64a300000000         mov dword ptr fs:[0], eax
// 0082eed5  8bf1                 mov esi, ecx
// 0082eed7  89742414             mov dword ptr [esp + 0x14], esi
// 0082eedb  e862750f00           call 0x926442
// 0082eee0  33ff                 xor edi, edi
// 0082eee2  8d4e20               lea ecx, [esi + 0x20]
// 0082eee5  897c2420             mov dword ptr [esp + 0x20], edi
// 0082eee9  c706a4639f00         mov dword ptr [esi], 0x9f63a4
// 0082eeef  e83cffffff           call 0x82ee30
// 0082eef4  8d4e40               lea ecx, [esi + 0x40]
// 0082eef7  e834ffffff           call 0x82ee30
// 0082eefc  8d4e60               lea ecx, [esi + 0x60]
// 0082eeff  e82cffffff           call 0x82ee30
// 0082ef04  8d8e80000000         lea ecx, [esi + 0x80]
// 0082ef0a  e821ffffff           call 0x82ee30
// 0082ef0f  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0082ef15  e816ffffff           call 0x82ee30
// 0082ef1a  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0082ef20  e80bffffff           call 0x82ee30
// 0082ef25  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0082ef2b  e800ffffff           call 0x82ee30
// 0082ef30  8d9e00010000         lea ebx, [esi + 0x100]
// 0082ef36  8bcb                 mov ecx, ebx
// 0082ef38  e8f3feffff           call 0x82ee30
// 0082ef3d  8dae20010000         lea ebp, [esi + 0x120]
// 0082ef43  8bcd                 mov ecx, ebp
// 0082ef45  e8e6feffff           call 0x82ee30
// 0082ef4a  8d8e40010000         lea ecx, [esi + 0x140]
// 0082ef50  e8dbfeffff           call 0x82ee30
// 0082ef55  ba01000000           mov edx, 1
// 0082ef5a  89be68010000         mov dword ptr [esi + 0x168], edi
// 0082ef60  89be68040000         mov dword ptr [esi + 0x468], edi
// 0082ef66  89be60040000         mov dword ptr [esi + 0x460], edi
// 0082ef6c  8d4f3f               lea ecx, [edi + 0x3f]
// 0082ef6f  c7866404000006000000 mov dword ptr [esi + 0x464], 6
// 0082ef79  899660010000         mov dword ptr [esi + 0x160], edx
// 0082ef7f  899664010000         mov dword ptr [esi + 0x164], edx
// 0082ef85  8d8668020000         lea eax, [esi + 0x268]
// 0082ef8b  83cfff               or edi, 0xffffffff
// 0082ef8e  8bff                 mov edi, edi
// 0082ef90  89b8fc000000         mov dword ptr [eax + 0xfc], edi
// 0082ef96  8938                 mov dword ptr [eax], edi
// 0082ef98  83c004               add eax, 4
// 0082ef9b  2bca                 sub ecx, edx
// 0082ef9d  75f1                 jne 0x82ef90
// 0082ef9f  8bce                 mov ecx, esi
// 0082efa1  e86a1c0000           call 0x830c10
// 0082efa6  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0082efac  51                   push ecx
// 0082efad  d91c24               fstp dword ptr [esp]
// 0082efb0  68ffad5500           push 0x55adff
// 0082efb5  68ffd58c00           push 0x8cd5ff
// 0082efba  8bcb                 mov ecx, ebx
// 0082efbc  e89ffeffff           call 0x82ee60
// 0082efc1  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0082efc7  51                   push ecx
// 0082efc8  d91c24               fstp dword ptr [esp]
// 0082efcb  68ffcf8b00           push 0x8bcfff
// 0082efd0  68fe8e4b00           push 0x4b8efe
// 0082efd5  8bcd                 mov ecx, ebp
// 0082efd7  e884feffff           call 0x82ee60
// 0082efdc  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0082efe2  51                   push ecx
// 0082efe3  d91c24               fstp dword ptr [esp]
// 0082efe6  68ffd49700           push 0x97d4ff
// 0082efeb  68fff2c800           push 0xc8f2ff
// 0082eff0  8d8e40010000         lea ecx, [esi + 0x140]
// 0082eff6  e865feffff           call 0x82ee60
// 0082effb  8bc6                 mov eax, esi
// 0082effd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082f001  64890d00000000       mov dword ptr fs:[0], ecx
// 0082f008  59                   pop ecx
// 0082f009  5f                   pop edi
// 0082f00a  5e                   pop esi
// 0082f00b  5d                   pop ebp
// 0082f00c  5b                   pop ebx
// 0082f00d  83c410               add esp, 0x10
// 0082f010  c3                   ret 
// copied from an identical function in another client (function ??0CXTPColorManager@@AAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp