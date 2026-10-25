// from server: 57% by atomic.potato
// roc 2011-06 004318f0  unit: CWrapperView  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004318f0
//
// 004318f0  83ec10               sub esp, 0x10
// 004318f3  56                   push esi
// 004318f4  57                   push edi
// 004318f5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004318f9  8b4714               mov eax, dword ptr [edi + 0x14]
// 004318fc  85c0                 test eax, eax
// 004318fe  745f                 je 0x43195f
// 00431900  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00431906  8b4708               mov eax, dword ptr [edi + 8]
// 00431909  85c0                 test eax, eax
// 0043190b  7c0d                 jl 0x43191a
// 0043190d  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00431910  7d08                 jge 0x43191a
// 00431912  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00431915  8b3481               mov esi, dword ptr [ecx + eax*4]
// 00431918  eb02                 jmp 0x43191c
// 0043191a  33f6                 xor esi, esi
// 0043191c  8b158043c500         mov edx, dword ptr [0xc54380]
// 00431922  8d44240c             lea eax, [esp + 0xc]
// 00431926  50                   push eax
// 00431927  8d4c240c             lea ecx, [esp + 0xc]
// 0043192b  8954240c             mov dword ptr [esp + 0xc], edx
// 0043192f  e8dcdc2100           call 0x64f610
// 00431934  50                   push eax
// 00431935  8d4c2420             lea ecx, [esp + 0x20]
// 00431939  e802ac1000           call 0x53c540
// 0043193e  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 00431943  0fb654241d           movzx edx, byte ptr [esp + 0x1d]
// 00431948  0fb644241c           movzx eax, byte ptr [esp + 0x1c]
// 0043194d  c1e108               shl ecx, 8
// 00431950  0bca                 or ecx, edx
// 00431952  c1e108               shl ecx, 8
// 00431955  0bc8                 or ecx, eax
// 00431957  51                   push ecx
// 00431958  8bce                 mov ecx, esi
// 0043195a  e841b40300           call 0x46cda0
// 0043195f  8b17                 mov edx, dword ptr [edi]
// 00431961  8b02                 mov eax, dword ptr [edx]
// 00431963  6a01                 push 1
// 00431965  8bcf                 mov ecx, edi
// 00431967  ffd0                 call eax
// 00431969  5f                   pop edi
// 0043196a  5e                   pop esi
// 0043196b  83c410               add esp, 0x10
// 0043196e  c20400               ret 4

struct CWrapperView {
    char pad0[8];
    int field_8;
    char pad1[8];
    int field_14;
    void method(int);
};

extern "C" int __stdcall sub_64f610(int*);
extern "C" int __stdcall sub_53c540(int, int*);
extern "C" void __stdcall sub_46cda0(void*, int);

void CWrapperView::method(int arg) {
    int* p = (int*)field_14;
    if (p != 0) {
        int* ecx = *(int**)((char*)p + 0xfc);
        int eax = field_8;
        int esi;
        if (eax >= 0 && eax < ecx[0x2c/4]) {
            esi = *(int*)(ecx[0x28/4] + eax*4);
        } else {
            esi = 0;
        }
        int edx = *(int*)0xc54380;
        int tmp;
        sub_64f610(&tmp);
        int tmp2;
        sub_53c540(tmp, &tmp2);
        unsigned char b0 = ((unsigned char*)&tmp2)[0];
        unsigned char b1 = ((unsigned char*)&tmp2)[1];
        unsigned char b2 = ((unsigned char*)&tmp2)[2];
        int c = (b2 << 8) | b1;
        c = (c << 8) | b0;
        sub_46cda0((void*)esi, c);
    }
    int* edx2 = *(int**)this;
    int eax2 = *(int*)edx2;
    void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))eax2;
    fn(this, 1);
}
