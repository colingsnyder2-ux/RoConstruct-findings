// from server: 51% by colin
struct CXTPPrintPageHeaderFooter
{
    void func_0067fa10();
};

extern "C" void __stdcall sub_77ddac(void*);
extern "C" char __stdcall sub_77dcd0(void*);
extern "C" void __stdcall sub_77dd74(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);

void sub_630250(void*, void*);
void* sub_62ff50(void*);
void* sub_738880(void*);

void CXTPPrintPageHeaderFooter::func_0067fa10()
{
    char local[8];
    void* p;

    sub_77ddac(local);
    p = 0;

    if (this != 0)
    {
        sub_630250(this, local);
        if (!sub_77dcd0(local))
        {
            void** vtbl = *(void***)this;
            void* (__thiscall *fn)(void*) = (void* (__thiscall *)(void*))vtbl[0x128 / 4];
            if (fn(this) != 0)
                goto done;
        }

        void* r = sub_62ff50(this);
        if (r != 0)
        {
            void* r2 = sub_62ff50(this);
            sub_630250(r2, local);
        }

        if (sub_77dcd0(local))
        {
            void* r3 = sub_738880(this);
            if (r3 != 0)
            {
                void* r4 = sub_738880(this);
                sub_630250(r4, local);
            }
        }
    }

done:
    sub_77dd74(local, &p);
    sub_77ddbc(local);
}
