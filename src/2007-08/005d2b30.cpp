// from server: 77% by colin
// roc 2007-08 005d2b30  unit: RBX::VTool::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2b30
//
// 005d2b30  56                   push esi
// 005d2b31  8d442408             lea eax, [esp + 8]
// 005d2b35  50                   push eax
// 005d2b36  8bf1                 mov esi, ecx
// 005d2b38  e8934eebff           call 0x4879d0
// 005d2b3d  83c404               add esp, 4
// 005d2b40  84c0                 test al, al
// 005d2b42  7547                 jne 0x5d2b8b
// 005d2b44  6a18                 push 0x18
// 005d2b46  c7460800295d00       mov dword ptr [esi + 8], 0x5d2900
// 005d2b4d  c70680285d00         mov dword ptr [esi], 0x5d2880
// 005d2b53  e89ed30500           call 0x62fef6
// 005d2b58  83c404               add esp, 4
// 005d2b5b  85c0                 test eax, eax
// 005d2b5d  7429                 je 0x5d2b88
// 005d2b5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2b63  8908                 mov dword ptr [eax], ecx
// 005d2b65  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005d2b69  895004               mov dword ptr [eax + 4], edx
// 005d2b6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d2b70  894808               mov dword ptr [eax + 8], ecx
// 005d2b73  8b542414             mov edx, dword ptr [esp + 0x14]
// 005d2b77  89500c               mov dword ptr [eax + 0xc], edx
// 005d2b7a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d2b7e  894810               mov dword ptr [eax + 0x10], ecx
// 005d2b81  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005d2b85  895014               mov dword ptr [eax + 0x14], edx
// 005d2b88  894604               mov dword ptr [esi + 4], eax
// 005d2b8b  5e                   pop esi
// 005d2b8c  c21c00               ret 0x1c

struct S_func_005d2b30 {
    char pad0[4];
    int field4;
    int field8;
    void func_005d2b30(int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_004879d0(int*);
extern "C" int __stdcall sub_0062fef6(int);

void S_func_005d2b30::func_005d2b30(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int local;
    if (sub_004879d0(&local) == 0) {
        this->field8 = 0x5d2900;
        this->field4 = 0x5d2880;
        int* p = (int*)sub_0062fef6(0x18);
        if (p) {
            p[0] = local;
            p[1] = a1;
            p[2] = a2;
            p[3] = a3;
            p[4] = a4;
            p[5] = a5;
        }
        this->field4 = (int)p;
    }
}
