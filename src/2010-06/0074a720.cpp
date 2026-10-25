// from server: 69% by atomic.potato
// roc 2010-06 0074a720  unit: RBX::AxisMoveTool  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074a720
//
// 0074a720  56                   push esi
// 0074a721  8bf1                 mov esi, ecx
// 0074a723  807e4000             cmp byte ptr [esi + 0x40], 0
// 0074a727  7436                 je 0x74a75f
// 0074a729  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0074a72c  e89fd6fcff           call 0x717dd0
// 0074a731  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0074a738  8b06                 mov eax, dword ptr [esi]
// 0074a73a  8b10                 mov edx, dword ptr [eax]
// 0074a73c  8bce                 mov ecx, esi
// 0074a73e  c6464000             mov byte ptr [esi + 0x40], 0
// 0074a742  ffd2                 call edx
// 0074a744  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0074a748  7205                 jb 0x74a74f
// 0074a74a  8b4004               mov eax, dword ptr [eax + 4]
// 0074a74d  eb03                 jmp 0x74a752
// 0074a74f  83c004               add eax, 4
// 0074a752  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0074a755  51                   push ecx
// 0074a756  50                   push eax
// 0074a757  e88441eaff           call 0x5ee8e0
// 0074a75c  83c408               add esp, 8
// 0074a75f  8b16                 mov edx, dword ptr [esi]
// 0074a761  8b4238               mov eax, dword ptr [edx + 0x38]
// 0074a764  8bce                 mov ecx, esi
// 0074a766  ffd0                 call eax
// 0074a768  33c0                 xor eax, eax
// 0074a76a  5e                   pop esi
// 0074a76b  c20400               ret 4

struct S {
    char pad0[0x18];
    int field18;
    char pad1[0x4];
    int field20;
    char pad2[0x1c];
    char field40;
    int method0();
    int method38();
};

extern "C" int __stdcall sub_5ee8e0(int, int);
extern "C" int __stdcall sub_717dd0(int);

int S::method0() {
    if (field40 != 0) {
        sub_717dd0(field20);
        field20 = 0;
        int* v = (int*)this;
        int (*fn)(S*) = (int (*)(S*))v[0];
        field40 = 0;
        int r = fn(this);
        int* p = (int*)r;
        if (p[6] >= 0x10)
            p = (int*)p[1];
        else
            p = (int*)((char*)p + 4);
        sub_5ee8e0((int)p, field18);
    }
    int* v2 = (int*)this;
    int (*fn2)(S*) = (int (*)(S*))v2[0x38 / 4];
    fn2(this);
    return 0;
}
