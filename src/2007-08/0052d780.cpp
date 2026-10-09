// from server: 100% by colin
// roc 2007-08 0052d780  unit: RBX::RunService  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d780
//
// 0052d780  56                   push esi
// 0052d781  57                   push edi
// 0052d782  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052d786  83ff01               cmp edi, 1
// 0052d789  8bf1                 mov esi, ecx
// 0052d78b  750f                 jne 0x52d79c
// 0052d78d  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0052d793  85c0                 test eax, eax
// 0052d795  7413                 je 0x52d7aa
// 0052d797  83f802               cmp eax, 2
// 0052d79a  eb0c                 jmp 0x52d7a8
// 0052d79c  83ff02               cmp edi, 2
// 0052d79f  7509                 jne 0x52d7aa
// 0052d7a1  83be4c01000001       cmp dword ptr [esi + 0x14c], 1
// 0052d7a8  752b                 jne 0x52d7d5
// 0052d7aa  53                   push ebx
// 0052d7ab  8b9e4c010000         mov ebx, dword ptr [esi + 0x14c]
// 0052d7b1  3bdf                 cmp ebx, edi
// 0052d7b3  741f                 je 0x52d7d4
// 0052d7b5  57                   push edi
// 0052d7b6  8d8e30010000         lea ecx, [esi + 0x130]
// 0052d7bc  89be4c010000         mov dword ptr [esi + 0x14c], edi
// 0052d7c2  e8c9fcffff           call 0x52d490
// 0052d7c7  57                   push edi
// 0052d7c8  53                   push ebx
// 0052d7c9  8d8e18010000         lea ecx, [esi + 0x118]
// 0052d7cf  e81cfcffff           call 0x52d3f0
// 0052d7d4  5b                   pop ebx
// 0052d7d5  5f                   pop edi
// 0052d7d6  5e                   pop esi
// 0052d7d7  c20400               ret 4

struct RunService {
    char pad[0x118];
    char field_118[0x18];
    char field_130[0x1c];
    int field_14c;
    void sub_52d490(int);
    void sub_52d3f0(int, int);
    void setState(int);
};

void RunService::setState(int v)
{
    if (v == 1) {
        if (field_14c != 0 && field_14c != 2)
            return;
    } else if (v == 2) {
        if (field_14c != 1)
            return;
    }

    int old = field_14c;
    if (old == v)
        return;

    field_14c = v;
    ((RunService*)((char*)this + 0x130))->sub_52d490(v);
    ((RunService*)((char*)this + 0x118))->sub_52d3f0(old, v);
}
