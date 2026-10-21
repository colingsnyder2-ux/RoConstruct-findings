// from server: 75% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <vector>
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    shared_count() : pi_(0) {}
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->add_ref_copy(); }
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};

template<class T> class shared_ptr {
public:
    T* px;
    shared_count pn;
    shared_ptr() : px(0), pn() {}
    T* get() const { return px; }
    T* operator->() const { return px; }
};

namespace RBX {
class Instance {
public:
    virtual ~Instance();
};
class ModelInstance : public Instance {};
namespace Network {
class Player : public Instance {
public:
    char pad[0x170 - 4];
    ModelInstance* character;
    ModelInstance* getCharacter() const { return character; }
};

class Players {
public:
    shared_ptr<const std::vector<shared_ptr<Instance> > > getPlayers();
    shared_ptr<Instance> playerFromCharacter(shared_ptr<Instance> character);
};

shared_ptr<Instance> Players::playerFromCharacter(shared_ptr<Instance> character)
{
    shared_ptr<const std::vector<shared_ptr<Instance> > > myPlayers = getPlayers();

    const std::vector<shared_ptr<Instance> >* v = myPlayers.get();
    std::vector<shared_ptr<Instance> >::const_iterator iter = v->begin();
    std::vector<shared_ptr<Instance> >::const_iterator end = v->end();

    for (; iter != end; iter++)
    {
        if (static_cast<Player*>(iter->get())->getCharacter() == static_cast<ModelInstance*>(character.get()))
            return *iter;
    }

    return shared_ptr<Instance>();
}
}
}
