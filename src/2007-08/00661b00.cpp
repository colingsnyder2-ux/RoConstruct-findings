// from server: 35% by colin
struct VCXTPReportRecords;

struct CXTPHeapObjectT
{
    void Add(int index, void* item, int flag);
    void RemoveAt(int index, int count);
};

struct VCXTPReportRecords
{
    int GetCount();
    void* GetAt(int index);
    int GetIndex(void* item);
    void RemoveAt(int index, int count);
    void Add(int index, void* item, int flag);
    void Sort();
    void DoSomething(int a, int b);
};

extern "C" int __stdcall sub_663C50();
extern "C" int __stdcall sub_661700();
extern "C" int __stdcall sub_692220();
extern "C" void __stdcall sub_6D26B0();
extern "C" void __stdcall sub_63B850();
extern "C" void __stdcall sub_661820();

int VCXTPReportRecords::GetCount()
{
    return sub_663C50();
}

void* VCXTPReportRecords::GetAt(int index)
{
    return (void*)sub_661700();
}

int VCXTPReportRecords::GetIndex(void* item)
{
    return sub_692220();
}

void VCXTPReportRecords::RemoveAt(int index, int count)
{
    sub_6D26B0();
}

void VCXTPReportRecords::Add(int index, void* item, int flag)
{
    sub_63B850();
}

void VCXTPReportRecords::Sort()
{
    sub_661820();
}

void VCXTPReportRecords::DoSomething(int a, int b)
{
    int count1 = GetCount();
    if (a > count1)
        a = GetCount();

    int count2 = GetCount();
    int i = 0;
    int j = 0;

    while (i < count2)
    {
        void* item = GetAt(i);
        int idx = GetIndex(item);
        if (*(int*)((char*)item + 0x50) != (int)this)
        {
            RemoveAt(idx, 1);
            if (idx < a)
                a--;
            i++;
            if (i >= count2)
                break;
            while (i < count2)
            {
                void* item2 = GetAt(i);
                if (*(int*)((char*)item2 + 0x50) == (int)this)
                {
                    int idx2 = GetIndex(item2);
                    if (idx2 > idx)
                        *(int*)((char*)item2 + 0x4c) -= 1;
                }
                i++;
            }
            break;
        }
        i++;
    }

    int k = 0;
    while (k < count2)
    {
        void* item = GetAt(k);
        if (*(int*)((char*)item + 0x50) == (int)this)
        {
            Add(a, item, 1);
            a++;
        }
        k++;
    }

    Sort();
}
