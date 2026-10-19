// from server: 98% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <intrin.h>
#include <vector>
#include <algorithm>
namespace boost {
namespace detail {
class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    long use_count_;
    long weak_count_;
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
    shared_count() : pi_(0) {}
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};
}
template<class T> class shared_ptr {
public:
    T* px;
    detail::shared_count pn;
    shared_ptr() : px(0), pn() {}
    T* operator->() const { return px; }
};
template<int I> struct arg {};
static arg<1> _1;
namespace _bi {
template<class T> class value { T t_; public: value(T const& t) : t_(t) {} };
template<class A1, class A2, class A3, class A4> class list4 {
    A2 a2_;
    A3 a3_;
    A4 a4_;
public:
    list4(A1, A2 a2, A3 a3, A4 a4) : a2_(a2), a3_(a3), a4_(a4) {}
};
template<class R, class F, class L> class bind_t {
    F f_;
    L l_;
public:
    bind_t(F f, L const& l) : f_(f), l_(l) {}
    template<class A> void operator()(A& a);
};
}
template<class R, class B1, class B2, class B3, class B4, class A1, class A2, class A3, class A4>
_bi::bind_t<R, R (*)(B1, B2, B3, B4), _bi::list4<arg<1>, _bi::value<A2>, _bi::value<A3>, _bi::value<A4> > >
bind(R (*f)(B1, B2, B3, B4), A1 a1, A2 a2, A3 a3, A4 a4)
{
    typedef R (*F)(B1, B2, B3, B4);
    typedef _bi::list4<arg<1>, _bi::value<A2>, _bi::value<A3>, _bi::value<A4> > list_type;
    return _bi::bind_t<R, F, list_type>(f, list_type(a1, a2, a3, a4));
}
}
namespace G3D {
class Vector2 {
public:
    float x, y;
    Vector2& operator=(const Vector2& v) { x = v.x; y = v.y; return *this; }
};
class Rect2D { Vector2 min, max; };
class Vector3 {
public:
    float x, y, z;
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& V) : x(V.x), y(V.y), z(V.z) {}
};
class AABox {
    Vector3 lo, hi;
public:
    AABox(const Vector3& low, const Vector3& high) : lo(low), hi(high) {}
};
class CoordinateFrame { char data[0x30]; public: CoordinateFrame(); };
class Color3 {
public:
    float r, g, b;
    static const Color3& red();
    static const Color3& green();
    static const Color3& blue();
};
class Color4 {
public:
    float r, g, b, a;
    Color4(const Color3& c3, float a = 1.0) { r = c3.r; g = c3.g; b = c3.b; this->a = a; }
    Color4(float r, float g, float b, float a = 1.0) : r(r), g(g), b(b), a(a) {}
    static const Color4& clear();
};
}
namespace RBX {
class Instance { public: virtual ~Instance(); };
class Adorn {
public:
    virtual ~Adorn();
    virtual void v1(); virtual void v2(); virtual void v3();
    virtual G3D::Rect2D getViewport() const;
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame& c);
    virtual void v15();
    virtual void box(const G3D::AABox& box, const G3D::Color4& solid, const G3D::Color4& wire);
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void axes(const G3D::Color4& x, const G3D::Color4& y, const G3D::Color4& z, float scale);
};
typedef std::vector<boost::shared_ptr<Instance> > Instances;
class Selection {
    char pad[0x154];
    boost::shared_ptr<const Instances> selection;
public:
    const boost::shared_ptr<const Instances>& getSelection() const { return selection; }
};
template<class T> class ServiceClient {
    const Instance* context;
    boost::shared_ptr<T> service;
public:
    ServiceClient(const Instance* context) : context(context) {}
    T* get(bool create);
    T* operator->() { return get(true); }
    operator bool() { return get(true) != 0; }
};
enum SelectState { SELECT_NORMAL = 0 };
class Workspace;
void DrawAdorn(boost::shared_ptr<Instance> instance, Adorn* adorn, SelectState state, Workspace* workspace);
class AdornCollector { public: void render3dAdornItems(Adorn* adorn); };
class IAdornable { public: virtual void render3dAdorn(Adorn* adorn) = 0; };
class WorkspaceBase : public Instance { char pad[0x1a0 - 4]; };
class Workspace : public WorkspaceBase, public IAdornable {
    char pad0[0x2d4 - 0x1a4];
    G3D::Rect2D viewPort;          // 0x2d4
    char pad1[0x388 - 0x2e4];
    AdornCollector adornCollector; // 0x388
    void updateView();
public:
    static bool showWorldCoord;
    static bool showHashGrid;
    virtual void render3dAdorn(Adorn* adorn);
};
void Workspace::render3dAdorn(Adorn* adorn)
{
    updateView();
    viewPort = adorn->getViewport();
    ServiceClient<Selection> sel(this);

    if (sel)
        std::for_each(sel->getSelection()->begin(), sel->getSelection()->end(), boost::bind(&DrawAdorn, boost::_1, adorn, SELECT_NORMAL, this));

    adornCollector.render3dAdornItems(adorn);
    if (showWorldCoord)
    {
        adorn->setObjectToWorldMatrix(G3D::CoordinateFrame());
        adorn->axes(G3D::Color3::red(), G3D::Color3::green(), G3D::Color3::blue(), 50.0f);
    }

    if (showHashGrid)
    {
        adorn->setObjectToWorldMatrix(G3D::CoordinateFrame());
        adorn->box(G3D::AABox(G3D::Vector3(28, 4, 12), G3D::Vector3(32, 8, 16)), G3D::Color4(1.0, 0.2, 0.2, 0.5), G3D::Color4::clear());
    }
}
}
