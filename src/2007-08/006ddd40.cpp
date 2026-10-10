// from server: 27% by colin
struct CXTPReportSelectedRows {
    struct USELECTED_BLOCK {
        struct CArray {
            void* m_pData;
            int m_nSize;
            int m_nGrowBy;
            CArray();
        };
    };
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl construct_array(void* p);

CXTPReportSelectedRows::USELECTED_BLOCK::CArray::CArray()
{
    void* p = operator_new(0x140);
    if (p != 0)
    {
        construct_array(p);
    }
}
