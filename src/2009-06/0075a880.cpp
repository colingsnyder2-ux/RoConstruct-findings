// from server: 77% by atomic.potato
struct MyXTPCommandBars
{
    char pad_0000[0x28];
    void** m_items;
    int m_count;
    char pad_0030[0x0c];
    MyXTPCommandBars* m_next;

    void func_0075a880(int a, int b, int c);
};

extern "C" void __stdcall sub_00718ce4();

void MyXTPCommandBars::func_0075a880(int a, int b, int c)
{
    MyXTPCommandBars* p = this;
    do
    {
        int i = 0;
        while (i < p->m_count)
        {
            if (i >= 0 && i < p->m_count)
            {
                if (i >= p->m_count)
                {
                    sub_00718ce4();
                }
                void* item = p->m_items[i];
                if (item)
                {
                    if (*(int*)((char*)item + 0xac) == 0)
                    {
                        void** vt = *(void***)item;
                        void (__stdcall *fn)(int, int, int) = (void (__stdcall *)(int, int, int))vt[0x138 / 4];
                        fn(a, b, c);
                    }
                }
            }
            i++;
        }
        p = p->m_next;
    } while (p && *(int*)((char*)a + 0xc) == 0);
}
