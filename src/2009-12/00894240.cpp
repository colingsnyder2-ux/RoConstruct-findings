// from server: 36% by atomic.potato
extern "C" void* __stdcall sub_7F3860(unsigned int);
extern "C" void __stdcall sub_7F3DDC(void*);
extern "C" void* __stdcall sub_8044D0();
extern "C" void __stdcall sub_805020(void*, void*);
extern "C" void __stdcall sub_845230(void*, void*);
extern "C" void __stdcall sub_8452C0(void*, void*);
extern "C" void __stdcall sub_846C60(void*);
extern "C" void __stdcall sub_847E40(void*);
extern "C" void* __stdcall sub_892CF0(void*, void*);
extern "C" void* __stdcall sub_894090(void*, void*);
extern "C" void __stdcall sub_8941F0(void*, void*);
extern "C" void __stdcall sub_894220(void*, void*, void*);

extern void* g_98B20C;

struct CXTPMenuBar
{
    char pad_000[0xFC];
    void* field_0FC;
    char pad_100[0xB4];
    void* field_1B4;
    void* field_1B8;
    void* field_1BC;
    void* method_184();
    void* method_14C(void*, int);
    void SetActive(void*, void*);
};

void CXTPMenuBar::SetActive(void* a, void* b)
{
    void* p = a;
    if (p == 0)
        return;
    if (field_1B8 == 0)
        return;
    if (field_1B8 == p)
        return;

    void* v = sub_8044D0();
    if (*(void**)((char*)v + 0x60) == 0)
    {
        if (sub_894090(field_1BC, p) == 0)
        {
            if (b != 0)
            {
                void* vt = *(void**)this;
                void* fn = *(void**)((char*)vt + 0x14C);
                ((void (__thiscall*)(void*, void*, int))fn)(this, b, 1);
            }
            goto done;
        }
    }

    if (b == 0)
    {
        if (sub_894090(field_1BC, p) == 0)
            return;
    }

    if (sub_894090(field_1BC, field_1B8) == 0)
    {
        void* obj = sub_7F3860(0x38);
        void* local = obj;
        if (obj != 0)
        {
            void* t = sub_8044D0();
            void* r = sub_892CF0(obj, t);
            obj = r;
        }
        else
        {
            obj = 0;
        }
        sub_7F3DDC(*(void**)((char*)obj + 0x20));
        *(void**)((char*)obj + 0x20) = field_0FC;
        void* q = (char*)field_0FC + 4;
        ((void (__stdcall*)(void*))g_98B20C)(q);
        sub_894220(field_1BC, field_1B8, obj);
    }

    sub_8452C0(field_0FC, 0);
    sub_7F3DDC(field_0FC);
    field_0FC = 0;

    if (sub_894090(field_1BC, p) == 0)
    {
        void* obj2 = sub_7F3860(0x38);
        void* local2 = obj2;
        if (obj2 != 0)
        {
            void* t = sub_8044D0();
            void* r = sub_892CF0(obj2, t);
            obj2 = r;
        }
        else
        {
            obj2 = 0;
        }
        field_0FC = *(void**)((char*)obj2 + 0x20);
        void* q = (char*)field_0FC + 4;
        ((void (__stdcall*)(void*))g_98B20C)(q);
        sub_8452C0(field_0FC, this);
        if (b != 0)
        {
            void* vt = *(void**)this;
            void* fn = *(void**)((char*)vt + 0x14C);
            ((void (__thiscall*)(void*, void*, int))fn)(this, b, 1);
        }
        sub_847E40(field_0FC);
        sub_894220(field_1BC, p, obj2);
    }
    else
    {
        field_0FC = *(void**)((char*)sub_894090(field_1BC, p) + 0x20);
        sub_8452C0(field_0FC, this);
        void* q = (char*)field_0FC + 4;
        ((void (__stdcall*)(void*))g_98B20C)(q);
        if (*(void**)((char*)field_0FC + 0x3C) == 0 && b != 0)
        {
            void* obj3 = sub_7F3860(0x44);
            void* local3 = obj3;
            if (obj3 != 0)
            {
                sub_846C60(obj3);
                obj3 = local3;
            }
            else
            {
                obj3 = 0;
            }
            sub_805020(obj3, b);
            sub_845230(field_0FC, obj3);
        }
        if (p == field_1B4)
        {
            sub_8941F0(field_1BC, p);
        }
    }

done:
    {
        void* vt = *(void**)this;
        void* fn = *(void**)((char*)vt + 0x184);
        ((void (__thiscall*)(void*))fn)(this);
    }
    field_1B8 = p;
}
