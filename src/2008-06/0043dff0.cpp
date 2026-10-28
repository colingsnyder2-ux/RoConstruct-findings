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
    _SCL_SECURE_VALIDATE(map != 0);
    std::vector<int>::const_iterator it = keys.begin();
    std::vector<int>::const_iterator end = keys.end();
    for (; it != end; ++it)
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



