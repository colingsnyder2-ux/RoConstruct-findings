// from server: 100% by colin
// roc 2007-08 00725cd0  unit: boost::thread_resource_error  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725cd0
//
// 00725cd0  56                   push esi
// 00725cd1  8b31                 mov esi, dword ptr [ecx]
// 00725cd3  85f6                 test esi, esi
// 00725cd5  7435                 je 0x725d0c
// 00725cd7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00725cda  85c0                 test eax, eax
// 00725cdc  7409                 je 0x725ce7
// 00725cde  50                   push eax
// 00725cdf  e87e9ff0ff           call 0x62fc62
// 00725ce4  83c404               add esp, 4
// 00725ce7  8bce                 mov ecx, esi
// 00725ce9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00725cf0  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00725cf7  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00725cfe  e81dfaffff           call 0x725720
// 00725d03  56                   push esi
// 00725d04  e8599ff0ff           call 0x62fc62
// 00725d09  83c404               add esp, 4
// 00725d0c  5e                   pop esi
// 00725d0d  c3                   ret 

extern "C" void __cdecl free_0062fc62(void*);

struct Inner {
    void method_00725720();
};

struct Outer {
    Inner* ptr;
    void method_00725cd0();
};

void Outer::method_00725cd0()
{
    Inner* p = ptr;
    if (p != 0) {
        void* q = *(void**)((char*)p + 0xc);
        if (q != 0) {
            free_0062fc62(q);
        }
        *(int*)((char*)p + 0xc) = 0;
        *(int*)((char*)p + 0x10) = 0;
        *(int*)((char*)p + 0x14) = 0;
        p->method_00725720();
        free_0062fc62(p);
    }
}
