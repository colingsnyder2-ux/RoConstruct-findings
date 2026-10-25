// from server: 100% by tester
// roc 2008-06 00665aa0  unit: RBX::PartDragTool  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665aa0
//
// 00665aa0  51                   push ecx
// 00665aa1  8b11                 mov edx, dword ptr [ecx]
// 00665aa3  8b442408             mov eax, dword ptr [esp + 8]
// 00665aa7  8910                 mov dword ptr [eax], edx
// 00665aa9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00665aac  c7042400000000       mov dword ptr [esp], 0
// 00665ab3  894804               mov dword ptr [eax + 4], ecx
// 00665ab6  85c9                 test ecx, ecx
// 00665ab8  740c                 je 0x665ac6
// 00665aba  83c108               add ecx, 8
// 00665abd  ba01000000           mov edx, 1
// 00665ac2  f00fc111             lock xadd dword ptr [ecx], edx
// 00665ac6  59                   pop ecx
// 00665ac7  c20400               ret 4

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
