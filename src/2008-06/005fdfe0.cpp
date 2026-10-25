// from server: 100% by king_originala
// roc 2008-06 005fdfe0  unit: RBX::VTool::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdfe0
//
// 005fdfe0  53                   push ebx
// 005fdfe1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005fdfe5  85db                 test ebx, ebx
// 005fdfe7  7437                 je 0x5fe020
// 005fdfe9  57                   push edi
// 005fdfea  8bbb70010000         mov edi, dword ptr [ebx + 0x170]
// 005fdff0  85ff                 test edi, edi
// 005fdff2  742b                 je 0x5fe01f
// 005fdff4  56                   push esi
// 005fdff5  8bcf                 mov ecx, edi
// 005fdff7  e804ffffff           call 0x5fdf00
// 005fdffc  8bf0                 mov esi, eax
// 005fdffe  85f6                 test esi, esi
// 005fe000  741c                 je 0x5fe01e
// 005fe002  8bcb                 mov ecx, ebx
// 005fe004  e867e4e8ff           call 0x48c470
// 005fe009  50                   push eax
// 005fe00a  8bce                 mov ecx, esi
// 005fe00c  e8dfc8f5ff           call 0x55a8f0
// 005fe011  8bcf                 mov ecx, edi
// 005fe013  e8e8feffff           call 0x5fdf00
// 005fe018  8bf0                 mov esi, eax
// 005fe01a  85f6                 test esi, esi
// 005fe01c  75e4                 jne 0x5fe002
// 005fe01e  5e                   pop esi
// 005fe01f  5f                   pop edi
// 005fe020  5b                   pop ebx
// 005fe021  c3                   ret 

struct Item {
    void consume(int value);
};

struct List {
    Item* next();
};

struct Object {
    unsigned char padding[0x170];
    List* list;
    int value();
};

void __cdecl func_005fdfe0(Object* object)
{
    if (object) {
        List* list = object->list;
        if (list) {
            Item* item = list->next();
            while (item) {
                item->consume(object->value());
                item = list->next();
            }
        }
    }
}
