// from server: 98% by king_originala
struct Compare
{
    Compare();
};

struct Allocator
{
    Allocator();
};

inline Compare::Compare() {}
inline Allocator::Allocator() {}

struct Base
{
    Base();
    virtual ~Base();
    char reserved[84];
};

struct Tree
{
    Tree(const Compare&, const Allocator&);
    ~Tree();
    char storage[12];
};

struct CRobloxView : Base
{
    Tree tree;

    CRobloxView();
    virtual ~CRobloxView();
};

CRobloxView::CRobloxView()
    : Base(), tree(Compare(), Allocator())
{
}
