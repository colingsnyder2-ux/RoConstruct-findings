// from server: 100% by colin
// roc 2007-08 005d2690  unit: RBX::Tool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2690
//
// 005d2690  53                   push ebx
// 005d2691  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005d2695  85db                 test ebx, ebx
// 005d2697  7437                 je 0x5d26d0
// 005d2699  57                   push edi
// 005d269a  8bbb18010000         mov edi, dword ptr [ebx + 0x118]
// 005d26a0  85ff                 test edi, edi
// 005d26a2  742b                 je 0x5d26cf
// 005d26a4  56                   push esi
// 005d26a5  8bcf                 mov ecx, edi
// 005d26a7  e8d4fcffff           call 0x5d2380
// 005d26ac  8bf0                 mov esi, eax
// 005d26ae  85f6                 test esi, esi
// 005d26b0  741c                 je 0x5d26ce
// 005d26b2  8bcb                 mov ecx, ebx
// 005d26b4  e82761ebff           call 0x4887e0
// 005d26b9  50                   push eax
// 005d26ba  8bce                 mov ecx, esi
// 005d26bc  e86feff6ff           call 0x541630
// 005d26c1  8bcf                 mov ecx, edi
// 005d26c3  e8b8fcffff           call 0x5d2380
// 005d26c8  8bf0                 mov esi, eax
// 005d26ca  85f6                 test esi, esi
// 005d26cc  75e4                 jne 0x5d26b2
// 005d26ce  5e                   pop esi
// 005d26cf  5f                   pop edi
// 005d26d0  5b                   pop ebx
// 005d26d1  c3                   ret 

struct Tool {
    char pad[0x118];
    void* field_118;
};

struct Helper {
    void* sub_5D2380();
    void* sub_4887E0();
    void sub_541630(void* arg);
};

void sub_5D2690(Tool* self)
{
    if (self == 0)
        return;
    void* p = self->field_118;
    if (p == 0)
        return;
    Helper* h = (Helper*)p;
    void* v = h->sub_5D2380();
    while (v != 0) {
        void* a = ((Helper*)self)->sub_4887E0();
        ((Helper*)v)->sub_541630(a);
        v = h->sub_5D2380();
    }
}
