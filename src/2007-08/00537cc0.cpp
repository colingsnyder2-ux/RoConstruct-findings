// from server: 82% by colin
// roc 2007-08 00537cc0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537cc0
//
// 00537cc0  8b442408             mov eax, dword ptr [esp + 8]
// 00537cc4  83f802               cmp eax, 2
// 00537cc7  7519                 jne 0x537ce2
// 00537cc9  56                   push esi
// 00537cca  8b742408             mov esi, dword ptr [esp + 8]
// 00537cce  56                   push esi
// 00537ccf  b9f89b8900           mov ecx, 0x899bf8
// 00537cd4  ff1508e77700         call dword ptr [0x77e708]
// 00537cda  f6d8                 neg al
// 00537cdc  1bc0                 sbb eax, eax
// 00537cde  23c6                 and eax, esi
// 00537ce0  5e                   pop esi
// 00537ce1  c3                   ret 
// 00537ce2  85c0                 test eax, eax
// 00537ce4  7529                 jne 0x537d0f
// 00537ce6  6a10                 push 0x10
// 00537ce8  e809820f00           call 0x62fef6
// 00537ced  83c404               add esp, 4
// 00537cf0  85c0                 test eax, eax
// 00537cf2  742a                 je 0x537d1e
// 00537cf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537cf8  8b11                 mov edx, dword ptr [ecx]
// 00537cfa  8910                 mov dword ptr [eax], edx
// 00537cfc  8b5104               mov edx, dword ptr [ecx + 4]
// 00537cff  895004               mov dword ptr [eax + 4], edx
// 00537d02  8b5108               mov edx, dword ptr [ecx + 8]
// 00537d05  895008               mov dword ptr [eax + 8], edx
// 00537d08  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00537d0b  89480c               mov dword ptr [eax + 0xc], ecx
// 00537d0e  c3                   ret 
// 00537d0f  8b542404             mov edx, dword ptr [esp + 4]
// 00537d13  52                   push edx
// 00537d14  e8497f0f00           call 0x62fc62
// 00537d19  83c404               add esp, 4
// 00537d1c  33c0                 xor eax, eax
// 00537d1e  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    void* __cdecl f(int, void*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void* S::f(int mode, void* arg)
{
    if (mode == 2) {
        type_info* ti = (type_info*)0x899bf8;
        bool eq = ti->operator==(*(type_info*)arg);
        return eq ? arg : 0;
    }
    if (mode == 0) {
        void* p = operator_new(0x10);
        if (p != 0) {
            *(int*)p = *(int*)arg;
            *(int*)((char*)p + 4) = *(int*)((char*)arg + 4);
            *(int*)((char*)p + 8) = *(int*)((char*)arg + 8);
            *(int*)((char*)p + 12) = *(int*)((char*)arg + 12);
        }
        return p;
    }
    operator_delete(arg);
    return 0;
}
