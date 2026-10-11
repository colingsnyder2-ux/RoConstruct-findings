// from server: 98% by colin
// roc 2007-08 005d2600  unit: RBX::Tool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2600
//
// 005d2600  837c240800           cmp dword ptr [esp + 8], 0
// 005d2605  7535                 jne 0x5d263c
// 005d2607  6a18                 push 0x18
// 005d2609  e8e8d80500           call 0x62fef6
// 005d260e  83c404               add esp, 4
// 005d2611  85c0                 test eax, eax
// 005d2613  7436                 je 0x5d264b
// 005d2615  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d2619  8b11                 mov edx, dword ptr [ecx]
// 005d261b  8910                 mov dword ptr [eax], edx
// 005d261d  8b5104               mov edx, dword ptr [ecx + 4]
// 005d2620  895004               mov dword ptr [eax + 4], edx
// 005d2623  8b5108               mov edx, dword ptr [ecx + 8]
// 005d2626  895008               mov dword ptr [eax + 8], edx
// 005d2629  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005d262c  89500c               mov dword ptr [eax + 0xc], edx
// 005d262f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005d2632  895010               mov dword ptr [eax + 0x10], edx
// 005d2635  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005d2638  894814               mov dword ptr [eax + 0x14], ecx
// 005d263b  c3                   ret 
// 005d263c  8b542404             mov edx, dword ptr [esp + 4]
// 005d2640  52                   push edx
// 005d2641  e81cd60500           call 0x62fc62
// 005d2646  83c404               add esp, 4
// 005d2649  33c0                 xor eax, eax
// 005d264b  c3                   ret 

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_0062fc62(void* ptr);

struct Tool
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
};

void* __cdecl func_005d2600(Tool* src, int flag)
{
    if (flag == 0)
    {
        Tool* dst = (Tool*)func_0062fef6(0x18);
        if (dst == 0)
            return 0;
        dst->field0 = src->field0;
        dst->field4 = src->field4;
        dst->field8 = src->field8;
        dst->fieldC = src->fieldC;
        dst->field10 = src->field10;
        dst->field14 = src->field14;
        return dst;
    }
    else
    {
        func_0062fc62(src);
        return 0;
    }
}
