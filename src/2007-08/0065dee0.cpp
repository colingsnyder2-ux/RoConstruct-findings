// from server: 42% by colin
extern "C" void* __cdecl sub_00654D90(unsigned int);
extern "C" void __cdecl sub_006617A0(void*, int);
extern "C" void __cdecl sub_006301E4(void*);

struct CXTPReportControl
{
    bool AddRow(void*);
    bool InsertRow(void*, void*);
};

bool CXTPReportControl::AddRow(void* pRow)
{
    if (pRow == 0)
        return false;
    if (*(int*)((char*)pRow + 0x24) != 0)
        return false;

    void* pNew = sub_00654D90(0x48);
    void* pObj = 0;
    if (pNew != 0)
    {
        sub_006617A0(pNew, 1);
        pObj = pNew;
    }

    bool result = false;
    if (this->InsertRow(pObj, 0))
    {
        if (this->InsertRow(pObj, pRow))
        {
            if (pObj != 0)
                sub_006301E4(pObj);
            result = true;
        }
        else
        {
            if (pObj != 0)
                sub_006301E4(pObj);
        }
    }
    else
    {
        if (pObj != 0)
            sub_006301E4(pObj);
    }

    return result;
}
