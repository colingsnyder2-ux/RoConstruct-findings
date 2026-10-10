// from server: 49% by colin
struct CXTPCommandBar {
    char pad0[0xf8];
    void* m_pItems; // 0xf8
    int method_6465d0();
    int method_643980();
    int method_643950();
    int method_644710();
    int method_630430(int, int, int, int);
    void method_643690(int);
    void method_738418(int, int);
    void method_73841e(int, int);
    void method_646ca0();
};

struct Item {
    char pad0[0x5c];
    int m_field5c; // 0x5c
    char pad1[0x74 - 0x60];
    void* m_pField74; // 0x74
    char pad2[0x84 - 0x78];
    int m_field84; // 0x84
    char pad3[0x9c - 0x88];
    int m_field9c; // 0x9c
    char pad4[0xd4 - 0xa0];
    unsigned char m_fieldd4; // 0xd4
    int method_80(int);
    int method_120();
};

struct Helper {
    char pad0[0x28];
    void* m_pData; // 0x28
    int m_count; // 0x2c
};

struct Helper2 {
    char pad0[0x120];
    int m_field120; // 0x120
};

struct Local {
    char pad0[0x1c];
    int m_field1c; // 0x1c
    char pad1[0x24 - 0x20];
    int m_field24; // 0x24
    char pad2[0x30 - 0x28];
    void* m_field30; // 0x30
    char pad3[0x44 - 0x34];
    int m_field44; // 0x44
    int m_field48; // 0x48
};

void CXTPCommandBar::method_646ca0()
{
    int esi_val;
    int ebx_val;
    int ebp_val = 0;
    int local10;
    int local14;
    int local18;
    int local24;
    Local local1c;

    esi_val = this->method_6465d0();
    local14 = esi_val;
    ebx_val = this->method_643980();

    if (ebx_val != 0) {
        void* p = *(void**)((char*)ebx_val + 0x74);
        local10 = *(int*)((char*)p + 0x84);
    } else {
        local10 = 0;
    }

    if (esi_val == 0) {
        return;
    }

    Helper2* h2 = (Helper2*)this->method_643950();
    local18 = h2->m_field120;

    local1c.m_field1c = 0x7c66f0;
    local1c.m_field48 = 0;
    local1c.m_field44 = 0;
    local1c.m_field30 = this;
    local24 = 0;

    int count = this->method_644710();
    if (count <= 0) {
        goto end;
    }

    do {
        Item* item;
        if (local24 >= 0 && local24 < ((Helper*)this->m_pItems)->m_count) {
            item = (Item*)((Helper*)this->m_pItems)->m_pData;
            item = (Item*)((char*)item + local24 * 4);
            item = *(Item**)item;
        } else {
            item = 0;
        }

        int r = item->method_80(0x29);
        if (r != 0) {
            goto next;
        }

        item->method_120();

        if (local18 != 0) {
            goto next;
        }

        if ((item->m_fieldd4 & 8) != 0) {
            goto next;
        }

        local1c.m_field48 = (int)item;
        local1c.m_field44 = item->m_field84;

        int r2 = this->method_630430(0xbd11ffff, (int)&local1c.m_field1c, 0, 0);
        if (r2 != 0) {
            goto next;
        }

        int r3 = this->method_630430(local1c.m_field1c, -1, (int)&local1c.m_field1c, 0);
        if (r3 != 0) {
            goto next;
        }

        if (ebx_val != 0 && *(int*)((char*)ebx_val + 0x5c) != 0) {
            if (item->m_field9c == -1) {
                goto next;
            }
            this->method_643690(1);
        } else {
            this->method_73841e(local14, local10);
        }

    next:
        local24++;
        int c = this->method_644710();
        if (local24 < c) {
            continue;
        }
        break;
    } while (1);

end:
    this->method_738418(local14, local10);
}
