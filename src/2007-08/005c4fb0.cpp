// from server: 54% by colin
// roc 2007-08 005c4fb0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4fb0
//
// 005c4fb0  53                   push ebx
// 005c4fb1  55                   push ebp
// 005c4fb2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005c4fb6  85ed                 test ebp, ebp
// 005c4fb8  56                   push esi
// 005c4fb9  8bf1                 mov esi, ecx
// 005c4fbb  7406                 je 0x5c4fc3
// 005c4fbd  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 005c4fc1  7406                 je 0x5c4fc9
// 005c4fc3  ff15d8e67700         call dword ptr [0x77e6d8]
// 005c4fc9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005c4fcd  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c4fd1  3bd8                 cmp ebx, eax
// 005c4fd3  7425                 je 0x5c4ffa
// 005c4fd5  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c4fd8  57                   push edi
// 005c4fd9  53                   push ebx
// 005c4fda  51                   push ecx
// 005c4fdb  50                   push eax
// 005c4fdc  e89ffeffff           call 0x5c4e80
// 005c4fe1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005c4fe5  52                   push edx
// 005c4fe6  8bf8                 mov edi, eax
// 005c4fe8  8b4608               mov eax, dword ptr [esi + 8]
// 005c4feb  56                   push esi
// 005c4fec  50                   push eax
// 005c4fed  57                   push edi
// 005c4fee  e8ed3ef7ff           call 0x538ee0
// 005c4ff3  83c41c               add esp, 0x1c
// 005c4ff6  897e08               mov dword ptr [esi + 8], edi
// 005c4ff9  5f                   pop edi
// 005c4ffa  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c4ffe  5e                   pop esi
// 005c4fff  8928                 mov dword ptr [eax], ebp
// 005c5001  5d                   pop ebp
// 005c5002  895804               mov dword ptr [eax + 4], ebx
// 005c5005  5b                   pop ebx
// 005c5006  c21400               ret 0x14

struct S {
    char pad[8];
    void* field_8;
    void assign(void* a, void* b, void* c, void* d, void* e);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __cdecl sub_5c4e80(void* a, void* b, void* c);
void __cdecl sub_538ee0(void* a, void* b, void* c, void* d);

void S::assign(void* a, void* b, void* c, void* d, void* e) {
    if (a == 0 || a != e) {
        _invalid_parameter_noinfo();
    }
    if (b != c) {
        void* p = sub_5c4e80(field_8, c, b);
        sub_538ee0(p, field_8, this, d);
        field_8 = p;
    }
    *(void**)a = b;
    *(void**)((char*)a + 4) = c;
}
