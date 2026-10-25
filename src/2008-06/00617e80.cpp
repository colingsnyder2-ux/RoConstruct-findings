// from server: 100% by king_originala
// roc 2008-06 00617e80  unit: RBX::NullTool  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617e80
//
// 00617e80  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00617e83  50                   push eax
// 00617e84  e8172ee8ff           call 0x49aca0
// 00617e89  83c404               add esp, 4
// 00617e8c  85c0                 test eax, eax
// 00617e8e  742a                 je 0x617eba
// 00617e90  50                   push eax
// 00617e91  e88a1bfcff           call 0x5d9a20
// 00617e96  83c404               add esp, 4
// 00617e99  85c0                 test eax, eax
// 00617e9b  741d                 je 0x617eba
// 00617e9d  8bc8                 mov ecx, eax
// 00617e9f  e86c0bfcff           call 0x5d8a10
// 00617ea4  85c0                 test eax, eax
// 00617ea6  7412                 je 0x617eba
// 00617ea8  d9ee                 fldz 
// 00617eaa  d89828030000         fcomp dword ptr [eax + 0x328]
// 00617eb0  dfe0                 fnstsw ax
// 00617eb2  f6c444               test ah, 0x44
// 00617eb5  7a03                 jp 0x617eba
// 00617eb7  b001                 mov al, 1
// 00617eb9  c3                   ret 
// 00617eba  32c0                 xor al, al
// 00617ebc  c3                   ret 

struct Value {
    char padding[0x328];
    float value;
};

struct Object {
    Value* getValue();
};

extern "C" void* __cdecl lookup(void*);
extern "C" Object* __cdecl getObject(void*);

struct S {
    char padding[0x18];
    void* context;
    bool f();
};

bool S::f()
{
    void* p = lookup(context);
    if (p) {
        Object* object = getObject(p);
        if (object) {
            Value* v = object->getValue();
            if (v && v->value == 0.0f)
                return true;
        }
    }
    return false;
}
