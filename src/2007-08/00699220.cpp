// from server: 94% by colin
struct CXTPArrayT
{
    int GetAt(int nIndex);
    int m_nCount;
    int m_pData;
};

extern "C" int __stdcall sub_62FF20();

int CXTPArrayT::GetAt(int nIndex)
{
    if (nIndex < 0 || nIndex >= *(int*)((char*)this + 0x28))
        return sub_62FF20();
    return ((int*)(*(int*)((char*)this + 0x24)))[nIndex];
}
