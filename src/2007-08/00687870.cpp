// from server: 44% by colin
struct CXTPPropExchangeXMLNode;

struct CXTPPropExchange {
    int m_nCount;
    void Exchange(CXTPPropExchangeXMLNode* pNode);
};

struct CXTPPropExchangeXMLNode : CXTPPropExchange {
    int m_nType;
    CXTPPropExchangeXMLNode* CreateNode(CXTPPropExchangeXMLNode* pParent);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" int __cdecl sub_687650(const char* name);

CXTPPropExchangeXMLNode* CXTPPropExchangeXMLNode::CreateNode(CXTPPropExchangeXMLNode* pParent)
{
    if (this->m_nCount != 0)
    {
        if (sub_687650("Count") != 0)
        {
            CXTPPropExchangeXMLNode* pNode = (CXTPPropExchangeXMLNode*)operator_new(0x10);
            if (pNode != 0)
            {
                pNode->CXTPPropExchange::Exchange(this);
                return pNode;
            }
            return 0;
        }
    }

    CXTPPropExchangeXMLNode* pNode = (CXTPPropExchangeXMLNode*)operator_new(0x14);
    if (pNode != 0)
    {
        pNode->CXTPPropExchange::Exchange(this);
        *(int*)pNode = 0x7cf658;
        pNode->m_nType = 0;
        return pNode;
    }
    return 0;
}
