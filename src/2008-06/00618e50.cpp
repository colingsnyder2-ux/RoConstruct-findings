// from server: 100% by tester
// roc 2008-06 00618e50  unit: RBX::Flag  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618e50
//
// 00618e50  8b442404             mov eax, dword ptr [esp + 4]
// 00618e54  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00618e57  8b91c0010000         mov edx, dword ptr [ecx + 0x1c0]
// 00618e5d  56                   push esi
// 00618e5e  8b7008               mov esi, dword ptr [eax + 8]
// 00618e61  8b1432               mov edx, dword ptr [edx + esi]
// 00618e64  035004               add edx, dword ptr [eax + 4]
// 00618e67  8b00                 mov eax, dword ptr [eax]
// 00618e69  8d8c0ac0010000       lea ecx, [edx + ecx + 0x1c0]
// 00618e70  5e                   pop esi
// 00618e71  ffe0                 jmp eax

namespace boost {
template<class T>
class shared_ptr
{
    T* px;
    void* pn;
public:
    T* get() const { return px; }
};

namespace _mfi {
template<class R, class T>
class mf0
{
    R (T::*f_)();
public:
    R operator()(const shared_ptr<T>& p) const
    {
        return (p.get()->*f_)();
    }
};
}

namespace _bi {
template<class T>
class value
{
    T t_;
public:
    T& get() { return t_; }
};

template<class A1>
class list1
{
    A1 a1_;
public:
    template<class F>
    void operator()(F& f)
    {
        f(a1_.get());
    }
};

template<class R, class F, class L>
class bind_t
{
    F f_;
    L l_;
public:
    R operator()()
    {
        l_(f_);
    }
};
}

namespace detail {
namespace function {
class X;

union function_buffer
{
    void* obj_ptr;
    const void* const_obj_ptr;
    void (*func_ptr)();
    struct bound_memfunc_ptr_t
    {
        void (X::*memfunc_ptr)(int);
        void* obj_ptr;
    } bound_memfunc_ptr;
    mutable char data;
};

template<typename FunctionObj, typename R>
struct void_function_obj_invoker0
{
    static void invoke(function_buffer& function_obj_ptr)
    {
        FunctionObj* f = reinterpret_cast<FunctionObj*>(&function_obj_ptr.data);
        (*f)();
    }
};
}
}
}

namespace RBX {
class IEquipable
{
public:
    virtual ~IEquipable();
};

class PVInstance
{
    char data[0x1bc];
public:
    virtual ~PVInstance();
};

class Flag : public PVInstance, public virtual IEquipable
{
public:
    void onEvent_ownerChanged();
};
}

template struct boost::detail::function::void_function_obj_invoker0<
    boost::_bi::bind_t<void, boost::_mfi::mf0<void, RBX::Flag>, boost::_bi::list1<boost::_bi::value<boost::shared_ptr<RBX::Flag> > > >,
    void>;
