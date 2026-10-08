// from server: 89% by colin
// roc 2007-08 0056d530  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d530
//
// 0056d530  56                   push esi
// 0056d531  8b742408             mov esi, dword ptr [esp + 8]
// 0056d535  85f6                 test esi, esi
// 0056d537  742c                 je 0x56d565
// 0056d539  8b0e                 mov ecx, dword ptr [esi]
// 0056d53b  85c9                 test ecx, ecx
// 0056d53d  7409                 je 0x56d548
// 0056d53f  8b01                 mov eax, dword ptr [ecx]
// 0056d541  8b5004               mov edx, dword ptr [eax + 4]
// 0056d544  ffd2                 call edx
// 0056d546  eb05                 jmp 0x56d54d
// 0056d548  b8c8278800           mov eax, 0x8827c8
// 0056d54d  68b4998900           push 0x8999b4
// 0056d552  8bc8                 mov ecx, eax
// 0056d554  ff1508e77700         call dword ptr [0x77e708]
// 0056d55a  84c0                 test al, al
// 0056d55c  7407                 je 0x56d565
// 0056d55e  8b06                 mov eax, dword ptr [esi]
// 0056d560  83c004               add eax, 4
// 0056d563  5e                   pop esi
// 0056d564  c3                   ret 
// 0056d565  33c0                 xor eax, eax
// 0056d567  5e                   pop esi
// 0056d568  c3                   ret 

struct type_info;

struct VNode {
    virtual type_info* getType();
};

struct sp_counted_base {
    virtual void dispose();
};

struct sp_counted_impl_p {
    sp_counted_base* px;
};

struct type_info_ops {
    bool equals(const type_info* other) const;
};

extern type_info type_info_basic_string;
extern type_info type_info_Vector3;

sp_counted_impl_p* func_0056d530(sp_counted_impl_p* p)
{
    if (p == 0)
        return 0;

    type_info* t;
    if (p->px != 0) {
        VNode* v = (VNode*)p->px;
        t = v->getType();
    } else {
        t = &type_info_basic_string;
    }

    if (((const type_info_ops*)t)->equals(&type_info_Vector3)) {
        return (sp_counted_impl_p*)((char*)p->px + 4);
    }
    return 0;
}
