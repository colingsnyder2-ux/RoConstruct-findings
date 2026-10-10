// from server: 46% by colin
struct CXTPPropertyGridItem {
    char pad0[0xb4];
    void* m_pItem;
    bool GetValue();
};

extern "C" void __stdcall sub_77ddac(void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_69aaf0(void*, int, void*);

bool CXTPPropertyGridItem::GetValue()
{
    char buf[8];
    sub_77ddac(buf);
    bool result = false;
    if (m_pItem != 0) {
        void* local = 0;
        sub_69aaf0(m_pItem, 0xb, &local);
        result = (local == 0);
    }
    sub_77ddbc(buf);
    return result;
}
