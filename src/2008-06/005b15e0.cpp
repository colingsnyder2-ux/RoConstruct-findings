// from server: 100% by king_originala
// roc 2008-06 005b15e0  unit: RBX::Accoutrement  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b15e0
//
// 005b15e0  56                   push esi
// 005b15e1  8b742408             mov esi, dword ptr [esp + 8]
// 005b15e5  57                   push edi
// 005b15e6  56                   push esi
// 005b15e7  e8941dffff           call 0x5a3380
// 005b15ec  8bf8                 mov edi, eax
// 005b15ee  83c404               add esp, 4
// 005b15f1  85ff                 test edi, edi
// 005b15f3  7428                 je 0x5b161d
// 005b15f5  8bce                 mov ecx, esi
// 005b15f7  e824ffffff           call 0x5b1520
// 005b15fc  85c0                 test eax, eax
// 005b15fe  741d                 je 0x5b161d
// 005b1600  53                   push ebx
// 005b1601  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005b1605  3bc3                 cmp eax, ebx
// 005b1607  7408                 je 0x5b1611
// 005b1609  57                   push edi
// 005b160a  8bc8                 mov ecx, eax
// 005b160c  e8df92faff           call 0x55a8f0
// 005b1611  8bce                 mov ecx, esi
// 005b1613  e808ffffff           call 0x5b1520
// 005b1618  85c0                 test eax, eax
// 005b161a  75e9                 jne 0x5b1605
// 005b161c  5b                   pop ebx
// 005b161d  5f                   pop edi
// 005b161e  5e                   pop esi
// 005b161f  c3                   ret 

struct S {
    S* next();
    void attach(S*);
};

extern S* __cdecl lookup(S*);

void __cdecl func_005b15e0(S* source, S* excluded)
{
    S* parent = lookup(source);
    if (parent) {
        S* item = source->next();
        if (item) {
            do {
                if (item != excluded)
                    item->attach(parent);
                item = source->next();
            } while (item);
        }
    }
}
