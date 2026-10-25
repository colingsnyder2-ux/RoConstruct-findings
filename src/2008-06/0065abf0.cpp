// from server: 100% by king_originala
// roc 2008-06 0065abf0  unit: RBX::BallBallContact  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065abf0
//
// 0065abf0  53                   push ebx
// 0065abf1  56                   push esi
// 0065abf2  57                   push edi
// 0065abf3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065abf7  33f6                 xor esi, esi
// 0065abf9  397704               cmp dword ptr [edi + 4], esi
// 0065abfc  8bd9                 mov ebx, ecx
// 0065abfe  7e1a                 jle 0x65ac1a
// 0065ac00  8b07                 mov eax, dword ptr [edi]
// 0065ac02  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0065ac05  8d8880000000         lea ecx, [eax + 0x80]
// 0065ac0b  51                   push ecx
// 0065ac0c  50                   push eax
// 0065ac0d  8bcb                 mov ecx, ebx
// 0065ac0f  e83cfdffff           call 0x65a950
// 0065ac14  46                   inc esi
// 0065ac15  3b7704               cmp esi, dword ptr [edi + 4]
// 0065ac18  7ce6                 jl 0x65ac00
// 0065ac1a  5f                   pop edi
// 0065ac1b  5e                   pop esi
// 0065ac1c  5b                   pop ebx
// 0065ac1d  c20400               ret 4

struct Item {
    char data[0x80];
};

struct ItemList {
    Item** items;
    int count;
};

struct S {
    void process(Item*, void*);
    void f(ItemList*);
};

void S::f(ItemList* list)
{
    for (int i = 0; i < list->count; ++i) {
        Item* item = list->items[i];
        process(item, reinterpret_cast<char*>(item) + 0x80);
    }
}
