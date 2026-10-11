// from server: 29% by colin
struct CXTPImageManagerIconSet {
    char pad0[0x28];
    char m_list1[0x1c];
    char m_list2[0x1c];
    char m_list3[0x1c];
    int m_count;
    char pad1[0x14];
    int m_count2;
    char pad2[0x18];
    int m_count3;
    char pad3[0x18];
    void Clear();
};

extern "C" void __stdcall sub_6a067a(void* p);
extern "C" void __stdcall sub_6a0944();
extern "C" void __stdcall sub_6a0be4();
extern "C" void __stdcall sub_6a3130();
extern "C" void __stdcall sub_6bc390();
extern "C" void __stdcall sub_6bd200();
extern "C" void __stdcall sub_6bd400();
extern "C" void __stdcall sub_70e1d0();
extern "C" void __stdcall sub_768e50();

void CXTPImageManagerIconSet::Clear()
{
    int i;
    int* p;
    int flag;

    flag = -(this->m_count != 0);
    if (flag != 0)
    {
        char* list = (char*)this + 0x28;
        do
        {
            void* item;
            sub_768e50();
            item = *(void**)((char*)this + 0x10);
            sub_6bd200();
            sub_6a0be4();
            flag = -(this->m_count != 0);
        } while (flag != 0);
    }
    sub_6a3130();

    flag = -(this->m_count2 != 0);
    if (flag != 0)
    {
        do
        {
            void* item;
            sub_768e50();
            item = *(void**)((char*)this + 0x10);
            if (item != 0)
            {
                sub_6bd400();
                sub_6a067a(item);
            }
            flag = -(this->m_count2 != 0);
        } while (flag != 0);
    }
    sub_6a3130();

    i = 0;
    if (this->m_count3 > 0)
    {
        do
        {
            if (i < 0 || i >= this->m_count3)
                sub_6a0944();
            p = (int*)((char*)this + 0x48);
            p = (int*)p[i];
            if (p != 0)
            {
                sub_6bc390();
                sub_6a067a(p);
            }
            i++;
        } while (i < this->m_count3);
    }
    sub_70e1d0();
}
