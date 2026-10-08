// from server: 83% by colin
// roc 2007-08 00448490  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448490

int __fastcall sub_448490(const unsigned short* esi)
{
    if (esi == 0)
        return 0;

    const unsigned short* eax = esi;
    const unsigned short* ecx = esi;

    if (*esi != 0)
    {
        do
        {
            unsigned short dx = *ecx;
            if (dx != 0)
                ecx += 1;

            if (dx == 0x5c || dx == 0x2f || dx == 0x3a)
                eax = ecx;
        } while (*ecx != 0);
    }

    return (int)(eax - esi);
}
