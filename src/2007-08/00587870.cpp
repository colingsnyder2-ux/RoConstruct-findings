// from server: 34% by colin
// roc 2007-08 00587870  unit: RBX::Reflection::EnumDescriptor  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587870
//
// 00587870  51                   push ecx
// 00587871  56                   push esi
// 00587872  57                   push edi
// 00587873  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00587877  8db1f8000000         lea esi, [ecx + 0xf8]
// 0058787d  56                   push esi
// 0058787e  8bcf                 mov ecx, edi
// 00587880  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00587888  ff159ce67700         call dword ptr [0x77e69c]
// 0058788e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00587891  89471c               mov dword ptr [edi + 0x1c], eax
// 00587894  8bc7                 mov eax, edi
// 00587896  5f                   pop edi
// 00587897  5e                   pop esi
// 00587898  59                   pop ecx
// 00587899  c20400               ret 4

struct RBXName {
    char pad[0x1c];
};

struct Descriptor {
    char pad[0xf8];
    RBXName name;
};

struct EnumDescriptor {
    char pad[0xf8];
    RBXName name;
    Descriptor* clone(Descriptor* other);
};

Descriptor* EnumDescriptor::clone(Descriptor* other) {
    RBXName temp;
    temp = this->name;
    other->name = temp;
    return other;
}
