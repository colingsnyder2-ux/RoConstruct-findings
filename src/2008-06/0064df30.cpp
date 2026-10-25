// from server: 100% by tester
// roc 2008-06 0064df30  unit: RBX::ToolMouseCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064df30
//
// 0064df30  56                   push esi
// 0064df31  57                   push edi
// 0064df32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064df36  57                   push edi
// 0064df37  8bf1                 mov esi, ecx
// 0064df39  e8b2feffff           call 0x64ddf0
// 0064df3e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0064df41  e88a25fbff           call 0x6004d0
// 0064df46  57                   push edi
// 0064df47  8bce                 mov ecx, esi
// 0064df49  e85251ffff           call 0x6430a0
// 0064df4e  5f                   pop edi
// 0064df4f  5e                   pop esi
// 0064df50  c20400               ret 4

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
    virtual MouseCommand* onMouseUp(const UIEvent& uiEvent);
};

MouseCommand* ToolMouseCommand::onMouseUp(const UIEvent& uiEvent)
{
    updateTargetPoint(uiEvent);
    tool->deactivate();
    return ScriptMouseCommand::onMouseUp(uiEvent);
}
}
