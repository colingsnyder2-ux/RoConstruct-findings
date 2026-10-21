// from server: 73% by EspClaude
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <intrin.h>
#include <vector>
namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    long use_count_;
    long weak_count_;
    void release() {
        if (_InterlockedDecrement(&use_count_) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release() {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
};
struct shared_count {
    sp_counted_base* pi_;
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
}

namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3 operator+(const Vector3& v) const { return Vector3(x + v.x, y + v.y, z + v.z); }
    Vector3 operator*(float s) const { return Vector3(x * s, y * s, z * s); }
    static const Vector3& zero() { static Vector3 v(0, 0, 0); return v; }
};
class Matrix3 {
public:
    float elt[3][3];
    Matrix3(const Matrix3& r);
    static const Matrix3& identity();
};
class CoordinateFrame {
public:
    Matrix3 rotation;
    Vector3 translation;
    CoordinateFrame(const Vector3& _translation) : rotation(Matrix3::identity()), translation(_translation) {}
};
}
namespace RBX {
class Extents {
public:
    G3D::Vector3 low;
    G3D::Vector3 high;
    void unionWith(const Extents& other);
    G3D::Vector3 center() const { return (this->high + this->low) * 0.5f; }
};
class PVInstance {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual Extents getExtentsWorld() const;
};
class Selection {
public:
    char pad[0x13c];
    std::vector<PVInstance*> items;
    size_t size() const { return items.size(); }
    PVInstance* operator[](size_t i) const { return items[i]; }
};
class Instance;
class ServiceProvider { public: void raiseChanged(int what); };
ServiceProvider* __cdecl findServiceProvider(const Instance* context);
template<class T> class ServiceClient {
public:
    explicit ServiceClient(Instance* c) : context(c) {}
    T* get(bool create);
    Instance* context;
    boost::shared_ptr<T> service;
};
class Camera {
public:
    enum CameraType { FIXED_CAMERA = 0 };
    void setCameraType(CameraType t);
    void setCameraCoordinateFrame(const G3D::CoordinateFrame& cf);
};
class ICameraOwner { public: virtual ~ICameraOwner(); virtual Camera* getCamera(); };
class Workspace { public: char pad[0x288]; ICameraOwner cameraOwner; };
class IDataState { public: virtual void setDirty(bool dirty) = 0; };

class CameraCenterCommand {
public:
    void* vptr;
    char pad[8];
    Workspace* workspace;
    void doIt(IDataState& dataState);
};

void CameraCenterCommand::doIt(IDataState& dataState)
{
    ServiceClient<Selection> selection((Instance*)workspace);
    G3D::Vector3 center;
    if (selection.get(true)->size() >= 1) {
        const Selection* s = selection.get(true);
        Extents extents = (*s)[0]->getExtentsWorld();
        for (size_t i = 1; i < s->size(); ++i)
            extents.unionWith((*s)[i]->getExtentsWorld());
        center = extents.center();
    } else {
        center = G3D::Vector3::zero();
    }
    workspace->cameraOwner.getCamera()->setCameraType(Camera::FIXED_CAMERA);
    workspace->cameraOwner.getCamera()->setCameraCoordinateFrame(G3D::CoordinateFrame(center));
    findServiceProvider((Instance*)workspace)->raiseChanged(11);
    dataState.setDirty(true);
    dataState.setDirty(true);
}
}
