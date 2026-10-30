// roc 2009-06 00624b30  unit: RBX::P8HopperBin::?$SetImpl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624b30
//
// 00624b30  51                   push ecx
// 00624b31  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00624b34  8b442408             mov eax, dword ptr [esp + 8]
// 00624b38  8910                 mov dword ptr [eax], edx
// 00624b3a  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00624b3d  c7042400000000       mov dword ptr [esp], 0
// 00624b44  894804               mov dword ptr [eax + 4], ecx
// 00624b47  85c9                 test ecx, ecx
// 00624b49  740c                 je 0x624b57
// 00624b4b  83c104               add ecx, 4
// 00624b4e  ba01000000           mov edx, 1
// 00624b53  f00fc111             lock xadd dword ptr [ecx], edx
// 00624b57  59                   pop ecx
// 00624b58  c20400               ret 4
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