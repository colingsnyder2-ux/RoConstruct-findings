// from server: 100% by king_originala
// roc 2008-06 0063c530  unit: RBX::DebrisService  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c530
//
// 0063c530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c534  85c0                 test eax, eax
// 0063c536  752f                 jne 0x63c567
// 0063c538  8b442408             mov eax, dword ptr [esp + 8]
// 0063c53c  85c0                 test eax, eax
// 0063c53e  744c                 je 0x63c58c
// 0063c540  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063c544  8b11                 mov edx, dword ptr [ecx]
// 0063c546  8910                 mov dword ptr [eax], edx
// 0063c548  8b5104               mov edx, dword ptr [ecx + 4]
// 0063c54b  895004               mov dword ptr [eax + 4], edx
// 0063c54e  8b5108               mov edx, dword ptr [ecx + 8]
// 0063c551  895008               mov dword ptr [eax + 8], edx
// 0063c554  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0063c557  89500c               mov dword ptr [eax + 0xc], edx
// 0063c55a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0063c55d  895010               mov dword ptr [eax + 0x10], edx
// 0063c560  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0063c563  894814               mov dword ptr [eax + 0x14], ecx
// 0063c566  c3                   ret 
// 0063c567  83f801               cmp eax, 1
// 0063c56a  7420                 je 0x63c58c
// 0063c56c  56                   push esi
// 0063c56d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063c571  8b0e                 mov ecx, dword ptr [esi]
// 0063c573  68f0159600           push 0x9615f0
// 0063c578  ff1578288000         call dword ptr [0x802878]
// 0063c57e  0fb6d0               movzx edx, al
// 0063c581  f7da                 neg edx
// 0063c583  1bd2                 sbb edx, edx
// 0063c585  23542408             and edx, dword ptr [esp + 8]
// 0063c589  8916                 mov dword ptr [esi], edx
// 0063c58b  5e                   pop esi
// 0063c58c  c3                   ret 

struct TypeDescriptor
{
    unsigned long vtable;
    unsigned long spare;
    char name[sizeof(".?AV?$bind_t@XV?$mf1@XVSeat@RBX@@_N@_mfi@boost@@V?$list2@V?$value@PAVSeat@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@")];
};

static const TypeDescriptor functor_type = {
    0x00850180UL,
    0,
    ".?AV?$bind_t@XV?$mf1@XVSeat@RBX@@_N@_mfi@boost@@V?$list2@V?$value@PAVSeat@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@"
};

typedef bool (__thiscall *TypeEqual)(const void*, const void*);
extern TypeEqual type_equal;

struct Functor
{
    unsigned long words[6];
};

union FunctionBuffer
{
    void* obj_ptr;
    const void* const_obj_ptr;
    mutable char data;
};

void __cdecl manager(const FunctionBuffer& in_buffer,
                     FunctionBuffer& out_buffer, int op)
{
    if (op == 0) {
        if (&out_buffer != 0)
            *reinterpret_cast<Functor*>(&out_buffer.data) =
                *reinterpret_cast<const Functor*>(&in_buffer.data);
    } else if (op != 1) {
        if (type_equal(out_buffer.const_obj_ptr, &functor_type))
            out_buffer.obj_ptr = &in_buffer.data;
        else
            out_buffer.obj_ptr = 0;
    }
}
