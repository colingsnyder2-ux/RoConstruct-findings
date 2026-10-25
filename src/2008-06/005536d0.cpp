// from server: 100% by king_originala
// roc 2008-06 005536d0  unit: RBX::RenderBase::AggregateChunk  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005536d0
//
// 005536d0  55                   push ebp
// 005536d1  8bec                 mov ebp, esp
// 005536d3  51                   push ecx
// 005536d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005536d7  8b4508               mov eax, dword ptr [ebp + 8]
// 005536da  50                   push eax
// 005536db  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005536de  e8fd14fcff           call 0x514be0
// 005536e3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005536e6  83c10c               add ecx, 0xc
// 005536e9  51                   push ecx
// 005536ea  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005536ed  83c10c               add ecx, 0xc
// 005536f0  e81b000000           call 0x553710
// 005536f5  8b55fc               mov edx, dword ptr [ebp - 4]
// 005536f8  8b4508               mov eax, dword ptr [ebp + 8]
// 005536fb  8b4824               mov ecx, dword ptr [eax + 0x24]
// 005536fe  894a24               mov dword ptr [edx + 0x24], ecx
// 00553701  8b45fc               mov eax, dword ptr [ebp - 4]
// 00553704  8be5                 mov esp, ebp
// 00553706  5d                   pop ebp
// 00553707  c20400               ret 4

struct Vector3 {
    float x, y, z;
    Vector3& operator=(const Vector3&);
};

struct Data {
    char storage[24];
    Data& operator=(const Data&);
};

struct S : Vector3 {
    Data data;
    int value;
    S& operator=(const S&);
};

#pragma optimize("", off)
S& S::operator=(const S& other)
{
    Vector3::operator=(other);
    data = other.data;
    value = other.value;
    return *this;
}
