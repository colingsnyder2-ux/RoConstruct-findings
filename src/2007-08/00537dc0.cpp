// from server: 83% by colin
// roc 2007-08 00537dc0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537dc0
//
// 00537dc0  8b442408             mov eax, dword ptr [esp + 8]
// 00537dc4  83f802               cmp eax, 2
// 00537dc7  7519                 jne 0x537de2
// 00537dc9  56                   push esi
// 00537dca  8b742408             mov esi, dword ptr [esp + 8]
// 00537dce  56                   push esi
// 00537dcf  b9e09c8900           mov ecx, 0x899ce0
// 00537dd4  ff1508e77700         call dword ptr [0x77e708]
// 00537dda  f6d8                 neg al
// 00537ddc  1bc0                 sbb eax, eax
// 00537dde  23c6                 and eax, esi
// 00537de0  5e                   pop esi
// 00537de1  c3                   ret 
// 00537de2  85c0                 test eax, eax
// 00537de4  751d                 jne 0x537e03
// 00537de6  6a08                 push 8
// 00537de8  e809810f00           call 0x62fef6
// 00537ded  83c404               add esp, 4
// 00537df0  85c0                 test eax, eax
// 00537df2  741e                 je 0x537e12
// 00537df4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537df8  8b11                 mov edx, dword ptr [ecx]
// 00537dfa  8910                 mov dword ptr [eax], edx
// 00537dfc  8b4904               mov ecx, dword ptr [ecx + 4]
// 00537dff  894804               mov dword ptr [eax + 4], ecx
// 00537e02  c3                   ret 
// 00537e03  8b542404             mov edx, dword ptr [esp + 4]
// 00537e07  52                   push edx
// 00537e08  e8557e0f00           call 0x62fc62
// 00537e0d  83c404               add esp, 4
// 00537e10  33c0                 xor eax, eax
// 00537e12  c3                   ret 

struct S_func_00537dc0 {
};

extern "C" int __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_0062fc62(void*);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info G_typeinfo_00899ce0;
extern bool (__thiscall *G_ptr_0077e708)(const type_info*, const type_info*);

void* __cdecl f(int a1, int a2)
{
    if (a2 == 2) {
        return (G_ptr_0077e708(&G_typeinfo_00899ce0, (const type_info*)a1)) ? (void*)a1 : 0;
    }
    if (a2 == 0) {
        void* p = (void*)func_0062fef6(8);
        if (p != 0) {
            *(int*)p = *(int*)a1;
            *(int*)((char*)p + 4) = *(int*)(a1 + 4);
        }
        return p;
    }
    func_0062fc62((void*)a1);
    return 0;
}
