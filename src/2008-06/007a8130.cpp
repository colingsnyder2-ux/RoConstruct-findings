// from server: 100% by tester
// roc 2008-06 007a8130  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a8130
//
// 007a8130  8b542404             mov edx, dword ptr [esp + 4]
// 007a8134  33c9                 xor ecx, ecx
// 007a8136  3bd1                 cmp edx, ecx
// 007a8138  744f                 je 0x7a8189
// 007a813a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007a813d  3bc1                 cmp eax, ecx
// 007a813f  7448                 je 0x7a8189
// 007a8141  89481c               mov dword ptr [eax + 0x1c], ecx
// 007a8144  894a14               mov dword ptr [edx + 0x14], ecx
// 007a8147  894a08               mov dword ptr [edx + 8], ecx
// 007a814a  894a18               mov dword ptr [edx + 0x18], ecx
// 007a814d  c7423001000000       mov dword ptr [edx + 0x30], 1
// 007a8154  8908                 mov dword ptr [eax], ecx
// 007a8156  894804               mov dword ptr [eax + 4], ecx
// 007a8159  89480c               mov dword ptr [eax + 0xc], ecx
// 007a815c  894820               mov dword ptr [eax + 0x20], ecx
// 007a815f  894828               mov dword ptr [eax + 0x28], ecx
// 007a8162  89482c               mov dword ptr [eax + 0x2c], ecx
// 007a8165  894830               mov dword ptr [eax + 0x30], ecx
// 007a8168  894838               mov dword ptr [eax + 0x38], ecx
// 007a816b  89483c               mov dword ptr [eax + 0x3c], ecx
// 007a816e  8d8830050000         lea ecx, [eax + 0x530]
// 007a8174  c7401400800000       mov dword ptr [eax + 0x14], 0x8000
// 007a817b  89486c               mov dword ptr [eax + 0x6c], ecx
// 007a817e  894850               mov dword ptr [eax + 0x50], ecx
// 007a8181  89484c               mov dword ptr [eax + 0x4c], ecx
// 007a8184  33c0                 xor eax, eax
// 007a8186  c20400               ret 4
// 007a8189  b8feffffff           mov eax, 0xfffffffe
// 007a818e  c20400               ret 4

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
