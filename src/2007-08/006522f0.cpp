// from server: 55% by colin
struct QModelIndex
{
    int r;
    int c;
    void* p;
    void* m;
};

struct QTreeWidgetItem
{
    void* vtable;
    char pad[0x10];
    int field_14;
};

struct QTreeWidget
{
    char pad[0x60];
    int field_60;
    int field_64;
    int field_68;
    char pad2[0x2b4 - 0x6c];
    void* field_2b4;
};

struct RobloxReportView : QTreeWidget
{
    void addCategoryItem(QTreeWidgetItem* pItem, QModelIndex* index);
};

extern "C" {
    void __stdcall sub_7384ba(void* p, int a, int b);
    void __stdcall sub_7384c0(void* p, int a, int b);
    void* __stdcall sub_6fd170(void* p);
    void* __stdcall sub_65e560(void* p);
    int __stdcall sub_77ddac(void* p);
    int __stdcall sub_77ddbc(void* p);
    int __stdcall sub_77d434(void* p, void* q);
    int __stdcall sub_77df20(void* p, int a, int b);
}

void RobloxReportView::addCategoryItem(QTreeWidgetItem* pItem, QModelIndex* index)
{
    sub_7384ba(&field_60, -1, 0);
    sub_7384c0(&field_60, 0, field_68);

    int local10;
    int local14;
    sub_77ddac(&local14);
    sub_77ddac(&local10);

    if (field_2b4)
    {
        void* p = sub_6fd170(field_2b4);
        if (p)
        {
            void* q = sub_6fd170(field_2b4);
            sub_77d434(&local14, (char*)q + 0x60);
        }
    }

    if (field_2b4)
    {
        void* p = sub_65e560(field_2b4);
        if (p)
        {
            void* q = sub_65e560(field_2b4);
            sub_77d434(&local10, (char*)q + 0x60);
        }
    }

    int r1 = sub_77df20(&local10, 0, 0x7c7c3c);
    if (r1 < 0)
    {
        int r2 = sub_77df20(&local14, 0, 0x7c7c3c);
        if (r2 < 0)
            goto cleanup;
    }

    {
        int saved = pItem->field_14;
        pItem->field_14 = 0xffff;

        typedef int (__thiscall *Fn)(void*, QModelIndex*, QTreeWidgetItem*);
        Fn fn = *(Fn*)(*(char**)this + 0x1a8);
        int result = fn(this, index, pItem);

        if (result)
        {
            unsigned short ax = *(unsigned short*)((char*)this + 0x68);
            void* v = *(void**)pItem;
            void* v2 = *(void**)((char*)v + 0x74);
            ax = ax - 1;
            *(unsigned short*)((char*)v2 + 0x1e) = ax;
        }

        pItem->field_14 = saved;
    }

cleanup:
    sub_77ddbc(&local10);
    sub_77ddbc(&local14);
}
