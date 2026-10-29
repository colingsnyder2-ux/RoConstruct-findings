// roc 2009-06 005d9b80  unit: RBX::MD5HasherImpl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d9b80
//
// 005d9b80  8b442408             mov eax, dword ptr [esp + 8]
// 005d9b84  56                   push esi
// 005d9b85  8bf1                 mov esi, ecx
// 005d9b87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d9b8b  8906                 mov dword ptr [esi], eax
// 005d9b8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d9b91  894e04               mov dword ptr [esi + 4], ecx
// 005d9b94  894608               mov dword ptr [esi + 8], eax
// 005d9b97  85c0                 test eax, eax
// 005d9b99  7446                 je 0x5d9be1
// 005d9b9b  57                   push edi
// 005d9b9c  83c004               add eax, 4
// 005d9b9f  ba01000000           mov edx, 1
// 005d9ba4  f00fc110             lock xadd dword ptr [eax], edx
// 005d9ba8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005d9bac  85ff                 test edi, edi
// 005d9bae  742a                 je 0x5d9bda
// 005d9bb0  8d4704               lea eax, [edi + 4]
// 005d9bb3  83c9ff               or ecx, 0xffffffff
// 005d9bb6  f00fc108             lock xadd dword ptr [eax], ecx
// 005d9bba  751e                 jne 0x5d9bda
// 005d9bbc  8b17                 mov edx, dword ptr [edi]
// 005d9bbe  8b4204               mov eax, dword ptr [edx + 4]
// 005d9bc1  8bcf                 mov ecx, edi
// 005d9bc3  ffd0                 call eax
// 005d9bc5  8d4f08               lea ecx, [edi + 8]
// 005d9bc8  83caff               or edx, 0xffffffff
// 005d9bcb  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9bcf  7509                 jne 0x5d9bda
// 005d9bd1  8b07                 mov eax, dword ptr [edi]
// 005d9bd3  8b5008               mov edx, dword ptr [eax + 8]
// 005d9bd6  8bcf                 mov ecx, edi
// 005d9bd8  ffd2                 call edx
// 005d9bda  5f                   pop edi
// 005d9bdb  8bc6                 mov eax, esi
// 005d9bdd  5e                   pop esi
// 005d9bde  c21000               ret 0x10
// 005d9be1  8bc6                 mov eax, esi
// 005d9be3  5e                   pop esi
// 005d9be4  c21000               ret 0x10
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