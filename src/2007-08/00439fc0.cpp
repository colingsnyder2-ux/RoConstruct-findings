// from server: 63% by colin
// roc 2007-08 00439fc0  unit: RBX::VSoundId::?$XItem  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00439fc0
//
// 00439fc0  53                   push ebx
// 00439fc1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00439fc5  55                   push ebp
// 00439fc6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00439fca  56                   push esi
// 00439fcb  8b742418             mov esi, dword ptr [esp + 0x18]
// 00439fcf  57                   push edi
// 00439fd0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00439fd4  3bf7                 cmp esi, edi
// 00439fd6  740c                 je 0x439fe4
// 00439fd8  8b0e                 mov ecx, dword ptr [esi]
// 00439fda  53                   push ebx
// 00439fdb  ffd5                 call ebp
// 00439fdd  83c604               add esi, 4
// 00439fe0  3bf7                 cmp esi, edi
// 00439fe2  75f4                 jne 0x439fd8
// 00439fe4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00439fe8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00439fec  5f                   pop edi
// 00439fed  8928                 mov dword ptr [eax], ebp
// 00439fef  5e                   pop esi
// 00439ff0  894804               mov dword ptr [eax + 4], ecx
// 00439ff3  5d                   pop ebp
// 00439ff4  895808               mov dword ptr [eax + 8], ebx
// 00439ff7  5b                   pop ebx
// 00439ff8  c3                   ret 

struct S {
    int f(int a, int b, int c, int d, int e);
};

int S::f(int a, int b, int c, int d, int e)
{
    int* first = (int*)a;
    int* last = (int*)b;
    int (*fn)(int) = (int (*)(int))c;
    int x = d;
    int y = e;

    while (first != last) {
        fn(*first);
        ++first;
    }

    int* out = (int*)x;
    out[0] = (int)fn;
    out[1] = y;
    out[2] = (int)first;
    return (int)out;
}
