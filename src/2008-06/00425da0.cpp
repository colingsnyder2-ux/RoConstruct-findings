// from server: 100% by tester
// roc 2008-06 00425da0  unit: CSelectionTreeCtrl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425da0
//
// 00425da0  51                   push ecx
// 00425da1  8b9124010000         mov edx, dword ptr [ecx + 0x124]
// 00425da7  8b442408             mov eax, dword ptr [esp + 8]
// 00425dab  8910                 mov dword ptr [eax], edx
// 00425dad  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00425db3  c7042400000000       mov dword ptr [esp], 0
// 00425dba  894804               mov dword ptr [eax + 4], ecx
// 00425dbd  85c9                 test ecx, ecx
// 00425dbf  740c                 je 0x425dcd
// 00425dc1  83c104               add ecx, 4
// 00425dc4  ba01000000           mov edx, 1
// 00425dc9  f00fc111             lock xadd dword ptr [ecx], edx
// 00425dcd  59                   pop ecx
// 00425dce  c20400               ret 4

#include <intrin.h>

namespace boost {
namespace detail {
class sp_counted_base {
public:
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    long use_count_;
    long weak_count_;
    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
};

class shared_count {
public:
    sp_counted_base* pi_;
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->add_ref_copy(); }
};
}

template<class T>
class shared_ptr {
public:
    T* px;
    detail::shared_count pn;
};
}

struct Item;

struct Owner {
    char padding[0x124];
    boost::shared_ptr<Item> item;
    boost::shared_ptr<Item> get() const;
};

boost::shared_ptr<Item> Owner::get() const
{
    volatile int state = 0;
    return item;
}
