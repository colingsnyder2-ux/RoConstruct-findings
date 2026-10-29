// roc 2010-06 004034c0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004034c0
//
// 004034c0  8b442404             mov eax, dword ptr [esp + 4]
// 004034c4  83f807               cmp eax, 7
// 004034c7  7725                 ja 0x4034ee
// 004034c9  ff2485f4344000       jmp dword ptr [eax*4 + 0x4034f4]
// 004034d0  b815000000           mov eax, 0x15
// 004034d5  c3                   ret 
// 004034d6  b846000000           mov eax, 0x46
// 004034db  c3                   ret 
// 004034dc  b850000000           mov eax, 0x50
// 004034e1  c3                   ret 
// 004034e2  b8bb010000           mov eax, 0x1bb
// 004034e7  c3                   ret 
// 004034e8  b838040000           mov eax, 0x438
// 004034ed  c3                   ret 
// 004034ee  33c0                 xor eax, eax
// 004034f0  c3                   ret 
// 004034f1  8d4900               lea ecx, [ecx]
// 004034f4  d03440               sal byte ptr [eax + eax*2], 1
// 004034f7  00d6                 add dh, dl
// 004034f9  3440                 xor al, 0x40
// 004034fb  00dc                 add ah, bl
// 004034fd  3440                 xor al, 0x40
// 004034ff  00e2                 add dl, ah
// 00403501  3440                 xor al, 0x40
// 00403503  00ee                 add dh, ch
// 00403505  3440                 xor al, 0x40
// 00403507  00ee                 add dh, ch
// 00403509  3440                 xor al, 0x40
// 0040350b  00ee                 add dh, ch
// 0040350d  3440                 xor al, 0x40
// 0040350f  00e8                 add al, ch
// 00403511  3440                 xor al, 0x40
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