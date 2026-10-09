// from server: 82% by colin
// roc 2007-08 004129b0  unit: VCContent::?$CComAggObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004129b0
//
// 004129b0  8b442404             mov eax, dword ptr [esp + 4]
// 004129b4  83f807               cmp eax, 7
// 004129b7  7720                 ja 0x4129d9
// 004129b9  ff2485e0294100       jmp dword ptr [eax*4 + 0x4129e0]
// 004129c0  66b81500             mov ax, 0x15
// 004129c4  c3                   ret 
// 004129c5  66b84600             mov ax, 0x46
// 004129c9  c3                   ret 
// 004129ca  66b85000             mov ax, 0x50
// 004129ce  c3                   ret 
// 004129cf  66b8bb01             mov ax, 0x1bb
// 004129d3  c3                   ret 
// 004129d4  66b83804             mov ax, 0x438
// 004129d8  c3                   ret 
// 004129d9  6633c0               xor ax, ax
// 004129dc  c3                   ret 
// 004129dd  8d4900               lea ecx, [ecx]
// 004129e0  c02941               shr byte ptr [ecx], 0x41
// 004129e3  00c5                 add ch, al
// 004129e5  294100               sub dword ptr [ecx], eax
// 004129e8  ca2941               retf 0x4129
// 004129eb  00cf                 add bh, cl
// 004129ed  294100               sub dword ptr [ecx], eax
// 004129f0  d929                 fldcw word ptr [ecx]
// 004129f2  41                   inc ecx
// 004129f3  00d9                 add cl, bl
// 004129f5  294100               sub dword ptr [ecx], eax
// 004129f8  d929                 fldcw word ptr [ecx]
// 004129fa  41                   inc ecx
// 004129fb  00d4                 add ah, dl
// 004129fd  294100               sub dword ptr [ecx], eax

struct VCContent_CComAggObject
{
    unsigned short GetValue(int index);
};

unsigned short VCContent_CComAggObject::GetValue(int index)
{
    switch (index)
    {
    case 0:
        return 0x15;
    case 1:
        return 0x46;
    case 2:
        return 0x50;
    case 3:
        return 0x1bb;
    case 4:
        return 0x438;
    default:
        return 0;
    }
}
