// from server: 96% by colin
extern "C" int __cdecl sub_006b2c10();
extern "C" unsigned short __cdecl sub_006b3070(int);

struct CXTPResourceManager
{
    char pad[0xc];
    unsigned short m_nID;
    void SetResourceID();
};

void CXTPResourceManager::SetResourceID()
{
    unsigned short r = sub_006b3070(sub_006b2c10());
    if (r == 0)
        r = 0x409;
    m_nID = r;
}
