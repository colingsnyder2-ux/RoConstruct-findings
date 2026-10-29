// roc 2009-12 007ccb00  unit: RBX::GroupDropTool  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ccb00
//
// 007ccb00  51                   push ecx
// 007ccb01  8b11                 mov edx, dword ptr [ecx]
// 007ccb03  8b442408             mov eax, dword ptr [esp + 8]
// 007ccb07  8910                 mov dword ptr [eax], edx
// 007ccb09  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ccb0c  c7042400000000       mov dword ptr [esp], 0
// 007ccb13  894804               mov dword ptr [eax + 4], ecx
// 007ccb16  85c9                 test ecx, ecx
// 007ccb18  740c                 je 0x7ccb26
// 007ccb1a  83c108               add ecx, 8
// 007ccb1d  ba01000000           mov edx, 1
// 007ccb22  f00fc111             lock xadd dword ptr [ecx], edx
// 007ccb26  59                   pop ecx
// 007ccb27  c20400               ret 4
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