// from server: 100% by king_originala
// roc 2008-06 0054db30  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054db30
//
// 0054db30  55                   push ebp
// 0054db31  8bec                 mov ebp, esp
// 0054db33  51                   push ecx
// 0054db34  894dfc               mov dword ptr [ebp - 4], ecx
// 0054db37  33c0                 xor eax, eax
// 0054db39  75fc                 jne 0x54db37
// 0054db3b  33c9                 xor ecx, ecx
// 0054db3d  75fc                 jne 0x54db3b
// 0054db3f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054db42  c7420400000000       mov dword ptr [edx + 4], 0
// 0054db49  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054db4c  c7400800000000       mov dword ptr [eax + 8], 0
// 0054db53  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054db56  c70100000000         mov dword ptr [ecx], 0
// 0054db5c  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0054db60  7e0e                 jle 0x54db70
// 0054db62  8b5508               mov edx, dword ptr [ebp + 8]
// 0054db65  52                   push edx
// 0054db66  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054db69  e8b2140000           call 0x54f020
// 0054db6e  eb09                 jmp 0x54db79
// 0054db70  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054db73  c70000000000         mov dword ptr [eax], 0
// 0054db79  8be5                 mov esp, ebp
// 0054db7b  5d                   pop ebp
// 0054db7c  c20800               ret 8

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
