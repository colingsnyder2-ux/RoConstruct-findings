// roc 2009-06 006e8ac0  unit: RBX::PartDropTool  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8ac0
//
// 006e8ac0  51                   push ecx
// 006e8ac1  8b11                 mov edx, dword ptr [ecx]
// 006e8ac3  8b442408             mov eax, dword ptr [esp + 8]
// 006e8ac7  8910                 mov dword ptr [eax], edx
// 006e8ac9  8b4904               mov ecx, dword ptr [ecx + 4]
// 006e8acc  c7042400000000       mov dword ptr [esp], 0
// 006e8ad3  894804               mov dword ptr [eax + 4], ecx
// 006e8ad6  85c9                 test ecx, ecx
// 006e8ad8  740c                 je 0x6e8ae6
// 006e8ada  83c108               add ecx, 8
// 006e8add  ba01000000           mov edx, 1
// 006e8ae2  f00fc111             lock xadd dword ptr [ecx], edx
// 006e8ae6  59                   pop ecx
// 006e8ae7  c20400               ret 4
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