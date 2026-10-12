// from server: 98% by king_originala
struct Base {
    virtual void vfunc();
    char padding[80];
    Base();
    ~Base();
};

struct Compare {
    Compare();
};

struct Allocator {
    Allocator();
};

inline Compare::Compare() {}
inline Allocator::Allocator() {}

struct Member {
    Member(const Compare&, const Allocator&);
};

struct CRobloxDoc : Base {
    Member member;
    virtual void vfunc();
    CRobloxDoc();
};

CRobloxDoc::CRobloxDoc()
    : Base(), member(Compare(), Allocator())
{
}
