// from server: 41% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct CXTPPropExchangeXMLNode;

struct CBase
{
    void Construct(CXTPPropExchangeXMLNode* p);
};

struct CXTPPropExchangeXMLNode
{
    char pad[0x28];
    int m_bSomething;

    CXTPPropExchangeXMLNode* GetNode(CXTPPropExchangeXMLNode* p);
};

struct CNode10 : CBase
{
    char pad[0x10];
};

struct CNode14 : CBase
{
    char pad[0x10];
    int m_nValue;
};

extern "C" int __cdecl sub_852960(const char*);

CXTPPropExchangeXMLNode* CXTPPropExchangeXMLNode::GetNode(CXTPPropExchangeXMLNode* p)
{
    if (m_bSomething != 0)
    {
        if (sub_852960((const char*)0x9f7d8c) != 0)
        {
            CNode10* n = (CNode10*)operator_new(0x10);
            if (n != 0)
            {
                n->Construct(p);
                return (CXTPPropExchangeXMLNode*)n;
            }
            return 0;
        }
    }

    CNode14* n = (CNode14*)operator_new(0x14);
    if (n != 0)
    {
        n->Construct(p);
        *(int*)n = 0x9fc578;
        n->m_nValue = 0;
        return (CXTPPropExchangeXMLNode*)n;
    }
    return 0;
}
