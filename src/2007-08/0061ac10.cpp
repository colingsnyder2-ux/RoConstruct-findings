// from server: 100% by colin
// roc 2007-08 0061ac10  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ac10
//
// 0061ac10  56                   push esi
// 0061ac11  8bf1                 mov esi, ecx
// 0061ac13  e87867feff           call 0x601390
// 0061ac18  0fbf86f4000000       movsx eax, word ptr [esi + 0xf4]
// 0061ac1f  5e                   pop esi
// 0061ac20  c3                   ret 

struct ToolMouseCommand {
    char pad[0xf4];
    short field_f4;
    int getValue();
};

void helper_601390();

int ToolMouseCommand::getValue()
{
    helper_601390();
    return this->field_f4;
}
