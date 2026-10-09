// from server: 70% by colin
// roc 2007-08 00623140  unit: RBX::ArrowPanel  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00623140
//
// 00623140  83ec08               sub esp, 8
// 00623143  56                   push esi
// 00623144  8bf1                 mov esi, ecx
// 00623146  807e0800             cmp byte ptr [esi + 8], 0
// 0062314a  7431                 je 0x62317d
// 0062314c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0062314f  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00623155  8d4c2404             lea ecx, [esp + 4]
// 00623159  51                   push ecx
// 0062315a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0062315d  8b140a               mov edx, dword ptr [edx + ecx]
// 00623160  035614               add edx, dword ptr [esi + 0x14]
// 00623163  8d8c02ec000000       lea ecx, [edx + eax + 0xec]
// 0062316a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0062316d  ffd0                 call eax
// 0062316f  8b08                 mov ecx, dword ptr [eax]
// 00623171  890e                 mov dword ptr [esi], ecx
// 00623173  8b5004               mov edx, dword ptr [eax + 4]
// 00623176  895604               mov dword ptr [esi + 4], edx
// 00623179  c6460800             mov byte ptr [esi + 8], 0
// 0062317d  8b0e                 mov ecx, dword ptr [esi]
// 0062317f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623183  8b5604               mov edx, dword ptr [esi + 4]
// 00623186  8908                 mov dword ptr [eax], ecx
// 00623188  895004               mov dword ptr [eax + 4], edx
// 0062318b  5e                   pop esi
// 0062318c  83c408               add esp, 8
// 0062318f  c20400               ret 4

struct ArrowPanel {
    int x0;
    int x4;
    char x8;
    int xc;
    int x10;
    int x14;
    int x18;
    void func(int* out);
};

void ArrowPanel::func(int* out)
{
    if (x8 != 0) {
        int* p = (int*)((char*)xc + 0xec);
        int idx = *(int*)((char*)p + x18);
        int off = idx + x14;
        int* arg = (int*)((char*)xc + 0xec + off);
        int (*fn)(int*) = (int (*)(int*))x10;
        int* r = (int*)fn(arg);
        x0 = r[0];
        x4 = r[1];
        x8 = 0;
    }
    out[0] = x0;
    out[1] = x4;
}
