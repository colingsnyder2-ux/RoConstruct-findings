// from server: 100% by king_originala
// roc 2008-06 0054d3e0  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d3e0
//
// 0054d3e0  55                   push ebp
// 0054d3e1  8bec                 mov ebp, esp
// 0054d3e3  51                   push ecx
// 0054d3e4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d3e7  33c0                 xor eax, eax
// 0054d3e9  75fc                 jne 0x54d3e7
// 0054d3eb  33c9                 xor ecx, ecx
// 0054d3ed  75fc                 jne 0x54d3eb
// 0054d3ef  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d3f2  c7420400000000       mov dword ptr [edx + 4], 0
// 0054d3f9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d3fc  c7400800000000       mov dword ptr [eax + 8], 0
// 0054d403  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d406  c70100000000         mov dword ptr [ecx], 0
// 0054d40c  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0054d410  7e0e                 jle 0x54d420
// 0054d412  8b5508               mov edx, dword ptr [ebp + 8]
// 0054d415  52                   push edx
// 0054d416  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d419  e8f2190000           call 0x54ee10
// 0054d41e  eb09                 jmp 0x54d429
// 0054d420  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d423  c70000000000         mov dword ptr [eax], 0
// 0054d429  8be5                 mov esp, ebp
// 0054d42b  5d                   pop ebp
// 0054d42c  c20800               ret 8

struct Mesh {
    void *data;
    unsigned size;
    unsigned capacity;

    void assign(void *);
    void f(void *, int);
};

#pragma optimize("", off)
void Mesh::f(void *arg, int count)
{
    do {} while (0);
    do {} while (0);

    size = 0;
    capacity = 0;
    data = 0;

    if (count > 0)
        assign(arg);
    else
        data = 0;
}
#pragma optimize("", on)
