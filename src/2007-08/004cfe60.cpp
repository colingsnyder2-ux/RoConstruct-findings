// from server: 80% by colin
// roc 2007-08 004cfe60  unit: RBX::TextureProxyBase  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe60
//
// 004cfe60  8b8994010000         mov ecx, dword ptr [ecx + 0x194]
// 004cfe66  8b442404             mov eax, dword ptr [esp + 4]
// 004cfe6a  8908                 mov dword ptr [eax], ecx
// 004cfe6c  c20400               ret 4

struct TextureProxyBase
{
    char pad[0x194];
    int value;
    void getValue(int* out);
};

void TextureProxyBase::getValue(int* out)
{
    *out = value;
}
