// roc 2009-12 00452b60  unit: CRobloxControlColorSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452b60
//
// 00452b60  55                   push ebp
// 00452b61  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00452b65  56                   push esi
// 00452b66  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00452b6a  3bf5                 cmp esi, ebp
// 00452b6c  7426                 je 0x452b94
// 00452b6e  53                   push ebx
// 00452b6f  57                   push edi
// 00452b70  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00452b74  8d5f08               lea ebx, [edi + 8]
// 00452b77  8b07                 mov eax, dword ptr [edi]
// 00452b79  8906                 mov dword ptr [esi], eax
// 00452b7b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00452b7e  894e04               mov dword ptr [esi + 4], ecx
// 00452b81  53                   push ebx
// 00452b82  8d4e08               lea ecx, [esi + 8]
// 00452b85  ff1538d59800         call dword ptr [0x98d538]
// 00452b8b  83c60c               add esi, 0xc
// 00452b8e  3bf5                 cmp esi, ebp
// 00452b90  75e5                 jne 0x452b77
// 00452b92  5f                   pop edi
// 00452b93  5b                   pop ebx
// 00452b94  5e                   pop esi
// 00452b95  5d                   pop ebp
// 00452b96  c3                   ret 
// copied from an identical function in another client (function ?fillItems@@YAXPAUItem@@0PBU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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