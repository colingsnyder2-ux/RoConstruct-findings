// from server: 100% by colin
// roc 2008-06 00546290  unit: seg_00540000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00546290
//
// 00546290  55                   push ebp
// 00546291  8bec                 mov ebp, esp
// 00546293  51                   push ecx
// 00546294  894dfc               mov dword ptr [ebp - 4], ecx
// 00546297  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054629a  e861010000           call 0x546400
// 0054629f  394508               cmp dword ptr [ebp + 8], eax
// 005462a2  7206                 jb 0x5462aa
// 005462a4  ff1590288000         call dword ptr [0x802890]
// 005462aa  33c0                 xor eax, eax
// 005462ac  75fc                 jne 0x5462aa
// 005462ae  8b4508               mov eax, dword ptr [ebp + 8]
// 005462b1  6bc028               imul eax, eax, 0x28
// 005462b4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005462b7  03410c               add eax, dword ptr [ecx + 0xc]
// 005462ba  8be5                 mov esp, ebp
// 005462bc  5d                   pop ebp
// 005462bd  c20400               ret 4

extern "C" void (__cdecl * _invalid_parameter_noinfo)();

struct Element {
    float v[10];
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
