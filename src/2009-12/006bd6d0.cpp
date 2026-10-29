// roc 2009-12 006bd6d0  unit: CPropGrid::UpdateItemsJob  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bd6d0
//
// 006bd6d0  8b442408             mov eax, dword ptr [esp + 8]
// 006bd6d4  56                   push esi
// 006bd6d5  8bf1                 mov esi, ecx
// 006bd6d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bd6db  8906                 mov dword ptr [esi], eax
// 006bd6dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bd6e1  894e04               mov dword ptr [esi + 4], ecx
// 006bd6e4  894608               mov dword ptr [esi + 8], eax
// 006bd6e7  85c0                 test eax, eax
// 006bd6e9  7446                 je 0x6bd731
// 006bd6eb  57                   push edi
// 006bd6ec  83c004               add eax, 4
// 006bd6ef  ba01000000           mov edx, 1
// 006bd6f4  f00fc110             lock xadd dword ptr [eax], edx
// 006bd6f8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006bd6fc  85ff                 test edi, edi
// 006bd6fe  742a                 je 0x6bd72a
// 006bd700  8d4704               lea eax, [edi + 4]
// 006bd703  83c9ff               or ecx, 0xffffffff
// 006bd706  f00fc108             lock xadd dword ptr [eax], ecx
// 006bd70a  751e                 jne 0x6bd72a
// 006bd70c  8b17                 mov edx, dword ptr [edi]
// 006bd70e  8b4204               mov eax, dword ptr [edx + 4]
// 006bd711  8bcf                 mov ecx, edi
// 006bd713  ffd0                 call eax
// 006bd715  8d4f08               lea ecx, [edi + 8]
// 006bd718  83caff               or edx, 0xffffffff
// 006bd71b  f00fc111             lock xadd dword ptr [ecx], edx
// 006bd71f  7509                 jne 0x6bd72a
// 006bd721  8b07                 mov eax, dword ptr [edi]
// 006bd723  8b5008               mov edx, dword ptr [eax + 8]
// 006bd726  8bcf                 mov ecx, edi
// 006bd728  ffd2                 call edx
// 006bd72a  5f                   pop edi
// 006bd72b  8bc6                 mov eax, esi
// 006bd72d  5e                   pop esi
// 006bd72e  c21000               ret 0x10
// 006bd731  8bc6                 mov eax, esi
// 006bd733  5e                   pop esi
// 006bd734  c21000               ret 0x10
// copied from an identical function in another client (function ??0?$storage3@U?$arg@$00@boost@@V?$value@PAVDHTMLWindow@@@_bi@2@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@42@@_bi@boost@@QAE@U?$arg@$00@2@V?$value@PAVDHTMLWindow@@@12@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// from server: 94% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

extern "C" long __cdecl _InterlockedIncrement(long volatile*);
extern "C" long __cdecl _InterlockedDecrement(long volatile*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

namespace boost {
namespace detail {
class sp_counted_base {
    long use_count_;
    long weak_count_;
public:
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
};
class shared_count {
    sp_counted_base* pi_;
public:
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->add_ref_copy(); }
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};
}
template <class T> class shared_ptr {
    T* px;
    detail::shared_count pn;
};
template <int I> struct arg {};
namespace _bi {
template <class T> class value {
public:
    value(T const& t) : t_(t) {}
private:
    T t_;
};
template <class A1> struct storage1 {
    explicit storage1(A1 a1) : a1_(a1) {}
    A1 a1_;
};
template <int I> struct storage1<boost::arg<I> > {
    explicit storage1(boost::arg<I>) {}
};
template <class A1, class A2> struct storage2 : public storage1<A1> {
    storage2(A1 a1, A2 a2) : storage1<A1>(a1), a2_(a2) {}
    A2 a2_;
};
template <class A1, class A2, class A3> struct storage3 : public storage2<A1, A2> {
    storage3(A1 a1, A2 a2, A3 a3) : storage2<A1, A2>(a1, a2), a3_(a3) {}
    A3 a3_;
};
}
}
namespace RBX { class Instance; }
class DHTMLWindow;
template struct boost::_bi::storage3<boost::arg<1>, boost::_bi::value<DHTMLWindow*>, boost::_bi::value<boost::shared_ptr<RBX::Instance> > >;