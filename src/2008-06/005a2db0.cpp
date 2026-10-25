// from server: 100% by tester
// roc 2008-06 005a2db0  unit: RBX::Workspace  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2db0
//
// 005a2db0  51                   push ecx
// 005a2db1  56                   push esi
// 005a2db2  8bf1                 mov esi, ecx
// 005a2db4  e8670cfeff           call 0x583a20
// 005a2db9  c644240400           mov byte ptr [esp + 4], 0
// 005a2dbe  8b442404             mov eax, dword ptr [esp + 4]
// 005a2dc2  50                   push eax
// 005a2dc3  8d8e44030000         lea ecx, [esi + 0x344]
// 005a2dc9  e8723bfdff           call 0x576940
// 005a2dce  5e                   pop esi
// 005a2dcf  59                   pop ecx
// 005a2dd0  c3                   ret 

namespace RBX {
struct ExtentsChanged {};

template<class Class, class Event>
class Notifier
{
    void* listeners;
public:
    void raise(Event event) const;
};

class ModelInstance
{
    char data[0x340];
protected:
    virtual void onExtentsChanged() const;
};

class Workspace : public ModelInstance, public Notifier<Workspace, ExtentsChanged>
{
protected:
    virtual void onExtentsChanged() const;
};

void Workspace::onExtentsChanged() const
{
    ModelInstance::onExtentsChanged();
    Notifier<Workspace, ExtentsChanged>::raise(ExtentsChanged());
}
}
