// from server: 100% by colin
// roc 2007-08 005b4b10  unit: RBX::Geometry  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4b10
//
// 005b4b10  8b442404             mov eax, dword ptr [esp + 4]
// 005b4b14  8b542408             mov edx, dword ptr [esp + 8]
// 005b4b18  3954817c             cmp dword ptr [ecx + eax*4 + 0x7c], edx
// 005b4b1c  7404                 je 0x5b4b22
// 005b4b1e  8954817c             mov dword ptr [ecx + eax*4 + 0x7c], edx
// 005b4b22  c20800               ret 8

struct Geometry {
    char pad[0x7c];
    int params[1];
    void setValue(int index, int value);
};

void Geometry::setValue(int index, int value)
{
    if (params[index] != value)
        params[index] = value;
}
