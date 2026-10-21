#include <list>
#include <algorithm>

struct Link {
    virtual void slot0();
    virtual void slot1();
    virtual Link* get();
    void update();
};

struct SimJobStage {
    char padding[0x24];
    std::list<Link*> links;
    void f();
};

struct Notify {
    void operator()(Link* link) const {
        if (link->get())
            link->get()->update();
    }
};

void SimJobStage::f()
{
    std::for_each(links.begin(), links.end(), Notify());
}
