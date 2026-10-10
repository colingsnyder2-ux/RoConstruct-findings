// from server: 54% by colin
struct CRobloxTreeCtrl {
    char pad[0x0c];
    void* field_0c;
    char pad2[0x34 - 0x10];
    void* field_34;
    void sub_665c30(void*, int, int);
    void sub_666230(void*, void*, int);
    int sub_73863a(void*, int);
    void vfunc_4c(void*, int);
    void method(int, int, int);
};

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, unsigned int);

void CRobloxTreeCtrl::method(int a, int b, int c)
{
    if (b == 0) {
        if ((c & 0xc) != 0) {
            if ((c & 4) != 0)
                return;
            field_0c = (void*)a;
            return;
        }
        if (sub_73863a(field_34, 2) & 2) {
        } else {
            vfunc_4c((void*)a, 0);
        }
        sub_665c30((void*)a, 3, 3);
        return;
    }

    if (b & 4) {
        if (field_0c == 0) {
            field_0c = SendMessageA(field_34, 0x110a, 9, 0);
        }
        sub_665c30((void*)a, 1, 1);
        sub_666230(field_0c, (void*)a, ~(b >> 3) & 1);
        return;
    }

    if (b & 8) {
        field_0c = 0;
        return;
    }

    if (sub_73863a(field_34, 2) & 2) {
    } else {
        vfunc_4c((void*)a, 0);
    }
    sub_665c30((void*)a, 3, 3);
}
