// from server: 75% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
namespace G3D {
template<class T> class Array {
public:
    T* data;
    int num;
    int size() const { return num; }
    T& operator[](int n) { return data[n]; }
};
}
namespace RBX {
namespace Sim { enum EdgeState { TOUCHING = 3, TOUCHING_SLEEPING = 4 }; }
class Stage {
public:
    virtual ~Stage();
    virtual int getStageType() const;
};
class Edge {
public:
    enum EdgeType { JOINT = 0, CONTACT = 1 };
    Stage* stage;              // 0x4
    Sim::EdgeState edgeState;  // 0x8
    virtual ~Edge();
    virtual void v1();
    virtual void v2();
    virtual EdgeType getEdgeType() const;
    Sim::EdgeState getEdgeState() const { return edgeState; }
    bool inOrDownstreamOfStage(const Stage* s) const { return stage->getStageType() >= s->getStageType(); }
};
class Primitive { public: static bool disableSleep; };
class ComputeBase1 { public: int a; };
class ComputeBase2 { public: int b; };
class ComputeObject : public ComputeBase1, public ComputeBase2 {};
template<class T, class Owner> class CachedValue {
public:
    T value;
    bool dirty;
    Owner* owner;
    T (Owner::*compute)();
    const T& get()
    {
        if (dirty) {
            value = (owner->*compute)();
            dirty = false;
        }
        return value;
    }
};
class Assembly {
public:
    char pad[0x68];
    CachedValue<bool, ComputeObject> canSleep;
    bool getCanSleep() { return canSleep.get(); }
    G3D::Array<Edge*>& getExternalEdges();
    Assembly* otherAssembly(Edge* edge);
};
class SleepStage : public Stage {
    bool computeCanSleep(Assembly* assembly) { return !Primitive::disableSleep && assembly->getCanSleep(); }
    bool computeShouldSleep(Assembly* assembly);
    bool edgeIsAwake(Edge* edge) { return edge->inOrDownstreamOfStage(this); }
    bool isAffecting(Edge* edge)
    {
        Sim::EdgeState state = edge->getEdgeState();
        return edge->getEdgeType() != Edge::CONTACT || state == Sim::TOUCHING || state == Sim::TOUCHING_SLEEPING;
    }
    bool preventNeighborSleep(Assembly* assembly);
    bool shouldSleep(Assembly* assembly);
};
bool SleepStage::shouldSleep(Assembly* assembly)
{
    int i = 0;
    if (!computeCanSleep(assembly))
        return false;
    if (!computeShouldSleep(assembly))
        return false;
    G3D::Array<Edge*>& edges = assembly->getExternalEdges();
    for (; i < edges.size(); ++i) {
        if (edgeIsAwake(edges[i])) {
            Edge* edge = edges[i];
            if (isAffecting(edge)) {
                if (preventNeighborSleep(assembly->otherAssembly(edge)))
                    return false;
            }
        }
    }
    return true;
}
}
