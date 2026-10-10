// from server: 72% by colin
// roc 2007-08 005ca1e0  unit: seg_005c0000  size: 155 bytes

extern "C" int __fastcall sub_5ca0c0(int a, int b);

int __fastcall sub_5ca1e0(int a, int b, int c, int d)
{
    unsigned char *esi;
    unsigned char *ecx;
    unsigned char *edi;
    int ebp;
    int result;
    int flag;

    esi = (unsigned char *)a;
    ebp = b;
    flag = 1;
    if (esi[1] == 0x5e) {
        flag = 0;
        esi += 1;
    }
    ecx = (unsigned char *)d;
    esi += 1;
    if (esi >= ecx)
        goto done;
    edi = esi + 2;
    while (1) {
        unsigned char al = *esi;
        if (al == 0x25) {
            unsigned char bl = esi[1];
            esi += 1;
            edi += 1;
            result = sub_5ca0c0(ebp, (int)bl);
            if (result != 0)
                goto found;
            ecx = (unsigned char *)d;
            goto next;
        }
        if (esi[1] == 0x2d) {
            if (edi < ecx) {
                int eax = *esi;
                esi += 2;
                edi += 2;
                if (eax > ebp)
                    goto next;
                int edx = *esi;
                if (ebp > edx)
                    goto next;
                goto found;
            }
        }
        {
            int eax = al;
            if (eax == ebp)
                goto found;
        }
    next:
        esi += 1;
        edi += 1;
        if (esi < ecx)
            continue;
        break;
    }
done:
    return flag == 0;
found:
    return flag;
}
