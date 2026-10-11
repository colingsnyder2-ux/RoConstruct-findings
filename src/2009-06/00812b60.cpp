// from server: 27% by atomic.potato
struct CXTPRibbonGroups {
    char pad0[0x20];
    int m_nCount;
    char pad24[4];
    void* m_pArray;
    void Add(void* p);
    void Remove(void* p);
    void func_00812110();
    void func_00811260();
    void func_00812b60(void* p);
};

extern "C" char* __cdecl func_0080e750();
extern "C" void __cdecl func_00752720(void* p, int n);
extern "C" void __cdecl func_00718fa8(void* p);
extern "C" void __cdecl func_007195a2(int a, int b);

void CXTPRibbonGroups::func_00812b60(void* p)
{
    void* v = p;
    if (*(int*)((char*)v + 0x28) == 0)
    {
        int n = m_nCount;
        void* it = ((void**)(*(void***)v))[1];
        void* coll = 0;
        void* e = ((void* (__thiscall*)(void*, int, int))it)(v, n, 0);
        int i = 0;
        if (n > 0)
        {
            while (i < n)
            {
                void* item;
                if (i >= 0 && i < m_nCount)
                    item = ((void**)m_pArray)[i];
                else
                    item = 0;
                void* obj = ((void* (__thiscall*)(void*, void**))((*(void***)e))[2])(e, &item);
                char* g = func_0080e750();
                void* res = ((void* (__thiscall*)(void*, char*, void**))((*(void***)obj))[0x64/4])(obj, g, &coll);
                if (res)
                {
                    ((void (__thiscall*)(void*, void*))((*(void***)coll))[0x64/4])(coll, obj);
                }
                func_00718fa8(obj);
                i++;
            }
        }
        ((void (__thiscall*)(void*, int))((*(void***)e))[0])(e, 1);
    }
    else
    {
        void* e = ((void* (__thiscall*)(void*))((*(void***)v))[0x94/4])(v);
        void* coll = 0;
        void* obj = ((void* (__thiscall*)(void*, int, int))((*(void***)e))[1])(e, 0, 0);
        func_00812110();
        if (obj)
        {
            while (obj)
            {
                void* item = ((void* (__thiscall*)(void*, void**))((*(void***)e))[2])(e, &coll);
                *(void**)((char*)item + 0x24) = this;
                char* g = func_0080e750();
                void* res = ((void* (__thiscall*)(void*, char*, void**))((*(void***)item))[0x64/4])(item, g, &coll);
                if (res)
                {
                    ((void (__thiscall*)(void*, void*))((*(void***)coll))[0x64/4])(coll, item);
                }
                if (coll)
                {
                    func_00752720(&m_pArray, m_nCount);
                    func_00811260();
                }
                func_00718fa8(item);
                obj = ((void* (__thiscall*)(void*, void**))((*(void***)e))[2])(e, &coll);
            }
        }
        ((void (__thiscall*)(void*, int))((*(void***)e))[0])(e, 1);
    }
}
