// from server: 100% by tester
// roc 2008-06 0064dfa0  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dfa0
//
// 0064dfa0  56                   push esi
// 0064dfa1  8bf1                 mov esi, ecx
// 0064dfa3  e8684fffff           call 0x642f10
// 0064dfa8  0fbf8638010000       movsx eax, word ptr [esi + 0x138]
// 0064dfaf  5e                   pop esi
// 0064dfb0  c3                   ret 

struct RBX_ToolMouseCommand {
    char pad[0x138];
    short field_f2;
    int getField();
};

extern int G_func_00601390();

int RBX_ToolMouseCommand::getField()
{
    G_func_00601390();
    return field_f2;
}
