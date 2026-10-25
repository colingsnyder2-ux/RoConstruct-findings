// from server: 100% by king_originala
// roc 2008-06 0054c120  unit: RBX::RenderBase::Mesh  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c120
//
// 0054c120  55                   push ebp
// 0054c121  8bec                 mov ebp, esp
// 0054c123  51                   push ecx
// 0054c124  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c127  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c12a  e8e102f9ff           call 0x4dc410
// 0054c12f  394508               cmp dword ptr [ebp + 8], eax
// 0054c132  7206                 jb 0x54c13a
// 0054c134  ff1590288000         call dword ptr [0x802890]
// 0054c13a  33c0                 xor eax, eax
// 0054c13c  75fc                 jne 0x54c13a
// 0054c13e  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c141  6bc00c               imul eax, eax, 0xc
// 0054c144  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c147  03410c               add eax, dword ptr [ecx + 0xc]
// 0054c14a  8be5                 mov esp, ebp
// 0054c14c  5d                   pop ebp
// 0054c14d  c20400               ret 4

extern "C" void (__cdecl * _invalid_parameter_noinfo)();

struct Element {
    float x, y, z;
};

struct S {
    char padding[12];
    Element* first;

    unsigned int size() const;
    Element& at(unsigned int index);
};

#pragma optimize("", off)
Element& S::at(unsigned int index)
{
    if (index >= size())
        _invalid_parameter_noinfo();

    do {
    } while (false);

    return first[index];
}
