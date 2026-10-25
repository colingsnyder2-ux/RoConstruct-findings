// from server: 100% by tester
// roc 2011-06 00561a00  unit: seg_00560000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00561a00
//
// 00561a00  8b542404             mov edx, dword ptr [esp + 4]
// 00561a04  33c9                 xor ecx, ecx
// 00561a06  3bd1                 cmp edx, ecx
// 00561a08  744f                 je 0x561a59
// 00561a0a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00561a0d  3bc1                 cmp eax, ecx
// 00561a0f  7448                 je 0x561a59
// 00561a11  89481c               mov dword ptr [eax + 0x1c], ecx
// 00561a14  894a14               mov dword ptr [edx + 0x14], ecx
// 00561a17  894a08               mov dword ptr [edx + 8], ecx
// 00561a1a  894a18               mov dword ptr [edx + 0x18], ecx
// 00561a1d  c7423001000000       mov dword ptr [edx + 0x30], 1
// 00561a24  8908                 mov dword ptr [eax], ecx
// 00561a26  894804               mov dword ptr [eax + 4], ecx
// 00561a29  89480c               mov dword ptr [eax + 0xc], ecx
// 00561a2c  894820               mov dword ptr [eax + 0x20], ecx
// 00561a2f  894828               mov dword ptr [eax + 0x28], ecx
// 00561a32  89482c               mov dword ptr [eax + 0x2c], ecx
// 00561a35  894830               mov dword ptr [eax + 0x30], ecx
// 00561a38  894838               mov dword ptr [eax + 0x38], ecx
// 00561a3b  89483c               mov dword ptr [eax + 0x3c], ecx
// 00561a3e  8d8830050000         lea ecx, [eax + 0x530]
// 00561a44  c7401400800000       mov dword ptr [eax + 0x14], 0x8000
// 00561a4b  89486c               mov dword ptr [eax + 0x6c], ecx
// 00561a4e  894850               mov dword ptr [eax + 0x50], ecx
// 00561a51  89484c               mov dword ptr [eax + 0x4c], ecx
// 00561a54  33c0                 xor eax, eax
// 00561a56  c20400               ret 4
// 00561a59  b8feffffff           mov eax, 0xfffffffe
// 00561a5e  c20400               ret 4

struct seg_00720000 {
    char pad0[0x14];
    int field_14;
    char pad18[0x4];
    int field_1c;
    char pad20[0x10];
    int field_30;
};

int __stdcall func_0072d180(seg_00720000* p)
{
    if (p != 0) {
        seg_00720000* q = (seg_00720000*)p->field_1c;
        if (q != 0) {
            q->field_1c = 0;
            p->field_14 = 0;
            *(int*)((char*)p + 8) = 0;
            *(int*)((char*)p + 0x18) = 0;
            p->field_30 = 1;
            *(int*)((char*)q + 0) = 0;
            *(int*)((char*)q + 4) = 0;
            *(int*)((char*)q + 0xc) = 0;
            *(int*)((char*)q + 0x20) = 0;
            *(int*)((char*)q + 0x28) = 0;
            *(int*)((char*)q + 0x2c) = 0;
            *(int*)((char*)q + 0x30) = 0;
            *(int*)((char*)q + 0x38) = 0;
            *(int*)((char*)q + 0x3c) = 0;
            int* r = (int*)((char*)q + 0x530);
            *(int*)((char*)q + 0x14) = 0x8000;
            *(int*)((char*)q + 0x6c) = (int)r;
            *(int*)((char*)q + 0x50) = (int)r;
            *(int*)((char*)q + 0x4c) = (int)r;
            return 0;
        }
    }
    return -2;
}
