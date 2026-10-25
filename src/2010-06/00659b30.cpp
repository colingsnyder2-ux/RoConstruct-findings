// from server: 49% by atomic.potato
// roc 2010-06 00659b30  unit: RBX::VKeyframeSequence::?$BoundFuncDesc  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00659b30
//
// 00659b30  53                   push ebx
// 00659b31  55                   push ebp
// 00659b32  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00659b38  56                   push esi
// 00659b39  57                   push edi
// 00659b3a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00659b3e  8bf1                 mov esi, ecx
// 00659b40  c70700000000         mov dword ptr [edi], 0
// 00659b46  85f6                 test esi, esi
// 00659b48  740e                 je 0x659b58
// 00659b4a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00659b4e  39460c               cmp dword ptr [esi + 0xc], eax
// 00659b51  7705                 ja 0x659b58
// 00659b53  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00659b56  7606                 jbe 0x659b5e
// 00659b58  ffd5                 call ebp
// 00659b5a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00659b5e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00659b62  8b0e                 mov ecx, dword ptr [esi]
// 00659b64  890f                 mov dword ptr [edi], ecx
// 00659b66  894704               mov dword ptr [edi + 4], eax
// 00659b69  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00659b6c  7705                 ja 0x659b73
// 00659b6e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00659b71  7606                 jbe 0x659b79
// 00659b73  ffd5                 call ebp
// 00659b75  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00659b79  8b07                 mov eax, dword ptr [edi]
// 00659b7b  8b0e                 mov ecx, dword ptr [esi]
// 00659b7d  85c0                 test eax, eax
// 00659b7f  7404                 je 0x659b85
// 00659b81  3bc1                 cmp eax, ecx
// 00659b83  7402                 je 0x659b87
// 00659b85  ffd5                 call ebp
// 00659b87  8b4f04               mov ecx, dword ptr [edi + 4]
// 00659b8a  3bcb                 cmp ecx, ebx
// 00659b8c  743a                 je 0x659bc8
// 00659b8e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00659b91  c644241400           mov byte ptr [esp + 0x14], 0
// 00659b96  8b542414             mov edx, dword ptr [esp + 0x14]
// 00659b9a  52                   push edx
// 00659b9b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00659b9f  52                   push edx
// 00659ba0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00659ba4  52                   push edx
// 00659ba5  51                   push ecx
// 00659ba6  50                   push eax
// 00659ba7  53                   push ebx
// 00659ba8  e843e9ffff           call 0x6584f0
// 00659bad  8b5610               mov edx, dword ptr [esi + 0x10]
// 00659bb0  8bd8                 mov ebx, eax
// 00659bb2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00659bb6  50                   push eax
// 00659bb7  8d4e08               lea ecx, [esi + 8]
// 00659bba  51                   push ecx
// 00659bbb  52                   push edx
// 00659bbc  53                   push ebx
// 00659bbd  e88eeeffff           call 0x658a50
// 00659bc2  83c428               add esp, 0x28
// 00659bc5  895e10               mov dword ptr [esi + 0x10], ebx
// 00659bc8  8bc7                 mov eax, edi
// 00659bca  5f                   pop edi
// 00659bcb  5e                   pop esi
// 00659bcc  5d                   pop ebp
// 00659bcd  5b                   pop ebx
// 00659bce  c21400               ret 0x14

extern "C" void __stdcall _invalid_parameter_noinfo();

struct VKeyframeSequence {
    char pad0[8];
    int field8;
    int fieldC;
    int field10;

    int sub_659b30(int *out, int a, int b, int c, int d);
};

extern "C" int __cdecl sub_6584f0(int, int, int, int, int, int);
extern "C" int __cdecl sub_658a50(int, int, int, int);

int VKeyframeSequence::sub_659b30(int *out, int a, int b, int c, int d) {
    void (__stdcall *handler)() = *(void (__stdcall **)())0x9ea90c;
    int *self = (int *)this;
    *out = 0;
    if (self == 0 || self[3] > a || a > self[4]) {
        handler();
    }
    int v = self[0];
    *out = v;
    out[1] = a;
    if (self[3] > b || b > self[4]) {
        handler();
    }
    int cur = *out;
    if (cur != 0 && cur != self[0]) {
        handler();
    }
    if (out[1] != b) {
        int e = self[4];
        char tmp = 0;
        int r = sub_6584f0(b, e, out[1], *(int *)&tmp, *(int *)&tmp, *(int *)&tmp);
        sub_658a50(r, e, (int)(self + 2), d);
        self[4] = r;
    }
    return (int)out;
}
