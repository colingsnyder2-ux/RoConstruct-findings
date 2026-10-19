// from server: 93% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <map>
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(const Vector3& V) : x(V.x), y(V.y), z(V.z) {}
    operator float*() { return (float*)this; }
    operator const float*() const { return (const float*)this; }
};
class AtomicInt32 {
    volatile long _value;
public:
    unsigned int decrement() { return InterlockedDecrement(&_value) != 0; }
};
class ReferenceCountedObject {
public:
    AtomicInt32 ReferenceCountedObject_refCount;
    void* ReferenceCountedObject_weakPointer;
    void ReferenceCountedObject_zeroWeakPointers();
    virtual ~ReferenceCountedObject() {}
};
template <class T>
class ReferenceCountedPointer {
private:
    T* m_pointer;
    void zeroPointer() {
        if (m_pointer != 0) {
            if (m_pointer->ReferenceCountedObject_refCount.decrement() == 0) {
                m_pointer->ReferenceCountedObject_zeroWeakPointers();
                delete m_pointer;
            }
            m_pointer = 0;
        }
    }
    void setPointer(T* x);
public:
    ReferenceCountedPointer() : m_pointer(0) {}
    ReferenceCountedPointer(const ReferenceCountedPointer<T>& p) : m_pointer(0) { setPointer(p.m_pointer); }
    ~ReferenceCountedPointer() {
        T* pointer = m_pointer;
        if (pointer != 0) {
            if (pointer->ReferenceCountedObject_refCount.decrement() == 0) {
                pointer->ReferenceCountedObject_zeroWeakPointers();
                delete pointer;
            }
        }
    }
    const ReferenceCountedPointer<T>& operator=(const ReferenceCountedPointer<T>& p) {
        setPointer(p.m_pointer);
        return *this;
    }
};
}
namespace RBX {
enum NormalId { NORM_X };
namespace Render { class Mesh : public G3D::ReferenceCountedObject {}; }
namespace View {
class PBBMesh;
template <class T, int N>
class MeshFactory
{
public:
    class DecalKey
    {
    private:
        G3D::Vector3 size; // 0x00
        NormalId face;     // 0x0c
    public:
        bool operator<(const DecalKey& other) const
        {
            if (face < other.face)
                return true;
            if (face > other.face)
                return false;
            return size < other.size;
        }
    };
    typedef std::map<DecalKey, G3D::ReferenceCountedPointer<Render::Mesh> > DecalCache;
    static DecalCache decalCache;
    static G3D::ReferenceCountedPointer<Render::Mesh>& get(const DecalKey& key) { return decalCache[key]; }
};
template class MeshFactory<PBBMesh, 4>;
}
}
