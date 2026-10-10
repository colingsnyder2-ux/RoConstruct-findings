// from server: 33% by colin
struct VCXTPReportRecords {
    void Process(void* pRecord);
};

extern "C" void __cdecl sub_6301E4(void*);
extern "C" void __cdecl sub_630688(int, int);
extern "C" void* __cdecl sub_661700(void*);
extern "C" void __cdecl sub_6617E0(void*);
extern "C" void __cdecl sub_661850(void*, void*);
extern "C" void* __cdecl sub_661CD0(void);
extern "C" int __cdecl sub_663C50(void);

void VCXTPReportRecords::Process(void* pRecord)
{
    int* pRec = (int*)pRecord;
    void* pUnknown = 0;
    int count = 0;
    int i;

    void* pList = (void*)(*(int (__thiscall**)(void*, const char*))(*(int*)pRec + 0x94))(pRecord, (const char*)0x7C8528);

    if (pRec[9] != 0)
    {
        sub_6617E0(this);
        count = (*(int (__thiscall**)(void*, int, int))(*(int*)pList + 4))(pList, 0, 1);
        if (count != 0)
            goto cleanup;

        for (i = 0; i < count; i++)
        {
            void* pItem = (*(void* (__thiscall**)(void*, void**))(*(int*)pList + 8))(pList, &pUnknown);
            void* pTemp = pItem;
            void* pResult = sub_661CD0();
            int found = (*(int (__thiscall**)(void*, void*, void*))(*(int*)pItem + 0x64))(pItem, &pResult, pResult);
            if (found)
            {
                (*(void (__thiscall**)(void*, void*))(*(int*)pUnknown + 0x60))(pUnknown, pItem);
            }
            sub_6301E4(pItem);
            if (pUnknown != 0)
            {
                sub_661850(this, pUnknown);
                sub_6301E4(pItem);
                if (pUnknown != 0)
                    continue;
            }
            break;
        }
    }
    else
    {
        count = sub_663C50();
        (*(void (__thiscall**)(void*, int, int))(*(int*)pList + 4))(pList, count, 1);
        if (count > 0)
        {
            for (i = 0; i < count; i++)
            {
                void* pItem = (*(void* (__thiscall**)(void*, void**))(*(int*)pList + 8))(pList, &pUnknown);
                void* pTemp = pItem;
                void* pResult = sub_661CD0();
                int found = (*(int (__thiscall**)(void*, void*, void*))(*(int*)pItem + 0x64))(pItem, &pResult, pResult);
                if (found)
                {
                    (*(void (__thiscall**)(void*, void*))(*(int*)pUnknown + 0x60))(pUnknown, pItem);
                }
                sub_6301E4(pItem);
            }
        }
    }

cleanup:
    (*(void (__thiscall**)(void*, int))(*(int*)pList))(pList, 1);
    sub_630688(6, 0);
}
