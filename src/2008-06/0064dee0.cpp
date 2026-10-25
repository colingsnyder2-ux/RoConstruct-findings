// from server: 100% by tester
// roc 2008-06 0064dee0  unit: RBX::ToolMouseCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dee0
//
// 0064dee0  56                   push esi
// 0064dee1  57                   push edi
// 0064dee2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064dee6  57                   push edi
// 0064dee7  8bf1                 mov esi, ecx
// 0064dee9  e802ffffff           call 0x64ddf0
// 0064deee  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0064def1  e8ba25fbff           call 0x6004b0
// 0064def6  57                   push edi
// 0064def7  8bce                 mov ecx, esi
// 0064def9  e8a251ffff           call 0x6430a0
// 0064defe  5f                   pop edi
// 0064deff  5e                   pop esi
// 0064df00  c20400               ret 4

namespace RBX {
class UIEvent;
class MouseCommand;

class Tool
{
public:
    void activate();
    void deactivate();
};

class ScriptMouseCommand
{
    char data[0x20];
public:
    virtual MouseCommand* onMouseDown(const UIEvent& uiEvent);
    virtual MouseCommand* onMouseUp(const UIEvent& uiEvent);
};

class ToolMouseCommand : public ScriptMouseCommand
{
    Tool* tool;
    void updateTargetPoint(const UIEvent& uiEvent);
public:
    virtual MouseCommand* onMouseDown(const UIEvent& uiEvent);
};

MouseCommand* ToolMouseCommand::onMouseDown(const UIEvent& uiEvent)
{
    updateTargetPoint(uiEvent);
    tool->activate();
    return ScriptMouseCommand::onMouseDown(uiEvent);
}
}
