// from server: 100% by tester
// roc 2008-06 0064dfc0  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dfc0
//
// 0064dfc0  56                   push esi
// 0064dfc1  8bf1                 mov esi, ecx
// 0064dfc3  e8484fffff           call 0x642f10
// 0064dfc8  0fbf863a010000       movsx eax, word ptr [esi + 0x13a]
// 0064dfcf  5e                   pop esi
// 0064dfd0  c3                   ret 

struct ToolMouseCommand {
    char pad[0x13a];
    short field_f4;
    int getValue();
};

void helper_601390();

int ToolMouseCommand::getValue()
{
    helper_601390();
    return this->field_f4;
}
