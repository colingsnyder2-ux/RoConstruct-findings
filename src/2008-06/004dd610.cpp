// from server: 77% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <map>

struct Vector3 { float x, y, z; };

static inline int __fastcall compareVec(const Vector3& p, const Vector3& q)
{
    if (q.x < p.x) return -1;
    if (q.x > p.x) return 1;
    if (q.y < p.y) return -1;
    if (q.y > p.y) return 1;
    if (q.z < p.z) return -1;
    if (q.z > p.z) return 1;
    return 0;
}

struct Key {
    Vector3 pos;
    unsigned int index;
    int value;
};

struct KeyLess {
    bool operator()(const Key& a, const Key& b) const
    {
        int c = compareVec(b.pos, a.pos);
        if (c < 0) return true;
        if (c > 0) return false;
        if (a.index < b.index) return true;
        if (a.index > b.index) return false;
        return a.value < b.value;
    }
};

struct Level {
    int data[5];
};

typedef std::map<Key, Level, KeyLess> LevelMap;

std::pair<LevelMap::iterator, bool> insertLevel(LevelMap& m, const LevelMap::value_type& v)
{
    return m.insert(v);
}
