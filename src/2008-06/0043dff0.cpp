// from server: 61% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <map>
#include <vector>

class CXTPPropertyGridItem {
public:
    virtual ~CXTPPropertyGridItem();
    void SetHidden(int bHidden);
    char pad[0x108];
};

struct Elem { int a, b; };
typedef std::map<unsigned int, std::vector<Elem> > ElemMap;

class IMapListener {
public:
    virtual void onMapChanged(const ElemMap* map) = 0;
};

class CKeyItem : public CXTPPropertyGridItem, public IMapListener {
public:
    std::vector<int> keys;
    virtual void onMapChanged(const ElemMap* map);
};

void CKeyItem::onMapChanged(const ElemMap* map)
{
    for (std::vector<int>::const_iterator it = keys.begin(); it != keys.end(); ++it)
    {
        ElemMap::const_iterator found = map->find(*it);
        if (found != map->end() && found->second.size() > 0)
        {
            SetHidden(0);
            return;
        }
    }
    SetHidden(1);
}
