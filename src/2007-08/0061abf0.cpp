// from server: 100% by colin
// roc 2007-08 0061abf0  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061abf0
//
// 0061abf0  56                   push esi
// 0061abf1  8bf1                 mov esi, ecx
// 0061abf3  e89867feff           call 0x601390
// 0061abf8  0fbf86f2000000       movsx eax, word ptr [esi + 0xf2]
// 0061abff  5e                   pop esi
// 0061ac00  c3                   ret 

struct RBX_ToolMouseCommand {
    char pad[0xf2];
    short field_f2;
    int getField();
};

extern int G_func_00601390();

int RBX_ToolMouseCommand::getField()
{
    G_func_00601390();
    return field_f2;
}
