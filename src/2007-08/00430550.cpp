// from server: 41% by colin
struct CPatchedControlComboBox {
    bool sub_430550(int* a2);
};

extern "C" void* __cdecl sub_64EA60(int);
extern "C" int __cdecl sub_630202(void*, void*);
extern "C" void* __cdecl sub_67EE70();
extern "C" int __cdecl sub_63A130();
extern "C" void __cdecl sub_63A120(void*, int);
extern "C" void __cdecl sub_40ACC0(void*, int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_42EC50(void*);
extern "C" void __cdecl sub_635F20(void*, int);
extern "C" void __cdecl sub_63A700(void*, void*);
extern "C" void* __cdecl sub_6725F0();
extern "C" void* __cdecl sub_6778D0(int);
extern "C" void __cdecl sub_671070(void*, void*);
extern "C" void __cdecl sub_44C9B0(void*);
extern "C" void __cdecl sub_67D1E0(void*, void*, int, int, int, int);
extern "C" void __cdecl sub_6773E0(void*, void*, int, int);
extern "C" void __cdecl sub_42F1C0(void*, int);
extern "C" void __cdecl sub_6301E4(void*);

extern int g_78ACE8;
extern int g_78ACE0;

bool CPatchedControlComboBox::sub_430550(int* a2)
{
    if (a2[2] == 0)
        return false;

    void* v = sub_64EA60(a2[5]);
    if (sub_630202(v, 0) == 0)
        return false;

    int code = a2[0];
    if (code == 0xE12B || code == 0xE12C)
    {
        a2[7] = 4;
        return true;
    }

    if (code == 0x80DB || code == 0x80F6)
    {
        void* p = sub_67EE70();
        a2[1] = (int)p;
        int flags = sub_63A130();
        flags &= ~8;
        sub_63A120(p, flags);
        sub_40ACC0(p, 1);
        return true;
    }

    if (code == 0x80C3)
    {
        void* mem = sub_62FEF6(0x1D4);
        void* obj;
        if (mem != 0)
        {
            sub_42EC50(mem);
            obj = mem;
        }
        else
        {
            obj = 0;
        }
        sub_635F20(obj, 1);
        sub_63A700(obj, &g_78ACE8);
        sub_40ACC0(obj, 1);
        sub_63A120(obj, 0x20);
        a2[1] = (int)obj;
        return true;
    }

    if (code == 0x8040)
    {
        void* b = sub_6725F0();
        void* s = sub_6778D0(*(int*)((char*)this + 0xD8));
        sub_671070(b, s);
        void* mem = sub_62FEF6(0x178);
        void* obj;
        if (mem != 0)
        {
            sub_44C9B0(mem);
            obj = mem;
        }
        else
        {
            obj = 0;
        }
        sub_67D1E0(*(void**)((char*)s + 0xF8), obj, 0x8D, 0, -1, 0);
        sub_6773E0(s, &g_78ACE0, 0x3ED, 0);
        sub_42F1C0(s, 1);
        sub_6301E4(s);
        a2[1] = (int)b;
        return true;
    }

    return false;
}
