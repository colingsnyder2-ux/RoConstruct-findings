// from server: 100% by colin
// roc 2008-06 0054d390  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d390
//
// 0054d390  55                   push ebp
// 0054d391  8bec                 mov ebp, esp
// 0054d393  51                   push ecx
// 0054d394  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d397  33c0                 xor eax, eax
// 0054d399  75fc                 jne 0x54d397
// 0054d39b  33c9                 xor ecx, ecx
// 0054d39d  75fc                 jne 0x54d39b
// 0054d39f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d3a2  c7420400000000       mov dword ptr [edx + 4], 0
// 0054d3a9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d3ac  c7400800000000       mov dword ptr [eax + 8], 0
// 0054d3b3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d3b6  c70100000000         mov dword ptr [ecx], 0
// 0054d3bc  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0054d3c0  7e0e                 jle 0x54d3d0
// 0054d3c2  8b5508               mov edx, dword ptr [ebp + 8]
// 0054d3c5  52                   push edx
// 0054d3c6  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d3c9  e822190000           call 0x54ecf0
// 0054d3ce  eb09                 jmp 0x54d3d9
// 0054d3d0  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d3d3  c70000000000         mov dword ptr [eax], 0
// 0054d3d9  8be5                 mov esp, ebp
// 0054d3db  5d                   pop ebp
// 0054d3dc  c20800               ret 8

struct Mesh {
    int size;
    void *first;
    void *last;

    void initialize(void *);
    void f(void *, int);
};

#pragma optimize("", off)
void Mesh::f(void *arg, int count)
{
    do {} while (0);
    do {} while (0);

    first = 0;
    last = 0;
    size = 0;

    if (count > 0)
        initialize(arg);
    else
        size = 0;
}
#pragma optimize("", on)
