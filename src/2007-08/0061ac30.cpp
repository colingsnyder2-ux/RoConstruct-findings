// from server: 100% by colin
// roc 2007-08 0061ac30  unit: RBX::ToolMouseCommand  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ac30
//
// 0061ac30  56                   push esi
// 0061ac31  8bf1                 mov esi, ecx
// 0061ac33  e85867feff           call 0x601390
// 0061ac38  0fbf86f6000000       movsx eax, word ptr [esi + 0xf6]
// 0061ac3f  5e                   pop esi
// 0061ac40  c3                   ret 

struct RBX_ToolMouseCommand {
    char pad[0xf6];
    short field_f6;
    int getField();
};

extern int G_func_00601390();

int RBX_ToolMouseCommand::getField()
{
    G_func_00601390();
    return field_f6;
}
