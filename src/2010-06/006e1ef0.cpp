// from server: 100% by atomic.potato
// roc 2010-06 006e1ef0  unit: RBX::P8CRenderSettings::?$GetSetImpl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e1ef0
//
// 006e1ef0  8a442404             mov al, byte ptr [esp + 4]
// 006e1ef4  3881cc010000         cmp byte ptr [ecx + 0x1cc], al
// 006e1efa  7413                 je 0x6e1f0f
// 006e1efc  8881cc010000         mov byte ptr [ecx + 0x1cc], al
// 006e1f02  c74424045410c200     mov dword ptr [esp + 4], 0xc21054
// 006e1f0a  e961a5d2ff           jmp 0x40c470
// 006e1f0f  c20400               ret 4

struct P8CRenderSettings {
    char pad[0x1cc];
    unsigned char field_0x1cc;
    void SetImpl(unsigned char value);
};

extern "C" void __stdcall sub_40C470(unsigned int);

void P8CRenderSettings::SetImpl(unsigned char value)
{
    if (field_0x1cc != value)
    {
        field_0x1cc = value;
        sub_40C470(0xc21054);
    }
}
