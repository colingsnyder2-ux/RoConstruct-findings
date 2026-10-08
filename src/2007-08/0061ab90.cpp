// from server: 100% by colin
// roc 2007-08 0061ab90  unit: RBX::ToolMouseCommand  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ab90
//
// 0061ab90  8b442404             mov eax, dword ptr [esp + 4]
// 0061ab94  8b10                 mov edx, dword ptr [eax]
// 0061ab96  8991e8000000         mov dword ptr [ecx + 0xe8], edx
// 0061ab9c  8b5004               mov edx, dword ptr [eax + 4]
// 0061ab9f  8991ec000000         mov dword ptr [ecx + 0xec], edx
// 0061aba5  8b5008               mov edx, dword ptr [eax + 8]
// 0061aba8  8991f0000000         mov dword ptr [ecx + 0xf0], edx
// 0061abae  8b400c               mov eax, dword ptr [eax + 0xc]
// 0061abb1  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 0061abb7  c781e800000000000000 mov dword ptr [ecx + 0xe8], 0
// 0061abc1  c20400               ret 4

struct RBX_ToolMouseCommand {
    char pad[0xe8];
    int field_e8;
    int field_ec;
    int field_f0;
    int field_f4;
    void setData(const int* data);
};

void RBX_ToolMouseCommand::setData(const int* data)
{
    field_e8 = data[0];
    field_ec = data[1];
    field_f0 = data[2];
    field_f4 = data[3];
    field_e8 = 0;
}
