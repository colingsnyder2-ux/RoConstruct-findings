// roc 2009-12 00403470  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403470
//
// 00403470  8b442404             mov eax, dword ptr [esp + 4]
// 00403474  83f807               cmp eax, 7
// 00403477  7725                 ja 0x40349e
// 00403479  ff2485a4344000       jmp dword ptr [eax*4 + 0x4034a4]
// 00403480  b815000000           mov eax, 0x15
// 00403485  c3                   ret 
// 00403486  b846000000           mov eax, 0x46
// 0040348b  c3                   ret 
// 0040348c  b850000000           mov eax, 0x50
// 00403491  c3                   ret 
// 00403492  b8bb010000           mov eax, 0x1bb
// 00403497  c3                   ret 
// 00403498  b838040000           mov eax, 0x438
// 0040349d  c3                   ret 
// 0040349e  33c0                 xor eax, eax
// 004034a0  c3                   ret 
// 004034a1  8d4900               lea ecx, [ecx]
// 004034a4  80344000             xor byte ptr [eax + eax*2], 0
// 004034a8  863440               xchg byte ptr [eax + eax*2], dh
// 004034ab  008c3440009234       add byte ptr [esp + esi + 0x34920040], cl
// 004034b2  40                   inc eax
// 004034b3  009e3440009e         add byte ptr [esi - 0x61ffbfcc], bl
// 004034b9  3440                 xor al, 0x40
// 004034bb  009e34400098         add byte ptr [esi - 0x67ffbfcc], bl
// 004034c1  3440                 xor al, 0x40
// copied from an identical function in another client (function ?f@@YAHI@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
int __cdecl f(unsigned int value)
{
    switch (value)
    {
    case 0: return 21;
    case 1: return 70;
    case 2: return 80;
    case 3: return 443;
    case 7: return 1080;
    default: return 0;
    }
}