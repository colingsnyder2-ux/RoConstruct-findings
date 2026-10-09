// from server: 84% by colin
// roc 2007-08 00537e80  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537e80
//
// 00537e80  8b442408             mov eax, dword ptr [esp + 8]
// 00537e84  83f802               cmp eax, 2
// 00537e87  7519                 jne 0x537ea2
// 00537e89  56                   push esi
// 00537e8a  8b742408             mov esi, dword ptr [esp + 8]
// 00537e8e  56                   push esi
// 00537e8f  b9709e8900           mov ecx, 0x899e70
// 00537e94  ff1508e77700         call dword ptr [0x77e708]
// 00537e9a  f6d8                 neg al
// 00537e9c  1bc0                 sbb eax, eax
// 00537e9e  23c6                 and eax, esi
// 00537ea0  5e                   pop esi
// 00537ea1  c3                   ret 
// 00537ea2  85c0                 test eax, eax
// 00537ea4  7523                 jne 0x537ec9
// 00537ea6  6a0c                 push 0xc
// 00537ea8  e849800f00           call 0x62fef6
// 00537ead  83c404               add esp, 4
// 00537eb0  85c0                 test eax, eax
// 00537eb2  7424                 je 0x537ed8
// 00537eb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537eb8  8b11                 mov edx, dword ptr [ecx]
// 00537eba  8910                 mov dword ptr [eax], edx
// 00537ebc  8b5104               mov edx, dword ptr [ecx + 4]
// 00537ebf  895004               mov dword ptr [eax + 4], edx
// 00537ec2  8b4908               mov ecx, dword ptr [ecx + 8]
// 00537ec5  894808               mov dword ptr [eax + 8], ecx
// 00537ec8  c3                   ret 
// 00537ec9  8b542404             mov edx, dword ptr [esp + 4]
// 00537ecd  52                   push edx
// 00537ece  e88f7d0f00           call 0x62fc62
// 00537ed3  83c404               add esp, 4
// 00537ed6  33c0                 xor eax, eax
// 00537ed8  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct VNode {
    void* m0;
    void* m4;
    void* m8;
};

struct S {
};

void* __cdecl f(void* a1, int a2)
{
    if (a2 == 2) {
        void* p = a1;
        if (*(const type_info*)0x899e70 == *(const type_info*)a1)
            return p;
        return 0;
    }
    if (a2 == 0) {
        VNode* n = (VNode*)operator_new(0xc);
        if (n) {
            VNode* src = (VNode*)a1;
            n->m0 = src->m0;
            n->m4 = src->m4;
            n->m8 = src->m8;
        }
        return n;
    }
    operator_delete(a1);
    return 0;
}
