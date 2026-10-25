// from server: 64% by atomic.potato
// roc 2011-06 0063e120  unit: RBX::Workspace  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e120
//
// 0063e120  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e124  33c9                 xor ecx, ecx
// 0063e126  3bc1                 cmp eax, ecx
// 0063e128  7441                 je 0x63e16b
// 0063e12a  83f801               cmp eax, 1
// 0063e12d  743c                 je 0x63e16b
// 0063e12f  83f802               cmp eax, 2
// 0063e132  7459                 je 0x63e18d
// 0063e134  83f803               cmp eax, 3
// 0063e137  7521                 jne 0x63e15a
// 0063e139  56                   push esi
// 0063e13a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e13e  8b0e                 mov ecx, dword ptr [esi]
// 0063e140  683817c500           push 0xc51738
// 0063e145  ff15500aa400         call dword ptr [0xa40a50]
// 0063e14b  0fb6c0               movzx eax, al
// 0063e14e  f7d8                 neg eax
// 0063e150  1bc0                 sbb eax, eax
// 0063e152  23442408             and eax, dword ptr [esp + 8]
// 0063e156  8906                 mov dword ptr [esi], eax
// 0063e158  5e                   pop esi
// 0063e159  c3                   ret 
// 0063e15a  8b442408             mov eax, dword ptr [esp + 8]
// 0063e15e  c7003817c500         mov dword ptr [eax], 0xc51738
// 0063e164  884804               mov byte ptr [eax + 4], cl
// 0063e167  884805               mov byte ptr [eax + 5], cl
// 0063e16a  c3                   ret 
// 0063e16b  8b442408             mov eax, dword ptr [esp + 8]
// 0063e16f  3bc1                 cmp eax, ecx
// 0063e171  741a                 je 0x63e18d
// 0063e173  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063e177  8b11                 mov edx, dword ptr [ecx]
// 0063e179  8910                 mov dword ptr [eax], edx
// 0063e17b  8b5104               mov edx, dword ptr [ecx + 4]
// 0063e17e  895004               mov dword ptr [eax + 4], edx
// 0063e181  8b5108               mov edx, dword ptr [ecx + 8]
// 0063e184  895008               mov dword ptr [eax + 8], edx
// 0063e187  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0063e18a  89480c               mov dword ptr [eax + 0xc], ecx
// 0063e18d  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" type_info* __stdcall get_type_info(const char*);

struct S {
};

int __cdecl f(int a, void* b, int c)
{
    if (c == 0 || c == 1) {
        if (b != 0) {
            *(int*)((char*)b + 0) = *(int*)((char*)&a + 0);
            *(int*)((char*)b + 4) = *(int*)((char*)&a + 4);
            *(int*)((char*)b + 8) = *(int*)((char*)&a + 8);
            *(int*)((char*)b + 12) = *(int*)((char*)&a + 12);
        }
        return 0;
    }
    if (c == 2) {
        return 0;
    }
    if (c == 3) {
        int* p = (int*)b;
        type_info* t = get_type_info(".?AV?$bind_t@HV?$cmf0@HVKernel@RBX@@@_mfi@boost@@V?$list1@V?$value@PBVKernel@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@");
        int r = (*t == *(type_info*)0xc51738) ? 0 : 0;
        *p = r & a;
        return 0;
    }
    *(int*)b = 0xc51738;
    *(char*)((char*)b + 4) = 0;
    *(char*)((char*)b + 5) = 0;
    return 0;
}
