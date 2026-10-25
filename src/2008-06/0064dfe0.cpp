// from server: 100% by tester
// roc 2008-06 0064dfe0  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dfe0
//
// 0064dfe0  56                   push esi
// 0064dfe1  8bf1                 mov esi, ecx
// 0064dfe3  e8284fffff           call 0x642f10
// 0064dfe8  0fbf8640010000       movsx eax, word ptr [esi + 0x140]
// 0064dfef  5e                   pop esi
// 0064dff0  c3                   ret 

void helper_601390();

namespace RBX {
    struct ToolMouseCommand {
        char pad[0x140];
        short field_f0;
        int getValue();
    };
}

int RBX::ToolMouseCommand::getValue()
{
    helper_601390();
    return this->field_f0;
}
