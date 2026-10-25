// from server: 100% by colin
// roc 2008-06 00551620  unit: seg_00550000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551620
//
// 00551620  55                   push ebp
// 00551621  8bec                 mov ebp, esp
// 00551623  51                   push ecx
// 00551624  894dfc               mov dword ptr [ebp - 4], ecx
// 00551627  33c0                 xor eax, eax
// 00551629  75fc                 jne 0x551627
// 0055162b  33c9                 xor ecx, ecx
// 0055162d  75fc                 jne 0x55162b
// 0055162f  8b55fc               mov edx, dword ptr [ebp - 4]
// 00551632  c7420400000000       mov dword ptr [edx + 4], 0
// 00551639  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055163c  c7400800000000       mov dword ptr [eax + 8], 0
// 00551643  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00551646  c70100000000         mov dword ptr [ecx], 0
// 0055164c  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00551650  7e0e                 jle 0x551660
// 00551652  8b5508               mov edx, dword ptr [ebp + 8]
// 00551655  52                   push edx
// 00551656  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00551659  e842a7ffff           call 0x54bda0
// 0055165e  eb09                 jmp 0x551669
// 00551660  8b45fc               mov eax, dword ptr [ebp - 4]
// 00551663  c70000000000         mov dword ptr [eax], 0
// 00551669  8be5                 mov esp, ebp
// 0055166b  5d                   pop ebp
// 0055166c  c20800               ret 8

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
