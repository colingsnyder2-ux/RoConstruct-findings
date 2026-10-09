// from server: 77% by colin
// roc 2007-08 00533c90  unit: RBX::Selection  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533c90
//
// 00533c90  53                   push ebx
// 00533c91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00533c95  8b83bc000000         mov eax, dword ptr [ebx + 0xbc]
// 00533c9b  85c0                 test eax, eax
// 00533c9d  56                   push esi
// 00533c9e  57                   push edi
// 00533c9f  8bf1                 mov esi, ecx
// 00533ca1  7413                 je 0x533cb6
// 00533ca3  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 00533ca9  85c9                 test ecx, ecx
// 00533cab  7405                 je 0x533cb2
// 00533cad  e82e68efff           call 0x42a4e0
// 00533cb2  8bf8                 mov edi, eax
// 00533cb4  eb02                 jmp 0x533cb8
// 00533cb6  8bfb                 mov edi, ebx
// 00533cb8  8b4ebc               mov ecx, dword ptr [esi - 0x44]
// 00533cbb  81c600ffffff         add esi, 0xffffff00
// 00533cc1  85c9                 test ecx, ecx
// 00533cc3  7407                 je 0x533ccc
// 00533cc5  e81668efff           call 0x42a4e0
// 00533cca  eb02                 jmp 0x533cce
// 00533ccc  8bc6                 mov eax, esi
// 00533cce  3bf8                 cmp edi, eax
// 00533cd0  7408                 je 0x533cda
// 00533cd2  53                   push ebx
// 00533cd3  8bce                 mov ecx, esi
// 00533cd5  e876f9ffff           call 0x533650
// 00533cda  5f                   pop edi
// 00533cdb  5e                   pop esi
// 00533cdc  5b                   pop ebx
// 00533cdd  c21000               ret 0x10

struct Instance {
    char pad[0xbc];
    Instance* parent;
};

struct Selection {
    void setSelection(Instance* instance);
    void addToSelection(Instance* instance);
};

extern "C" Instance* __fastcall sub_42A4E0(Instance* p);

void Selection::setSelection(Instance* instance)
{
    Instance* target;
    if (instance->parent != 0) {
        Instance* p = instance->parent;
        if (p->parent != 0) {
            target = sub_42A4E0(p->parent);
        } else {
            target = p;
        }
    } else {
        target = instance;
    }

    Selection* self = (Selection*)((char*)this - 0x100);
    Instance* other;
    if (*(Instance**)((char*)this - 0x44) != 0) {
        other = sub_42A4E0(*(Instance**)((char*)this - 0x44));
    } else {
        other = (Instance*)self;
    }

    if (target != other) {
        self->addToSelection(instance);
    }
}
