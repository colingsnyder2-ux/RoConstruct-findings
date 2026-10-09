// from server: 65% by colin
// roc 2007-08 0042b400  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b400
//
// 0042b400  56                   push esi
// 0042b401  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042b405  83c610               add esi, 0x10
// 0042b408  57                   push edi
// 0042b409  8bf9                 mov edi, ecx
// 0042b40b  742c                 je 0x42b439
// 0042b40d  8b0e                 mov ecx, dword ptr [esi]
// 0042b40f  85c9                 test ecx, ecx
// 0042b411  7409                 je 0x42b41c
// 0042b413  8b01                 mov eax, dword ptr [ecx]
// 0042b415  8b5004               mov edx, dword ptr [eax + 4]
// 0042b418  ffd2                 call edx
// 0042b41a  eb05                 jmp 0x42b421
// 0042b41c  b8c8278800           mov eax, 0x8827c8
// 0042b421  68183c8800           push 0x883c18
// 0042b426  8bc8                 mov ecx, eax
// 0042b428  ff1508e77700         call dword ptr [0x77e708]
// 0042b42e  84c0                 test al, al
// 0042b430  7407                 je 0x42b439
// 0042b432  8b36                 mov esi, dword ptr [esi]
// 0042b434  83c604               add esi, 4
// 0042b437  eb02                 jmp 0x42b43b
// 0042b439  33f6                 xor esi, esi
// 0042b43b  8b07                 mov eax, dword ptr [edi]
// 0042b43d  83ec1c               sub esp, 0x1c
// 0042b440  8bcc                 mov ecx, esp
// 0042b442  8964242c             mov dword ptr [esp + 0x2c], esp
// 0042b446  50                   push eax
// 0042b447  ff159ce67700         call dword ptr [0x77e69c]
// 0042b44d  8bce                 mov ecx, esi
// 0042b44f  e85cfaffff           call 0x42aeb0
// 0042b454  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b458  5f                   pop edi
// 0042b459  5e                   pop esi
// 0042b45a  c20800               ret 8

struct std_string {
    std_string(const std_string&);
};

struct type_info {
    bool operator==(const type_info&) const;
};

struct boost_function_holder {
    void* vtable;
    void* obj;
};

struct Reflection {
    void* classes;
    void get(const boost_function_holder& holder, const std_string& name);
};

extern "C" {
    void* __stdcall func_77e69c(void*);
    int __stdcall func_77e708(void*, const void*);
}

extern const char str_8827c8[];
extern const char str_883c18[];

void func_0042aeb0(void*, const boost_function_holder*);

void Reflection::get(const boost_function_holder& holder, const std_string& name)
{
    boost_function_holder* p = (boost_function_holder*)((char*)&holder + 0x10);
    void* result;
    if (p != 0) {
        void* obj = p->obj;
        if (obj != 0) {
            void** vtbl = *(void***)obj;
            typedef void* (__thiscall *Fn)(void*);
            Fn fn = (Fn)vtbl[1];
            result = fn(obj);
        } else {
            result = (void*)str_8827c8;
        }
        if (func_77e708(result, str_883c18)) {
            result = (char*)p->obj + 4;
        } else {
            result = 0;
        }
    } else {
        result = 0;
    }
    void* tmp = *(void**)this;
    void* buf[7];
    func_77e69c(tmp);
    func_0042aeb0(result, &holder);
}
