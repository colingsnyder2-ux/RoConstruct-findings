// from server: 84% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <algorithm>
#include <math.h>
#include <intrin.h>

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
extern void __cdecl sub_6a067a(void*);

namespace G3D {

inline double inf()
{
    static double i = HUGE_VAL;
    return i;
}

class AtomicInt32 {
    volatile long _value;
public:
    void increment() { InterlockedIncrement(&_value); }
    unsigned int decrement() { return InterlockedDecrement(&_value) != 0; }
};

class WeakPtrBase {
public:
    virtual void unused();
    virtual void objectCollected();
};

struct WeakPtrLinkedList {
    WeakPtrBase* weakPtr;
    WeakPtrLinkedList* next;
};

class ReferenceCountedObject {
public:
    AtomicInt32 ReferenceCountedObject_refCount;
    WeakPtrLinkedList* ReferenceCountedObject_weakPointer;
    void ReferenceCountedObject_zeroWeakPointers() {
        WeakPtrLinkedList* node = ReferenceCountedObject_weakPointer;
        while (node != 0) {
            node->weakPtr->objectCollected();
            WeakPtrLinkedList* tmp = node;
            node = node->next;
            sub_6a067a(tmp);
        }
    }
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
    void setPointer(T* x) {
        if (x != m_pointer) {
            zeroPointer();
            if (x != 0) {
                m_pointer = x;
                m_pointer->ReferenceCountedObject_refCount.increment();
            }
        }
    }
public:
    ReferenceCountedPointer() : m_pointer(0) {}
    ReferenceCountedPointer(T* p) : m_pointer(0) { setPointer(p); }
    ReferenceCountedPointer(const ReferenceCountedPointer& r) : m_pointer(0) { setPointer(r.m_pointer); }
    ~ReferenceCountedPointer() { zeroPointer(); }
    ReferenceCountedPointer& operator=(const ReferenceCountedPointer& r) { setPointer(r.m_pointer); return *this; }
    T* operator->() const { return m_pointer; }
    T& operator*() const { return *m_pointer; }
};

class GLight {
public:
    char data[0x50];
};

template <class T>
class Array {
public:
    T* data;
    int num;
    int numAllocated;
    int size() const { return num; }
    T* begin() { return data; }
    T* end() { return data + num; }
    T& operator[](int i) { return data[i]; }
    void append(const T& v);
    void resize(int n, bool shrink);
};

class Lighting : public ReferenceCountedObject {
public:
    char pad[0x40 - sizeof(ReferenceCountedObject)];
    Array<GLight> lightArray;
    Array<GLight> shadowedLightArray;
    char more[0x20];
    static ReferenceCountedPointer<Lighting> create();
    Lighting& operator=(const Lighting&);
};

class LightingParameters {
public:
    char data[0xf8];
    LightingParameters& operator=(const LightingParameters&);
};

class ToneMap {
public:
    void setEnabled(bool);
    ReferenceCountedPointer<Lighting> prepareLighting(const ReferenceCountedPointer<Lighting>&);
    LightingParameters prepareLightingParameters(const LightingParameters&);
};

int glGetInteger(int);

}

bool brighter(const G3D::GLight& A, const G3D::GLight& B);

namespace RBX {
namespace Render {

class EffectSettings
{
private:
    bool _stencilShadows;
    bool _alphaBlendShadowLights;
    bool _useAllLightsInUnshadowedPass;
    bool _skyBox;
    bool _toneMap;
    bool _hemisphereLighting;
    bool _depthBlur;
    float _farCullZ;
    float _groundLOD;
    float _LODShift;

public:
    static G3D::ToneMap* getToneMap();

    G3D::ReferenceCountedPointer<G3D::Lighting> update(
        float shadingDetail,
        float meshDetail,
        bool shadows,
        float cameraDistanceFromCharacters,
        const G3D::ReferenceCountedPointer<G3D::Lighting>& desiredLighting,
        const G3D::LightingParameters& desiredSkyParameters,
        G3D::LightingParameters& outSkyParameters);
};

G3D::ReferenceCountedPointer<G3D::Lighting> EffectSettings::update(
    float shadingDetail,
    float meshDetail,
    bool shadows,
    float cameraDistanceFromCharacters,
    const G3D::ReferenceCountedPointer<G3D::Lighting>& desiredLighting,
    const G3D::LightingParameters& desiredSkyParameters,
    G3D::LightingParameters& outSkyParameters)
{
    int lightCount = desiredLighting->lightArray.size();
    int numShadowLights =
        desiredLighting->shadowedLightArray.size() >= 8 ? 8 : desiredLighting->shadowedLightArray.size();
    int maxLights = G3D::glGetInteger(0xd31) - 3;
    int numNonShadowLights = lightCount >= maxLights ? maxLights : lightCount;
    numNonShadowLights = numNonShadowLights > 0 ? numNonShadowLights : 0;

    _groundLOD = 1.0f;
    _LODShift = 0.0f;
    _skyBox = false;
    _alphaBlendShadowLights = true;
    _stencilShadows = false;
    _useAllLightsInUnshadowedPass = false;
    _toneMap = false;
    _hemisphereLighting = false;
    _depthBlur = false;
    _farCullZ = -G3D::inf();

    G3D::ReferenceCountedPointer<G3D::Lighting> lighting = G3D::Lighting::create();
    *lighting = *desiredLighting;

    G3D::glGetInteger(0xd57);

    if (shadingDetail >= 10) {
        _skyBox = true;
    }

    _groundLOD = shadingDetail * 0.01f;

    if (shadingDetail >= 30.0f) {
        _hemisphereLighting = true;
    }

    _LODShift = shadingDetail * 0.02f - 1.0f;

    if (shadows && numShadowLights > 0) {
        _stencilShadows = true;
        numShadowLights = 1;

        if (numNonShadowLights == 0) {
            _alphaBlendShadowLights = false;
        }
    }

    std::sort(lighting->shadowedLightArray.begin(), lighting->shadowedLightArray.end(), brighter);

    int excessShadowLights = lighting->shadowedLightArray.size() - numShadowLights;

    if (excessShadowLights > 0) {
        for (int i = 0; i < excessShadowLights; i++) {
            lighting->lightArray.append(
                lighting->shadowedLightArray[lighting->shadowedLightArray.size() - excessShadowLights + i]);
        }

        lighting->shadowedLightArray.resize(lighting->shadowedLightArray.size() - excessShadowLights, true);
    }

    std::sort(lighting->lightArray.begin(), lighting->lightArray.end(), brighter);

    int excessLights = lighting->lightArray.size() - numNonShadowLights;

    if (excessLights > 0) {
        lighting->lightArray.resize(lighting->lightArray.size() - excessLights, true);
    }

    _useAllLightsInUnshadowedPass = _stencilShadows == false;

    for (int i = 0; i < lighting->lightArray.size(); i++) {
        G3D::GLight& l = lighting->lightArray[i];
        _ReadWriteBarrier();
    }
    for (int i = 0; i < lighting->shadowedLightArray.size(); i++) {
        G3D::GLight& l = lighting->shadowedLightArray[i];
        _ReadWriteBarrier();
    }

    if (_toneMap) {
        getToneMap()->setEnabled(true);
        lighting = getToneMap()->prepareLighting(lighting);
        outSkyParameters = getToneMap()->prepareLightingParameters(desiredSkyParameters);
    }
    else {
        outSkyParameters = desiredSkyParameters;
    }

    return lighting;
}

}
}
