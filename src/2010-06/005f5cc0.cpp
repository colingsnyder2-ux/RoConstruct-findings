// roc 2010-06 005f5cc0  unit: RBX::P8HopperBin::?$SetImpl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5cc0
//
// 005f5cc0  51                   push ecx
// 005f5cc1  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 005f5cc4  8b442408             mov eax, dword ptr [esp + 8]
// 005f5cc8  8910                 mov dword ptr [eax], edx
// 005f5cca  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005f5ccd  c7042400000000       mov dword ptr [esp], 0
// 005f5cd4  894804               mov dword ptr [eax + 4], ecx
// 005f5cd7  85c9                 test ecx, ecx
// 005f5cd9  740c                 je 0x5f5ce7
// 005f5cdb  83c104               add ecx, 4
// 005f5cde  ba01000000           mov edx, 1
// 005f5ce3  f00fc111             lock xadd dword ptr [ecx], edx
// 005f5ce7  59                   pop ecx
// 005f5ce8  c20400               ret 4
// copied from an identical function in another client (function ?get@Owner@@QBE?AV?$shared_ptr@UItem@@@boost@@XZ)

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