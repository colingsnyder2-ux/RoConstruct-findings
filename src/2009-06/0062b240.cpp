// from server: 90% by atomic.potato
// roc 2009-06 0062b240  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b240
//
// 0062b240  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b244  33c9                 xor ecx, ecx
// 0062b246  3bc1                 cmp eax, ecx
// 0062b248  7441                 je 0x62b28b
// 0062b24a  83f801               cmp eax, 1
// 0062b24d  743c                 je 0x62b28b
// 0062b24f  83f802               cmp eax, 2
// 0062b252  744d                 je 0x62b2a1
// 0062b254  83f803               cmp eax, 3
// 0062b257  7521                 jne 0x62b27a
// 0062b259  56                   push esi
// 0062b25a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b25e  8b0e                 mov ecx, dword ptr [esi]
// 0062b260  68c0bda000           push 0xa0bdc0
// 0062b265  ff15a4e98900         call dword ptr [0x89e9a4]
// 0062b26b  0fb6c0               movzx eax, al
// 0062b26e  f7d8                 neg eax
// 0062b270  1bc0                 sbb eax, eax
// 0062b272  23442408             and eax, dword ptr [esp + 8]
// 0062b276  8906                 mov dword ptr [esi], eax
// 0062b278  5e                   pop esi
// 0062b279  c3                   ret 
// 0062b27a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b27e  c700c0bda000         mov dword ptr [eax], 0xa0bdc0
// 0062b284  884804               mov byte ptr [eax + 4], cl
// 0062b287  884805               mov byte ptr [eax + 5], cl
// 0062b28a  c3                   ret 
// 0062b28b  8b442408             mov eax, dword ptr [esp + 8]
// 0062b28f  3bc1                 cmp eax, ecx
// 0062b291  740e                 je 0x62b2a1
// 0062b293  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b297  8b11                 mov edx, dword ptr [ecx]
// 0062b299  8910                 mov dword ptr [eax], edx
// 0062b29b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062b29e  894804               mov dword ptr [eax + 4], ecx
// 0062b2a1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __stdcall G1_func_0089e9a4;

struct S {
};

void __cdecl f(int a, void* b, int c)
{
    if (a == 0 || a == 1) {
        if (b != 0) {
            *(int*)b = *(int*)c;
            *(int*)((char*)b + 4) = *(int*)((char*)c + 4);
        }
        return;
    }
    if (a == 2) {
        return;
    }
    if (a == 3) {
        int* p = (int*)b;
        int v = *p;
        bool r = ((type_info*)v)->operator==(*(type_info*)0xa0bdc0);
        *p = r ? c : 0;
        return;
    }
    *(int*)b = 0xa0bdc0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
