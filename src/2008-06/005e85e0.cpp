// from server: 100% by tester
// roc 2008-06 005e85e0  unit: RBX::Primitive  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e85e0
//
// 005e85e0  8b442404             mov eax, dword ptr [esp + 4]
// 005e85e4  56                   push esi
// 005e85e5  8bf1                 mov esi, ecx
// 005e85e7  85c0                 test eax, eax
// 005e85e9  7505                 jne 0x5e85f0
// 005e85eb  e86018fbff           call 0x599e50
// 005e85f0  3986e8000000         cmp dword ptr [esi + 0xe8], eax
// 005e85f6  7406                 je 0x5e85fe
// 005e85f8  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 005e85fe  5e                   pop esi
// 005e85ff  c20400               ret 4

namespace RBX {
class Controller;

class NullController
{
public:
    static Controller* getStaticNullController();
};

class Primitive
{
    char gap0[0xe8];
    Controller* controller;
public:
    void setController(Controller* _controller);
};

void Primitive::setController(Controller* _controller)
{
    if (!_controller)
        _controller = NullController::getStaticNullController();

    if (controller != _controller)
        controller = _controller;
}
}
