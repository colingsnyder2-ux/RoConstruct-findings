// from server: 38% by colin
struct CXTPCustomizeSheet_CCustomizeEdit
{
    void* f_0;
    float f_4;
    void* f_8;
    void* f_c;
    void* f_10;
    void* f_14;
    void* f_18;
    void* f_1c;
    void* f_20;
    void* f_24;
    void* f_28;
    void* f_2c;
    void* f_30;
    void* f_34;
    void* f_38;
    void* f_3c;
    void* f_40;
    void* f_44;
    void* f_48;
    void* f_4c;
    void* f_50;
    void* f_54;
    void* f_58;
    void* f_5c;
    void* f_60;
    void* f_64;
    void* f_68;
    void* f_6c;
    void* f_70;
    void* f_74;
    void* f_78;
    void* f_7c;
    void* f_80;
    void* f_84;
    void* f_88;
    void* f_8c;
    void* f_90;
    void* f_94;
    void* f_98;
    int f_9c;
    void* f_a0;
    void* f_a4;
    void* f_a8;
    void* f_ac;
    void* f_b0;
    void* f_b4;
    void* f_b8;
    void* f_bc;
    void* f_c0;
    void* f_c4;
    void* f_c8;
    void* f_cc;
    void* f_d0;
    void* f_d4;
    void* f_d8;
    void* f_dc;
    void* f_e0;
    void* f_e4;
    void* f_e8;
    void* f_ec;
    void* f_f0;
    void* f_f4;
    void* f_f8;
    void* f_fc;
    void* f_100;
    void* f_104;
    void* f_108;
    void* f_10c;
    void* f_110;
    void* f_114;
    void* f_118;
    void* f_11c;
    void* f_120;
    void* f_124;
    void* f_128;
    void* f_12c;
    void* f_130;
    void* f_134;
    void* f_138;
    void* f_13c;
    void* f_140;
    void* f_144;
    void* f_148;
    void* f_14c;
    void* f_150;
    void* f_154;
    void* f_158;

    void* f_6c7b90(void* arg);
    void* f_6c6a60(void* arg);
    void* f_6c6e10(void* arg);
    void* f_63a000();
    void* f_63a580();
};

extern "C" void __stdcall f_630b8c(void* dst, int val, unsigned int size);
extern "C" void* __stdcall f_668f70();
extern "C" void* __stdcall f_668770(void* self, int val);
extern "C" int __stdcall f_77dcd0(void* self);
extern "C" void* __stdcall f_77dd98(void* self);
extern "C" int __stdcall f_77dcb8(void* self, void* arg);
extern "C" void __stdcall f_77ddbc(void* self);

void* CXTPCustomizeSheet_CCustomizeEdit::f_6c7b90(void* arg)
{
    void* result = arg;
    f_630b8c(arg, 0, 0x54);
    *(int*)((char*)arg + 4) = 0x44000000;

    int v = this->f_9c;
    if (v == -1)
    {
        void* p = this->f_158;
        if (p != 0)
        {
            this->f_63a580();
            v = this->f_9c;
        }
    }

    if (v != 0)
    {
        void* mgr = f_668f70();
        void* obj = f_668770(mgr, 8);
        *(void**)((char*)arg + 0x14) = obj;

        void* tmp1;
        this->f_6c6a60(&tmp1);
        int flag = 1;
        int b = f_77dcd0(tmp1);
        if (b == 0)
        {
            void* tmp2;
            void* e = this->f_6c6e10(&tmp2);
            void* tmp3;
            this->f_6c6a60(&tmp3);
            void* s = f_77dd98(e);
            int r = f_77dcb8(tmp3, s);
            if (r == 0)
            {
                flag = 0;
            }
            f_77ddbc(&tmp3);
            f_77ddbc(&tmp2);
        }
        else
        {
            flag = 0;
        }
        f_77ddbc(&tmp1);

        if (flag != 0)
        {
            void* mgr2 = f_668f70();
            void* obj2 = f_668770(mgr2, 0x11);
            *(void**)((char*)arg + 0x14) = obj2;
        }
    }
    else
    {
        void* mgr2 = f_668f70();
        void* obj2 = f_668770(mgr2, 0x11);
        *(void**)((char*)arg + 0x14) = obj2;
    }

    void* p = this->f_63a000();
    void** vtbl = *(void***)p;
    void* (*fn)(void*, void*) = (void* (*)(void*, void*))vtbl[0x68 / 4];
    void* r = fn(p, this);
    *(void**)((char*)arg + 0x40) = r;

    return result;
}
