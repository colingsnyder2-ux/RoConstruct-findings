// from server: 100% by tester
// roc 2008-06 005cf8d0  unit: ChatEnter  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf8d0
//
// 005cf8d0  51                   push ecx
// 005cf8d1  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 005cf8d4  8b442408             mov eax, dword ptr [esp + 8]
// 005cf8d8  8910                 mov dword ptr [eax], edx
// 005cf8da  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005cf8dd  c7042400000000       mov dword ptr [esp], 0
// 005cf8e4  894804               mov dword ptr [eax + 4], ecx
// 005cf8e7  85c9                 test ecx, ecx
// 005cf8e9  740c                 je 0x5cf8f7
// 005cf8eb  83c104               add ecx, 4
// 005cf8ee  ba01000000           mov edx, 1
// 005cf8f3  f00fc111             lock xadd dword ptr [ecx], edx
// 005cf8f7  59                   pop ecx
// 005cf8f8  c20400               ret 4

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
    char padding[0x1c];
    boost::shared_ptr<Item> item;
    boost::shared_ptr<Item> get() const;
};

boost::shared_ptr<Item> Owner::get() const
{
    volatile int state = 0;
    return item;
}
