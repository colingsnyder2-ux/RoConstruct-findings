// from server: 100% by king_originala
// roc 2008-06 0054d690  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d690
//
// 0054d690  55                   push ebp
// 0054d691  8bec                 mov ebp, esp
// 0054d693  51                   push ecx
// 0054d694  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d697  33c0                 xor eax, eax
// 0054d699  75fc                 jne 0x54d697
// 0054d69b  33c9                 xor ecx, ecx
// 0054d69d  75fc                 jne 0x54d69b
// 0054d69f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d6a2  c7420400000000       mov dword ptr [edx + 4], 0
// 0054d6a9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d6ac  c7400800000000       mov dword ptr [eax + 8], 0
// 0054d6b3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d6b6  c70100000000         mov dword ptr [ecx], 0
// 0054d6bc  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0054d6c0  7e0e                 jle 0x54d6d0
// 0054d6c2  8b5508               mov edx, dword ptr [ebp + 8]
// 0054d6c5  52                   push edx
// 0054d6c6  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d6c9  e872180000           call 0x54ef40
// 0054d6ce  eb09                 jmp 0x54d6d9
// 0054d6d0  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d6d3  c70000000000         mov dword ptr [eax], 0
// 0054d6d9  8be5                 mov esp, ebp
// 0054d6db  5d                   pop ebp
// 0054d6dc  c20800               ret 8

struct Mesh {
    void *first;
    void *last;
    void *end;

    void f(void *arg, int count);
    void initialize(void *arg);
};

#pragma optimize("", off)
void Mesh::f(void *arg, int count)
{
    do {} while (0);
    do {} while (0);
    last = 0;
    end = 0;
    first = 0;
    if (count > 0)
        initialize(arg);
    else
        first = 0;
}
#pragma optimize("", on)
