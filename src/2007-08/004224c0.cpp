// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" __declspec(dllimport) unsigned int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
extern "C" __declspec(dllimport) int __stdcall CompareStringA(unsigned long, unsigned long, const char*, int, const char*, int);

struct CRobloxTreeCtrlNode {
    char pad0[0x0c];
    int field_0c;
    char pad1[0x30 - 0x10];
    void* field_30;
    void* field_34;
    char pad3[0x48 - 0x38];
    int field_48;
    int field_4c;

    void func();
};

extern "C" void* __cdecl sub_422410(int);
extern "C" void* __cdecl sub_6304ae(void*, void*);
extern "C" void __cdecl sub_40d550(void*);
extern "C" void __cdecl sub_5595a0(void*);

void CRobloxTreeCtrlNode::func()
{
    void* local_14 = 0;
    void* local_1c = 0;
    void* local_20 = 0;
    int local_24 = -1;
    int local_2c = 0x67;
    void* local_30 = 0;
    int local_34 = -1;
    int local_38 = -1;
    int local_3c = -1;
    void* local_40 = 0;
    void* local_44 = 0;
    void* local_48 = 0;
    void* local_4c = 0;
    void* local_50 = 0;
    void* local_54 = 0;
    void* local_58 = 0;
    void* local_5c = 0;
    void* local_60 = 0;
    void* local_64 = 0;
    void* local_68 = 0;
    void* local_6c = 0;

    local_58 = sub_422410(this->field_4c);
    local_54 = local_58;
    local_5c = this;

    int ecx_val;
    if (this->field_34 != 0) {
        ecx_val = *(int*)((char*)this->field_34 + 0x44);
    } else {
        ecx_val = 0xffff0000;
    }

    local_34 = ecx_val;
    local_24 = 0xffff0001;

    void* hwnd = *(void**)((char*)this->field_30 + 0x20);
    void* result = (void*)SendMessageA(hwnd, 0x110a, 4, ecx_val);
    void* edi = result;

    if (edi == 0) {
        goto cleanup;
    }

    while (1) {
        void* ebx = sub_6304ae(this->field_30, edi);

        if (this->field_48 > *(int*)((char*)ebx + 0x48)) {
            local_14 = edi;
            goto do_insert;
        }
        if (this->field_48 != *(int*)((char*)ebx + 0x48)) {
            goto cleanup;
        }

        {
            void* vtbl = *(void**)this->field_30;
            void* (*getstr)(void*, void*) = *(void* (**)(void*, void*))((char*)vtbl + 0x14c);
            void* strptr = getstr(this->field_30, &local_1c);

            void* src2 = *(void**)((char*)strptr + 4);
            local_20 = src2;
            local_24 = 0;
            local_2c = (int)&local_20;

            if (src2 != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)src2 + 4), 1);
            }

            sub_40d550(&local_2c);

            void* ebp = local_20;
            if (ebp != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)ebp + 4), -1) == 1) {
                    void* v = *(void**)ebp;
                    void (*dtor)(void*) = *(void (**)(void*))((char*)v + 4);
                    dtor(ebp);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)ebp + 8), -1) == 1) {
                        void* v2 = *(void**)ebp;
                        void (*dtor2)(void*) = *(void (**)(void*))((char*)v2 + 8);
                        dtor2(ebp);
                    }
                }
            }

            int cmp = CompareStringA(0, 0,
                (const char*)(*(int*)((char*)ebx + 0x0c) + 0xc8), -1,
                (const char*)(this->field_0c + 0xc8), -1);

            local_24 = -1;

            if (cmp == 0) {
                sub_5595a0(&local_24);
                goto cleanup;
            }

            local_14 = edi;
            sub_5595a0(&local_24);
        }

do_insert:
        {
            void* p = (char*)this->field_30 + 0x54;
            void* vtbl = *(void**)p;
            void* (*fn)(void*, void*, int) = *(void* (**)(void*, void*, int))((char*)vtbl + 4);
            edi = fn(p, edi, 1);
            if (edi != 0) {
                continue;
            }
            break;
        }
    }

cleanup:
    {
        void* hwnd2 = *(void**)((char*)this->field_30 + 0x20);
        local_30 = local_14;
        SendMessageA(hwnd2, 0x1100, 0, (long)&local_30);
    }
}
