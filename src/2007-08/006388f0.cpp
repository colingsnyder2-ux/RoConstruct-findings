// from server: 45% by colin
struct CPatchedControlComboBox {
    char pad[0x178];
    int field_178;
    char pad2[0x1a0 - 0x17c];
    int field_1a0;
    int field_1a4;
    char pad3[0x1d0 - 0x1a8];
    int field_1d0;

    int sub_637300();
    int sub_636be0(void*);
    int sub_636c40(void*);
    int sub_6364f0(int*, int*);
    void sub_6387f0();
    void sub_63c4a0(int);
    void sub_6388f0();
};

extern "C" {
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
    int __stdcall sub_77dcc8(void*);
    int __stdcall sub_77dd98(void*);
    int __stdcall sub_77ddac(void*);
    int __stdcall sub_77ddbc(void*);
}

void CPatchedControlComboBox::sub_6388f0()
{
    int ebp = this->field_178;
    int edi = this->sub_637300();

    if (this->field_1d0 != 0)
        goto end;
    if (this->field_1a0 == 0)
        goto end;
    if (this->field_1a4 != 0)
        goto end;
    if (ebp == 0)
        goto end;
    if (*(int*)(ebp + 0x20) == 0)
        goto end;
    if (edi == 0)
        goto end;

    {
        char buf[0x18];
        this->sub_636be0(buf);
        *(int*)(buf + 0x18) = 0;
        int count = sub_77dcc8(buf);
        if (count <= 0)
            goto cleanup;

        {
            int a = 0;
            int b = 0;
            this->sub_6364f0(&a, &b);
            if (b != a)
                goto cleanup;
            if (count != a)
                goto cleanup;

            int* vtbl = *(int**)edi;
            int idx = sub_77dd98(buf);
            int (__thiscall *fn)(void*, int, int) = (int (__thiscall *)(void*, int, int))vtbl[0x1fc / 4];
            int result = fn((void*)edi, idx, 0);
            if (result == -1)
                goto cleanup;

            char buf2[0x14];
            sub_77ddac(buf2);
            int* vtbl2 = *(int**)edi;
            void (__thiscall *fn2)(void*, int, void*) = (void (__thiscall *)(void*, int, void*))vtbl2[0x20c / 4];
            fn2((void*)edi, result, buf2);
            this->sub_636c40(buf2);
            int len = sub_77dcc8(buf2);
            int hwnd = *(int*)(ebp + 0x20);
            SendMessageA((void*)hwnd, 0xb1, len, 0);
            SendMessageA((void*)hwnd, 0xb7, 0, 0);
            sub_77ddbc(buf2);
        }

    cleanup:
        this->field_1a4 = 1;
        *(int*)(buf + 0x18) = -1;
        sub_77ddbc(buf);
    }

end:
    this->sub_6387f0();
    this->sub_63c4a0(5);
}
