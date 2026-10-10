// from server: 83% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_p;
    void IsActive(int);
};

void CXTPCustomizeSheet::IsActive(int arg)
{
    void* p = *(void**)((char*)m_p + 0x58);
    if (!p)
        return;

    int state = *(int*)((char*)p + 0xf8);
    int flag = (state == 2 || state == 3 || state == 4 || state == 1);

    int val;
    int v90 = *(int*)((char*)p + 0x90);
    if (v90)
    {
        val = v90;
    }
    else
    {
        int v88 = *(int*)((char*)p + 0x88);
        if (v88 > 0)
        {
            val = v88;
        }
        else
        {
            void* v158 = *(void**)((char*)p + 0x158);
            if (v158)
            {
                int v2c = *(int*)((char*)v158 + 0x2c);
                if (v2c > 0)
                    val = v2c;
                else
                    val = *(int*)((char*)v158 + 0x28);
            }
            else
            {
                val = *(int*)((char*)p + 0x84);
            }
        }
    }

    int result = (val > 0 && flag);

    typedef void (__thiscall *Fn)(void*, int);
    Fn fn = (Fn)(*(void***)this)[0];
    fn(this, result);
}
