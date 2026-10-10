// from server: 12% by colin
struct CategoryInfo;

struct CArrayBase {
    int m_nSize;
    int m_nGrowBy;
    void* m_pData;
};

struct CategoryInfoArray {
    int m_nSize;
    int m_nGrowBy;
    CategoryInfo** m_pData;
};

struct CommandBars {
    char pad[0x138];
    void* m_pUnknown138;
    char pad2[0x4];
    CategoryInfoArray m_categories;
    int m_nSelected;

    void AddCategory(CategoryInfo* info, int index);
};

struct CategoryInfo {
    char pad[0x28];
    int m_nCount;
    void* m_pItems;
};

extern "C" void* __stdcall sub_0062FEF6(unsigned int size);
extern "C" void __stdcall sub_0062FF20();
extern "C" void __stdcall sub_0063B850(void* p, int a, void* b, int c);
extern "C" void* __stdcall sub_00676200(void* p, void* q);
extern "C" void __stdcall sub_0067C5B0(void* p, void* a, int b, int c);
extern "C" void* __stdcall sub_006B3010();

extern "C" void* __stdcall sub_77DDAC();
extern "C" void* __stdcall sub_77DD98(void* p);
extern "C" void __stdcall sub_77DDBC(void* p);

void CommandBars::AddCategory(CategoryInfo* info, int index)
{
    void* v1;
    void* v2;
    CategoryInfo* cat;
    int i;
    int j;
    int n;

    v1 = sub_77DDAC();
    v2 = sub_006B3010();
    (*(void (__thiscall**)(void*, void*, void*))(*(int*)v2 + 4))(v2, &v1, info);

    cat = (CategoryInfo*)sub_0062FEF6(8);
    if (cat != 0) {
        void* p = sub_77DD98(*(void**)((char*)m_pUnknown138 + 0xb8));
        cat = (CategoryInfo*)sub_00676200(cat, p);
    } else {
        cat = 0;
    }

    if (m_categories.m_nSize > 0) {
        for (i = 0; i < m_categories.m_nSize; i++) {
            CategoryInfo* c = m_categories.m_pData[i];
            void* items = *(void**)((char*)c + 4);
            n = *(int*)((char*)items + 0x2c);
            for (j = 0; j < n; j++) {
                void* item;
                if (j >= 0 && j < n) {
                    if (j >= *(int*)((char*)items + 0x2c)) {
                        sub_0062FF20();
                    }
                    item = *(void**)(*(int*)((char*)items + 0x28) + j * 4);
                } else {
                    item = 0;
                }
                sub_0067C5B0(*(void**)((char*)cat + 4), item, -1, 0);
            }
        }
    }

    if (index == -1) {
        index = m_categories.m_nSize;
    }

    sub_0063B850(&m_categories, index, cat, 1);

    sub_77DDBC(&v1);
}
