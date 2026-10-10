// from server: 42% by tester
// roc 2008-06 006a06c0  unit: CXTPNewToolbarDlg  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a06c0

extern "C" {
    int __stdcall sub_62feea(int);
    int __stdcall sub_62fe36();
    int __stdcall sub_62fe3c();
    int __stdcall sub_6303fa(int, int, int);
    int __stdcall sub_631ad0(int, int);
    int __stdcall sub_632910(int, int);
    int __stdcall sub_6b2e40(int);
    int __stdcall sub_6b3010(int, int);
}

extern "C" {
    int __stdcall imp_77dcd0();
    int __stdcall imp_77dd98();
    int __stdcall imp_77dcb8(int, int);
    int __stdcall imp_77ddbc(int);
    int __stdcall imp_77ddac(int);
    int __stdcall imp_77d5a4(int, int, int);
}

struct CXTPNewToolbarDlg {
    char pad[0x74];
    int field_74;
    int field_78;
    int field_7c;
    int field_80;
    int field_84;

    void sub_6a06c0();
};

void CXTPNewToolbarDlg::sub_6a06c0()
{
    int local_18 = 0;
    int local_1c;
    int local_20;
    int local_2c = 0;
    int local_14 = 0;
    int i;

    sub_62feea(1);

    local_1c = (int)(this + 0x78);

    if (imp_77dcd0() != 0) {
        sub_6b2e40(sub_6b3010(0x23cc, 0x10));
        return;
    }

    field_74 = 0xe800;
    local_18 = *(int*)(field_80 + 0x84);

    if (local_18 <= 0)
        goto done;

    for (i = 0; i < local_18; i++) {
        int v = sub_632910(field_80, i);
        int edx = field_7c;

        if (edx == 0) {
            int edi = *(int*)(v + 0xd4);
            int ecx = field_74;
            if (edi == ecx) {
                int eax = ecx + 1;
                field_74 = eax;
                if (eax >= 0xe8ff) {
                    sub_6b2e40(sub_6b3010(0x10, 0x23cd));
                    sub_62fe3c();
                    return;
                }
                goto next;
            }
        }

        if (edx == v)
            goto skip;

        sub_631ad0(v, (int)&local_20);
        local_14 |= 1;
        local_2c = 0;
        {
            int eax = imp_77dd98();
            int r = imp_77dcb8((int)(this + 0x78), eax);
            if (r == 0)
                local_20 = 1;
            else
                local_20 = 0;
        }

        if (local_14 & 1) {
            local_14 &= ~1;
            imp_77ddbc((int)&local_20);
        }
        local_2c = -1;

        if (local_20 != 0)
            goto found;

    next:
        ;
    }

done:
    sub_62fe36();
    return;

skip:
    local_20 = 0;
    goto after_test;

found:
    imp_77ddac((int)&local_18);
    local_2c = 1;
    {
        int eax = imp_77dd98();
        imp_77d5a4((int)&local_1c, 0x23ce, eax);
    }
    sub_6303fa(imp_77dd98(), 0x10, 0);
    imp_77ddbc((int)&local_18);
    return;

after_test:
    ;
}
