// from server: 100% by king_originala
// roc 2008-06 0054e340  unit: RBX::RenderBase::Mesh  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e340
//
// 0054e340  55                   push ebp
// 0054e341  8bec                 mov ebp, esp
// 0054e343  51                   push ecx
// 0054e344  894dfc               mov dword ptr [ebp - 4], ecx
// 0054e347  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e34a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e34d  8b11                 mov edx, dword ptr [ecx]
// 0054e34f  8910                 mov dword ptr [eax], edx
// 0054e351  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054e354  50                   push eax
// 0054e355  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e358  83c104               add ecx, 4
// 0054e35b  ff155c248000         call dword ptr [0x80245c]
// 0054e361  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e364  8be5                 mov esp, ebp
// 0054e366  5d                   pop ebp
// 0054e367  c20800               ret 8

typedef void *(__thiscall *StringCopy)(void *, const void *);
extern StringCopy stringCopy;

struct Mesh {
    int value;
    unsigned char text[28];

    Mesh *f(const int *, const void *);
};

#pragma optimize("", off)
Mesh *Mesh::f(const int *source, const void *stringSource)
{
    value = *source;
    stringCopy(text, stringSource);
    return this;
}
#pragma optimize("", on)
