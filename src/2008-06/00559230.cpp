// from server: 100% by tester
// roc 2008-06 00559230  unit: RBX::VInstance::?$NonFactoryProduct  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559230
//
// 00559230  8b442404             mov eax, dword ptr [esp + 4]
// 00559234  83c19c               add ecx, -0x64
// 00559237  50                   push eax
// 00559238  51                   push ecx
// 00559239  e8b2fdffff           call 0x558ff0
// 0055923e  c20400               ret 4

namespace RBX {
class Instance;
struct DescendentAdded {};

template<class Class, class Event>
class Listener;

template<class Class, class Event>
class Notifier
{
protected:
    virtual void onAddListener(Listener<Class, Event>* listener) const = 0;
};

class DescribedBase
{
    char data[0x60];
public:
    virtual ~DescribedBase();
};

class Instance : public DescribedBase, public Notifier<Instance, DescendentAdded>
{
    class RaiseDescendentAdded2
    {
        const Instance* instance;
        Listener<Instance, DescendentAdded>* listener;
    public:
        RaiseDescendentAdded2(const Instance* instance, Listener<Instance, DescendentAdded>* listener)
            : instance(instance), listener(listener)
        {
        }
    };

    template<class Func>
    void for_eachChild(Func func) const;

protected:
    virtual void onAddListener(Listener<Instance, DescendentAdded>* listener) const;
};

void Instance::onAddListener(Listener<Instance, DescendentAdded>* listener) const
{
    for_eachChild(RaiseDescendentAdded2(this, listener));
}
}
