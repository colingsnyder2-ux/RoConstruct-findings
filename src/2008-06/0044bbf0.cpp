// from server: 81% by king_originala
struct Target {
    void f();
};

struct Link {
    char padding[0x24];
    Target* volatile target;
};

struct CRobloxModule {
    char padding[0x58];
    Link* volatile link;
    void f();
};

void CRobloxModule::f()
{
    link->target->f();
}
