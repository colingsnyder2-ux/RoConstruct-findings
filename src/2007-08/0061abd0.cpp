// from server: 100% by colin
// roc 2007-08 0061abd0  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061abd0
//
// 0061abd0  56                   push esi
// 0061abd1  8bf1                 mov esi, ecx
// 0061abd3  e8b867feff           call 0x601390
// 0061abd8  0fbf86f0000000       movsx eax, word ptr [esi + 0xf0]
// 0061abdf  5e                   pop esi
// 0061abe0  c3                   ret 

void helper_601390();

namespace RBX {
    struct ToolMouseCommand {
        char pad[0xf0];
        short field_f0;
        int getValue();
    };
}

int RBX::ToolMouseCommand::getValue()
{
    helper_601390();
    return this->field_f0;
}
