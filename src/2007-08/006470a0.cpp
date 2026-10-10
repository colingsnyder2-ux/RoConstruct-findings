// from server: 51% by colin
struct CXTPCommandBar {
    char pad[0x17c];
    int field_17c;
    int method_646570();
    int method_643980();
    int method_646990(void*);
    void method_6470a0(int, int);
};

extern "C" {
    unsigned long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
    void* __stdcall func_77ddb8(const char*);
    void __stdcall func_77ddbc(void*);
}

void CXTPCommandBar::method_6470a0(int arg1, int arg2) {
    int local = 0;
    if (arg2 == 0) {
        goto cleanup;
    }
    {
        int* p = (int*)method_646570();
        int edx = p[8];
        int ecx = arg1;
        ecx = -ecx;
        ecx = (ecx >> 31);
        ecx = ecx & arg2;
        SendMessageA((void*)edx, 0x2856, ecx, 0);
    }
    {
        int* result = (int*)method_643980();
        if (result != 0) {
            int val;
            if (arg1 == 0) {
                val = 0;
            } else {
                int c = *(int*)(arg2 + 0x8c);
                if (c > 0) {
                    val = c;
                } else {
                    int* p2 = *(int**)(arg2 + 0x158);
                    if (p2 != 0) {
                        int c2 = p2[0xc];
                        if (c2 > 0) {
                            val = c2;
                        } else {
                            val = p2[0xa];
                        }
                    } else {
                        val = *(int*)(arg2 + 0x84);
                    }
                }
            }
            result[0x2e] = val;
        }
    }
    {
        int eax = *(int*)(arg2 + 0x80);
        if (eax == field_17c) {
            if (arg1 != 0) {
                goto cleanup;
            }
            field_17c = -1;
            goto cleanup;
        }
        field_17c = -1;
        if (arg1 != 0) {
            int* vtbl = *(int**)arg2;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0x17];
            fn((void*)arg2, (void*)&local);
            local = 0;
            arg1 = 1;
        } else {
            void* str = func_77ddb8("list<T> too long");
            local = 1;
            arg1 = 2;
            method_646990(str);
            if (arg1 & 2) {
                arg1 &= ~2;
                func_77ddbc((void*)&local);
            }
            if (arg1 & 1) {
                func_77ddbc((void*)&local);
            }
            goto cleanup;
        }
        method_646990((void*)&local);
        if (arg1 & 2) {
            arg1 &= ~2;
            func_77ddbc((void*)&local);
        }
        if (arg1 & 1) {
            func_77ddbc((void*)&local);
        }
    }
cleanup:
    return;
}
