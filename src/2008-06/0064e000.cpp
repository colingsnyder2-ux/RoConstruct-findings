// from server: 100% by tester
// roc 2008-06 0064e000  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e000
//
// 0064e000  56                   push esi
// 0064e001  8bf1                 mov esi, ecx
// 0064e003  e8084fffff           call 0x642f10
// 0064e008  0fbf8642010000       movsx eax, word ptr [esi + 0x142]
// 0064e00f  5e                   pop esi
// 0064e010  c3                   ret 

struct RBX_ToolMouseCommand {
    char pad[0x142];
    short field_f2;
    int getField();
};

extern int G_func_00601390();

int RBX_ToolMouseCommand::getField()
{
    G_func_00601390();
    return field_f2;
}
