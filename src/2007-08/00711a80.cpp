// from server: 37% by colin
struct CXTPPropertyGridItemColor {
    void OnInplaceButtonDown(int, int);
};

extern "C" {
    void __cdecl sub_6A3980(void*);
    void __cdecl sub_6A39A0(void*);
    void __cdecl sub_6D2AA0(void*, void*);
    void* __cdecl sub_62FEF6(unsigned int);
    void* __cdecl sub_6301C0(void*);
    void* __cdecl sub_68E630(void*, int, int, int);
    void* __cdecl sub_711190(void*, int);
    int __cdecl sub_711540(void*, int);
    void __cdecl sub_7384C0(void*, int, int);
    void __cdecl sub_738D42(void*, int, int);
    void* __stdcall GetParent(void*);
    int __stdcall IsWindow(void*);
    long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

void CXTPPropertyGridItemColor::OnInplaceButtonDown(int param1, int param2)
{
    char buf[0x14];
    int local1c;
    int local18;
    int local38;
    int local30;
    int local34;
    int local3c;
    int ebp_val;
    int edi_val;
    int ebx_val;
    void* pObj;
    int i;

    sub_6A3980(buf);
    local38 = 0;
    sub_6D2AA0(buf, (char*)this + 0x130);

    local3c = *(int*)((char*)this + 0x74);
    edi_val = *(int*)((char*)this + 0xb8);
    ebx_val = *(int*)((char*)this + 0xac);

    if (local3c != param1) {
        if (param1 != 0) {
            if (ebx_val & 1) {
                ebp_val = 0x272e;
                edi_val = -1;
            } else {
                int tmp = *(int*)((char*)this + 0xbc);
                if (edi_val == tmp) {
                    ebp_val = 0x2729;
                } else {
                    edi_val = tmp;
                    ebp_val = 0x272c;
                }
            }
        } else if (param1 == -1) {
            ebp_val = 0x272d;
        } else {
            void* p = sub_711190(this, param1);
            if (p == 0) {
                goto cleanup;
            }
            int tmp = *(int*)((char*)p + 0x120);
            if (edi_val == tmp) {
                ebp_val = 0x2729;
            } else {
                edi_val = tmp;
                ebp_val = 0x272c;
            }
        }
    } else {
        pObj = sub_62FEF6(0x12c);
        local38 = (int)pObj;
        if (pObj != 0) {
            void* parent = GetParent(*(void**)((char*)this + 0x20));
            void* cls = sub_6301C0(parent);
            ebx_val &= 0x60;
            pObj = sub_68E630(cls, edi_val, edi_val, ebx_val);
        } else {
            pObj = 0;
        }
        *(void**)((char*)this + 0x160) = pObj;
        int* vtbl = *(int**)pObj;
        int (__stdcall *fn)(void*) = (int (__stdcall *)(void*))vtbl[0x140/4];
        local38 = 0;
        int result = fn(pObj);
        if (result == 1) {
            void* p = *(void**)((char*)this + 0x160);
            int tmp = *(int*)((char*)p + 0x124);
            if (edi_val == tmp) {
                ebp_val = 0x2729;
            } else {
                ebp_val = 0x272c;
                edi_val = tmp;
            }
            if (*(int*)0x8c97ac >= *(int*)((char*)this + 0x70)) {
                sub_738D42((void*)0x8c97a4, 0, 1);
            }
            if (sub_711540(this, edi_val) == 0) {
                sub_7384C0((void*)0x8c97a4, *(int*)0x8c97ac, edi_val);
            }
        } else {
            ebp_val = 0x272d;
        }
        void* p = *(void**)((char*)this + 0x160);
        if (p != 0) {
            int* vtbl2 = *(int**)p;
            void (__stdcall *fn2)(void*, int) = (void (__stdcall *)(void*, int))vtbl2[1];
            fn2(p, 1);
            *(void**)((char*)this + 0x160) = 0;
        }
    }

cleanup:
    i = 0;
    if (local1c > 0) {
        int* arr = (int*)local18;
        while (i < local1c) {
            if (i >= 0 && i < local1c) {
                void* hwnd = (void*)arr[i];
                if (IsWindow(hwnd)) {
                    SendMessageA(hwnd, ebp_val, edi_val, local3c);
                }
            }
            i++;
        }
    }
    local30 = -1;
    sub_6A39A0(buf);
}
