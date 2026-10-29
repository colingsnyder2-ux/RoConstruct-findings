// roc 2009-06 0044c540  unit: CRobloxControlColorSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c540
//
// 0044c540  55                   push ebp
// 0044c541  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0044c545  56                   push esi
// 0044c546  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044c54a  3bf5                 cmp esi, ebp
// 0044c54c  7426                 je 0x44c574
// 0044c54e  53                   push ebx
// 0044c54f  57                   push edi
// 0044c550  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0044c554  8d5f08               lea ebx, [edi + 8]
// 0044c557  8b07                 mov eax, dword ptr [edi]
// 0044c559  8906                 mov dword ptr [esi], eax
// 0044c55b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044c55e  894e04               mov dword ptr [esi + 4], ecx
// 0044c561  53                   push ebx
// 0044c562  8d4e08               lea ecx, [esi + 8]
// 0044c565  ff1508fa8900         call dword ptr [0x89fa08]
// 0044c56b  83c60c               add esi, 0xc
// 0044c56e  3bf5                 cmp esi, ebp
// 0044c570  75e5                 jne 0x44c557
// 0044c572  5f                   pop edi
// 0044c573  5b                   pop ebx
// 0044c574  5e                   pop esi
// 0044c575  5d                   pop ebp
// 0044c576  c3                   ret 
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