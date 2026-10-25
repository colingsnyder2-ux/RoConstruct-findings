// from server: 100% by king_originala
// roc 2008-06 006593d0  unit: RBX::BallBallContact  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006593d0
//
// 006593d0  83ec18               sub esp, 0x18
// 006593d3  57                   push edi
// 006593d4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006593d8  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 006593db  85c9                 test ecx, ecx
// 006593dd  7476                 je 0x659455
// 006593df  8b442424             mov eax, dword ptr [esp + 0x24]
// 006593e3  8b5064               mov edx, dword ptr [eax + 0x64]
// 006593e6  85d2                 test edx, edx
// 006593e8  746b                 je 0x659455
// 006593ea  0fb74920             movzx ecx, word ptr [ecx + 0x20]
// 006593ee  0fb75220             movzx edx, word ptr [edx + 0x20]
// 006593f2  3bca                 cmp ecx, edx
// 006593f4  7517                 jne 0x65940d
// 006593f6  83c068               add eax, 0x68
// 006593f9  50                   push eax
// 006593fa  83c768               add edi, 0x68
// 006593fd  57                   push edi
// 006593fe  e82dffffff           call 0x659330
// 00659403  83c408               add esp, 8
// 00659406  5f                   pop edi
// 00659407  83c418               add esp, 0x18
// 0065940a  c20800               ret 8
// 0065940d  3bca                 cmp ecx, edx
// 0065940f  56                   push esi
// 00659410  7e04                 jle 0x659416
// 00659412  8bf7                 mov esi, edi
// 00659414  eb08                 jmp 0x65941e
// 00659416  8bf0                 mov esi, eax
// 00659418  3bc7                 cmp eax, edi
// 0065941a  7402                 je 0x65941e
// 0065941c  8bc7                 mov eax, edi
// 0065941e  8b5664               mov edx, dword ptr [esi + 0x64]
// 00659421  8d4868               lea ecx, [eax + 0x68]
// 00659424  51                   push ecx
// 00659425  0fb74a20             movzx ecx, word ptr [edx + 0x20]
// 00659429  8b5064               mov edx, dword ptr [eax + 0x64]
// 0065942c  0fb74220             movzx eax, word ptr [edx + 0x20]
// 00659430  51                   push ecx
// 00659431  50                   push eax
// 00659432  8d4c2414             lea ecx, [esp + 0x14]
// 00659436  51                   push ecx
// 00659437  e834ffffff           call 0x659370
// 0065943c  8d542418             lea edx, [esp + 0x18]
// 00659440  52                   push edx
// 00659441  83c668               add esi, 0x68
// 00659444  56                   push esi
// 00659445  e8e6feffff           call 0x659330
// 0065944a  83c418               add esp, 0x18
// 0065944d  5e                   pop esi
// 0065944e  5f                   pop edi
// 0065944f  83c418               add esp, 0x18
// 00659452  c20800               ret 8
// 00659455  32c0                 xor al, al
// 00659457  5f                   pop edi
// 00659458  83c418               add esp, 0x18
// 0065945b  c20800               ret 8

struct Box {
    int minX, minY, minZ;
    int maxX, maxY, maxZ;
};

struct Level {
    char padding[0x20];
    unsigned short value;
};

struct Node {
    char padding[0x64];
    Level* level;
    Box box;
};

bool __cdecl intersects(const Box* a, const Box* b);
void __cdecl convertBox(Box* result, int fromLevel, int toLevel, const Box* source);

bool __stdcall overlaps(Node* a, Node* b)
{
    Box converted;

    if (!a->level || !b->level)
        return false;

    int firstLevel = a->level->value;
    int secondLevel = b->level->value;

    if (firstLevel == secondLevel)
        return intersects(&a->box, &b->box);

    Node* larger;
    if (firstLevel > secondLevel) {
        larger = a;
    } else {
        larger = b;
        if (b != a)
            b = a;
    }

    convertBox(&converted, b->level->value, larger->level->value, &b->box);
    return intersects(&larger->box, &converted);
}
