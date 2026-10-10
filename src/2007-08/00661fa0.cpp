// from server: 42% by colin
extern "C" void __cdecl sub_006301e4(void*);
extern "C" void __cdecl sub_00630688(int, int);
extern "C" void* __cdecl sub_00653880();
extern "C" void __cdecl sub_006617e0(void*);
extern "C" void* __cdecl sub_00661ce0(void*);
extern "C" void __cdecl sub_00661dd0(void*);
extern "C" void __cdecl sub_00661e20(void*, void*);
extern "C" void* __cdecl sub_00661f30(void*);
extern "C" void* __cdecl sub_006625a0();
extern "C" void __cdecl sub_00685760(void*, const char*, void*);
extern "C" void __cdecl sub_00685780(void*, const char*, void*, int);

// Minimal interface for the object whose methods are called through vtables.
struct IUnknownLike
{
    virtual void method0();
    virtual void* method4(void*, int);
    virtual void* method8(void**);
    virtual void method60(void*);
    virtual void* method64(void*, void**);
    virtual void* method70(const char*);
    virtual void method94(const char*);
    virtual void method108(void*);
};

struct CInstanceRecord
{
    // Layout inferred from the target assembly.
    char pad_0000[0x24];
    int   field_0024;          // 0x24
    int   field_0028;          // 0x28
    char pad_002c[0x10];
    int   field_003c;          // 0x3c
    int   field_0040;          // 0x40
    char pad_0044[0x04];
    int   field_0048;          // 0x48
    char pad_004c[0x04];

    void func_00661fa0(void* arg);
};

void CInstanceRecord::func_00661fa0(void* arg)
{
    void* local_14 = 0;
    void* local_18 = 0;
    void* local_1c = 0;
    void* local_20 = 0;
    void* local_24 = 0;
    void* local_28 = 0;
    void* local_2c = 0;
    void* local_30 = 0;
    void* local_34 = 0;
    void* local_38 = 0;
    void* local_3c = 0;
    void* local_40 = 0;

    sub_00685760(arg, (const char*)0x7ab048, &this->field_003c);
    sub_00685760(arg, (const char*)0x7c80fc, &this->field_0048);

    local_34 = (void*)(this->field_003c != 0);
    sub_00685760(arg, (const char*)0x7c8f1c, &local_34);

    void* vtable = *(void**)arg;
    void* edi = (void*)this->field_0028;
    local_1c = edi;

    IUnknownLike* obj = (IUnknownLike*)arg;
    obj->method94((const char*)0x7a9028);
    void* ebx = obj;

    local_24 = ebx;
    local_34 = 0;

    if (*(int*)((char*)arg + 0x24) == 0)
    {
        void* eax = ((IUnknownLike*)ebx)->method4(edi, 1);
        local_20 = eax;

        int i = 0;
        if (local_1c > 0)
        {
            while (i < (int)local_1c)
            {
                void* item = 0;
                if (i >= 0 && i < this->field_0028)
                {
                    item = *(void**)(this->field_0024 + i * 4);
                }
                local_14 = item;

                if (item == 0)
                {
                    sub_00630688(6, 0);
                }
                else
                {
                    void* esi = ((IUnknownLike*)ebx)->method8(&local_20);
                    local_28 = esi;
                    local_34 = (void*)1;

                    void* eax2 = sub_00653880();
                    if (((IUnknownLike*)esi)->method64(eax2, &local_14) != 0)
                    {
                        void* ecx = local_14;
                        void* edx = *(void**)ecx;
                        ((void (__thiscall*)(void*, void*))*(void**)((char*)edx + 0x108))(ecx, esi);
                    }

                    sub_006301e4(esi);
                    local_34 = 0;
                }

                i++;
            }
        }
    }
    else
    {
        sub_00661dd0(this);

        void* eax = ((IUnknownLike*)ebx)->method4(0, 1);
        local_18 = eax;

        if (eax != 0)
        {
            local_14 = 0;
            do
            {
                void* esi = ((IUnknownLike*)ebx)->method8(&local_18);
                local_28 = esi;
                local_34 = (void*)2;

                void* eax2 = sub_00653880();
                if (((IUnknownLike*)esi)->method64(eax2, &local_14) != 0)
                {
                    void* ecx = local_14;
                    void* edx = *(void**)ecx;
                    ((void (__thiscall*)(void*, void*))*(void**)((char*)edx + 0x108))(ecx, esi);
                }

                if (local_14 == 0)
                {
                    sub_00630688(6, 0);
                }
                else
                {
                    sub_00661e20(this, local_14);
                }

                sub_006301e4(esi);
                local_34 = 0;
            } while (local_18 != 0);
        }
    }

    if (local_1c != 0)
    {
        void* edi2 = ((IUnknownLike*)arg)->method70((const char*)0x7c8f10);
        local_3c = edi2;
        local_34 = (void*)3;

        if (*(int*)((char*)arg + 0x24) != 0)
        {
            if (this->field_003c != 0)
            {
                sub_006301e4((void*)this->field_003c);
                this->field_003c = 0;
            }
        }

        void* eax3 = sub_006625a0();
        void* edi3 = &this->field_003c;
        if (((IUnknownLike*)local_3c)->method64(eax3, (void**)edi3) != 0)
        {
            void* ecx = *(void**)edi3;
            void* edx = *(void**)ecx;
            ((void (__thiscall*)(void*, void*))*(void**)((char*)edx + 0x108))(ecx, local_3c);
        }

        void* edi4 = *(void**)edi3;
        if (edi4 != 0)
        {
            if (*(int*)((char*)arg + 0x24) != 0)
            {
                *(void**)((char*)edi4 + 0x4c) = this;
            }
        }

        sub_006301e4(local_3c);
        local_34 = 0;
    }

    if (*(unsigned int*)((char*)arg + 0x28) > 0x15)
    {
        void* eax4 = sub_00661ce0(this);
        local_3c = eax4;

        sub_00685780(arg, (const char*)0x7c8f04, &local_40, 0);

        if (local_3c != 0)
        {
            void* esi2 = ((IUnknownLike*)arg)->method70((const char*)0x7c8ef8);
            local_28 = esi2;
            local_34 = (void*)4;

            void* eax5 = sub_00661f30(this);
            ((IUnknownLike*)eax5)->method60(esi2);

            if (esi2 != 0)
            {
                sub_006301e4(esi2);
            }
        }
        else
        {
            void* ebp2 = (void*)this->field_0040;
            if (ebp2 != 0)
            {
                sub_006617e0(ebp2);
            }
        }
    }

    ((IUnknownLike*)ebx)->method0();
    local_38 = (void*)0xffffffff;
}
