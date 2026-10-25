// from server: 100% by colin
// roc 2008-06 0055cf30  unit: RBX::MD5HasherImpl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055cf30
//
// 0055cf30  8b442408             mov eax, dword ptr [esp + 8]
// 0055cf34  56                   push esi
// 0055cf35  8bf1                 mov esi, ecx
// 0055cf37  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055cf3b  8906                 mov dword ptr [esi], eax
// 0055cf3d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055cf41  894e04               mov dword ptr [esi + 4], ecx
// 0055cf44  894608               mov dword ptr [esi + 8], eax
// 0055cf47  85c0                 test eax, eax
// 0055cf49  7446                 je 0x55cf91
// 0055cf4b  57                   push edi
// 0055cf4c  83c004               add eax, 4
// 0055cf4f  ba01000000           mov edx, 1
// 0055cf54  f00fc110             lock xadd dword ptr [eax], edx
// 0055cf58  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0055cf5c  85ff                 test edi, edi
// 0055cf5e  742a                 je 0x55cf8a
// 0055cf60  8d4704               lea eax, [edi + 4]
// 0055cf63  83c9ff               or ecx, 0xffffffff
// 0055cf66  f00fc108             lock xadd dword ptr [eax], ecx
// 0055cf6a  751e                 jne 0x55cf8a
// 0055cf6c  8b17                 mov edx, dword ptr [edi]
// 0055cf6e  8b4204               mov eax, dword ptr [edx + 4]
// 0055cf71  8bcf                 mov ecx, edi
// 0055cf73  ffd0                 call eax
// 0055cf75  8d4f08               lea ecx, [edi + 8]
// 0055cf78  83caff               or edx, 0xffffffff
// 0055cf7b  f00fc111             lock xadd dword ptr [ecx], edx
// 0055cf7f  7509                 jne 0x55cf8a
// 0055cf81  8b07                 mov eax, dword ptr [edi]
// 0055cf83  8b5008               mov edx, dword ptr [eax + 8]
// 0055cf86  8bcf                 mov ecx, edi
// 0055cf88  ffd2                 call edx
// 0055cf8a  5f                   pop edi
// 0055cf8b  8bc6                 mov eax, esi
// 0055cf8d  5e                   pop esi
// 0055cf8e  c21000               ret 0x10
// 0055cf91  8bc6                 mov eax, esi
// 0055cf93  5e                   pop esi
// 0055cf94  c21000               ret 0x10

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
