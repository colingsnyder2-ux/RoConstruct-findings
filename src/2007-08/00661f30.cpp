// from server: 30% by colin
struct CXTPReportRecordItemArray
{
    void* m_pArray;
    void* EnsureArray();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl CXTPReportRecordItemArray_ctor(void* p, int n);

void* CXTPReportRecordItemArray::EnsureArray()
{
    if (m_pArray == 0)
    {
        void* p = operator_new(0x48);
        if (p != 0)
            CXTPReportRecordItemArray_ctor(p, 0);
        else
            p = 0;
        m_pArray = p;
    }
    return m_pArray;
}
