// from server: 100% by king_originala
// roc 2008-06 0059ab80  unit: RBX::PartInstance  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ab80
//
// 0059ab80  56                   push esi
// 0059ab81  8bf1                 mov esi, ecx
// 0059ab83  e888e10600           call 0x608d10
// 0059ab88  8bce                 mov ecx, esi
// 0059ab8a  c6869803000001       mov byte ptr [esi + 0x398], 1
// 0059ab91  e84afeffff           call 0x59a9e0
// 0059ab96  50                   push eax
// 0059ab97  8d8e28020000         lea ecx, [esi + 0x228]
// 0059ab9d  e83eda0400           call 0x5e85e0
// 0059aba2  5e                   pop esi
// 0059aba3  c3                   ret 

class Controller;

struct Primitive
{
    char data[0x170];
    void setController(Controller* controller);
};

struct PartInstance
{
    char data[0x228];
    Primitive primitive;
    bool dirty;

    void update();
    void updateModel();
    Controller* getController();
};

void PartInstance::update()
{
    updateModel();
    dirty = true;
    primitive.setController(getController());
}
