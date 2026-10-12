// from server: 100% by king_originala
// roc 2008-06 0044e460  unit: CRobloxControlColorSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e460
//
// 0044e460  55                   push ebp
// 0044e461  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0044e465  56                   push esi
// 0044e466  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044e46a  3bf5                 cmp esi, ebp
// 0044e46c  7426                 je 0x44e494
// 0044e46e  53                   push ebx
// 0044e46f  57                   push edi
// 0044e470  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0044e474  8d5f08               lea ebx, [edi + 8]
// 0044e477  8b07                 mov eax, dword ptr [edi]
// 0044e479  8906                 mov dword ptr [esi], eax
// 0044e47b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044e47e  894e04               mov dword ptr [esi + 4], ecx
// 0044e481  53                   push ebx
// 0044e482  8d4e08               lea ecx, [esi + 8]
// 0044e485  ff1544318000         call dword ptr [0x803144]
// 0044e48b  83c60c               add esi, 0xc
// 0044e48e  3bf5                 cmp esi, ebp
// 0044e490  75e5                 jne 0x44e477
// 0044e492  5f                   pop edi
// 0044e493  5b                   pop ebx
// 0044e494  5e                   pop esi
// 0044e495  5d                   pop ebp
// 0044e496  c3                   ret 

struct Component {
    unsigned int value;
};

extern void (__thiscall *assignComponent)(Component *, const Component *);

struct Item {
    unsigned int first;
    unsigned int second;
    Component component;
};

void fillItems(Item *first, Item *last, const Item *value)
{
    for (; first != last; ++first) {
        first->first = value->first;
        first->second = value->second;
        assignComponent(&first->component, &value->component);
    }
}
