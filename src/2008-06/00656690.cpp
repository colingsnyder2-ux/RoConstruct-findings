// from server: 93% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <intrin.h>
#include <string>
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
    shared_count& operator=(const shared_count& r);
};
}
template<class T> class shared_ptr {
public:
    T* px;
    detail::shared_count pn;
    shared_ptr() : px(0), pn() {}
    shared_ptr& operator=(const shared_ptr& r) { px = r.px; pn = r.pn; return *this; }
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type() const { return px == 0 ? 0 : &shared_ptr::px; }
};
}
namespace G3D {
class Vector2 {
public:
    float x, y;
    Vector2() {}
    Vector2(float _x, float _y) : x(_x), y(_y) {}
    Vector2(const Vector2& v) { x = v.x; y = v.y; }
    Vector2& operator=(const Vector2& v) { x = v.x; y = v.y; return *this; }
};
class Rect2D {
    Vector2 min, max;
public:
    float height() const { return max.y - min.y; }
    static Rect2D xyxy(const Vector2& v0, const Vector2& v1);
};
class Color3 {
public:
    float r, g, b;
    static const Color3& red();
    static const Color3& blue();
};
class Color4 {
public:
    float r, g, b, a;
    Color4(const Color3& c3, float a = 1.0) { r = c3.r; g = c3.g; b = c3.b; this->a = a; }
    static const Color4& zero();
};
}
namespace RBX {
class Instance;
class Visit;
class Humanoid {
public:
    char pad[0x1a8];
    float health;
    float maxHealth;
    float relativeHealth() const { return health / maxHealth; }
};
class HumanoidApi {
public:
    static Humanoid* getLocalHumanoidFromContext(const Instance*);
};
class ServiceProvider { public: template<class T> static T* find(const Instance*); };
template<class T> boost::shared_ptr<T> shared_from(T*);
const G3D::Color3& nativeHealthFillColor();
class Rect {
public:
    enum XAlign { CENTER = 4 };
    enum YAlign { BOTTOM = 1 };
    G3D::Vector2 low;
    G3D::Vector2 high;
    G3D::Vector2 positionPoint(XAlign x, YAlign y) const;
    G3D::Rect2D toRect2D() const { return G3D::Rect2D::xyxy(low, high); }
};
class Adorn {
public:
    enum XAlign { XALIGN_CENTER = 2 };
    enum YAlign { YALIGN_TOP = 0 };
    enum Spacing { PROPORTIONAL_SPACING = 0 };
    virtual ~Adorn();
    virtual void v1(); virtual void v2(); virtual void v3();
    virtual G3D::Rect2D getViewport() const;
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void rect2d(const G3D::Rect2D& rect, const G3D::Color4& color);
    virtual void v12();
    virtual G3D::Vector2 drawFont2D(const std::string& s, const G3D::Vector2& pos, double size, const G3D::Color4& color, const G3D::Color4& outline, XAlign xalign, YAlign yalign, Spacing spacing);
};
class HealthHud {
public:
    virtual ~HealthHud();
    virtual void render2d(Adorn* adorn);
    Rect getMyRect() const;
private:
    char pad[0x13c - 4];
    G3D::Vector2 size;                   // 0x13c
    boost::shared_ptr<Visit> visit;      // 0x144
};
void HealthHud::render2d(Adorn* adorn)
{
    G3D::Rect2D viewport = adorn->getViewport();
    float height = viewport.height() * 0.125f;
    size = G3D::Vector2(height * 0.1f, height);
    int fontSize = (int)(height * 0.18f);
    if (!visit)
        visit = shared_from(ServiceProvider::find<Visit>((Instance*)this));
    if (!visit)
        return;
    Humanoid* humanoid = HumanoidApi::getLocalHumanoidFromContext((Instance*)this);
    if (!humanoid)
        return;
    Rect rect = getMyRect();
    Rect filled = rect;
    filled.low.y = rect.high.y - (rect.high.y - rect.low.y) * humanoid->relativeHealth();
    Rect empty = rect;
    empty.high.y = filled.low.y;
    adorn->rect2d(filled.toRect2D(), G3D::Color4(nativeHealthFillColor(), 1));
    adorn->rect2d(empty.toRect2D(), G3D::Color4(G3D::Color3::red(), 1));
    adorn->drawFont2D("Health", rect.positionPoint(Rect::CENTER, Rect::BOTTOM), fontSize, G3D::Color3::blue(), G3D::Color4::zero(), Adorn::XALIGN_CENTER, Adorn::YALIGN_TOP, Adorn::PROPORTIONAL_SPACING);
}
}
