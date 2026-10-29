// roc 2010-06 00779d50  unit: RBX::PartDropTool  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00779d50
//
// 00779d50  51                   push ecx
// 00779d51  8b11                 mov edx, dword ptr [ecx]
// 00779d53  8b442408             mov eax, dword ptr [esp + 8]
// 00779d57  8910                 mov dword ptr [eax], edx
// 00779d59  8b4904               mov ecx, dword ptr [ecx + 4]
// 00779d5c  c7042400000000       mov dword ptr [esp], 0
// 00779d63  894804               mov dword ptr [eax + 4], ecx
// 00779d66  85c9                 test ecx, ecx
// 00779d68  740c                 je 0x779d76
// 00779d6a  83c108               add ecx, 8
// 00779d6d  ba01000000           mov edx, 1
// 00779d72  f00fc111             lock xadd dword ptr [ecx], edx
// 00779d76  59                   pop ecx
// 00779d77  c20400               ret 4
// copied from an identical function in another client (function ?get@Owner@@QBE?AV?$weak_ptr@UItem@@@boost@@XZ)

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
    void weak_add_ref() { _InterlockedIncrement(&weak_count_); }
};

class weak_count {
public:
    sp_counted_base* pi_;
    weak_count(const weak_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->weak_add_ref(); }
};
}

template<class T>
class weak_ptr {
public:
    T* px;
    detail::weak_count pn;
};
}

struct Item;

struct Owner {
    boost::weak_ptr<Item> item;
    boost::weak_ptr<Item> get() const;
};

boost::weak_ptr<Item> Owner::get() const
{
    volatile int state = 0;
    return item;
}