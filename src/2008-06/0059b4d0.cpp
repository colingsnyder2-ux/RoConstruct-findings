// from server: 100% by tester
// roc 2008-06 0059b4d0  unit: RBX::PartInstance  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b4d0
//
// 0059b4d0  56                   push esi
// 0059b4d1  51                   push ecx
// 0059b4d2  8bf1                 mov esi, ecx
// 0059b4d4  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 0059b4d8  8bc4                 mov eax, esp
// 0059b4da  8808                 mov byte ptr [eax], cl
// 0059b4dc  8d4ee0               lea ecx, [esi - 0x20]
// 0059b4df  e83cfdffff           call 0x59b220
// 0059b4e4  8d4e0c               lea ecx, [esi + 0xc]
// 0059b4e7  e854200400           call 0x5dd540
// 0059b4ec  5e                   pop esi
// 0059b4ed  c20400               ret 4

namespace RBX {
struct CanAggregateChanged
{
    bool canAggregate;
    CanAggregateChanged(bool canAggregate) : canAggregate(canAggregate) {}
};

template<class Class, class Event>
class Listener;

template<class Class, class Event>
class Notifier
{
    void* listeners;
protected:
    virtual void onAddListener(Listener<Class, Event>* listener) const {}
public:
    void raise(Event event) const;
};

class Instance
{
    char data[0x14];
public:
    virtual ~Instance();
};

class IPrimitiveOwner
{
    char data[0x8];
public:
    virtual void onCanAggregateChanged(bool canAggregate) = 0;
};

class IRenderable
{
    char data[0x4];
public:
    virtual ~IRenderable();
    void shouldRenderSetDirty();
};

class PartInstance : public Notifier<PartInstance, CanAggregateChanged>,
                     public Instance,
                     public IPrimitiveOwner,
                     public IRenderable
{
public:
    virtual void onCanAggregateChanged(bool canAggregate);
};

void PartInstance::onCanAggregateChanged(bool canAggregate)
{
    Notifier<PartInstance, CanAggregateChanged>::raise(canAggregate);
    shouldRenderSetDirty();
}
}
