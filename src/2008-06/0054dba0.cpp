// from server: 100% by king_originala
// roc 2008-06 0054dba0  unit: RBX::RenderBase::Mesh  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054dba0
//
// 0054dba0  55                   push ebp
// 0054dba1  8bec                 mov ebp, esp
// 0054dba3  51                   push ecx
// 0054dba4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054dba7  33c0                 xor eax, eax
// 0054dba9  75fc                 jne 0x54dba7
// 0054dbab  33c9                 xor ecx, ecx
// 0054dbad  75fc                 jne 0x54dbab
// 0054dbaf  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054dbb2  c7420400000000       mov dword ptr [edx + 4], 0
// 0054dbb9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054dbbc  c7400800000000       mov dword ptr [eax + 8], 0
// 0054dbc3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054dbc6  c70100000000         mov dword ptr [ecx], 0
// 0054dbcc  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0054dbd0  7e0e                 jle 0x54dbe0
// 0054dbd2  8b5508               mov edx, dword ptr [ebp + 8]
// 0054dbd5  52                   push edx
// 0054dbd6  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054dbd9  e8f282fcff           call 0x515ed0
// 0054dbde  eb09                 jmp 0x54dbe9
// 0054dbe0  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054dbe3  c70000000000         mov dword ptr [eax], 0
// 0054dbe9  8be5                 mov esp, ebp
// 0054dbeb  5d                   pop ebp
// 0054dbec  c20800               ret 8

struct Mesh {
    void *data;
    int count;
    int capacity;

    void resize(int);
    void f(int, int);
};

#pragma optimize("", off)
void Mesh::f(int size, int allocate)
{
    do {} while (0);
    do {} while (0);

    count = 0;
    capacity = 0;
    data = 0;

    if (allocate > 0)
        resize(size);
    else
        data = 0;
}
#pragma optimize("", on)
