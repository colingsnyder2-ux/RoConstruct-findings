// from server: 100% by king_originala
// roc 2008-06 00619c90  unit: RBX::DecalTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619c90
//
// 00619c90  51                   push ecx
// 00619c91  8b542408             mov edx, dword ptr [esp + 8]
// 00619c95  56                   push esi
// 00619c96  57                   push edi
// 00619c97  8bf1                 mov esi, ecx
// 00619c99  8d442408             lea eax, [esp + 8]
// 00619c9d  50                   push eax
// 00619c9e  8d4c2414             lea ecx, [esp + 0x14]
// 00619ca2  51                   push ecx
// 00619ca3  52                   push edx
// 00619ca4  8bce                 mov ecx, esi
// 00619ca6  e865c2ffff           call 0x615f10
// 00619cab  8bf8                 mov edi, eax
// 00619cad  8b442410             mov eax, dword ptr [esp + 0x10]
// 00619cb1  85c0                 test eax, eax
// 00619cb3  742c                 je 0x619ce1
// 00619cb5  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00619cb8  85c9                 test ecx, ecx
// 00619cba  7425                 je 0x619ce1
// 00619cbc  85ff                 test edi, edi
// 00619cbe  7421                 je 0x619ce1
// 00619cc0  80b8f001000000       cmp byte ptr [eax + 0x1f0], 0
// 00619cc7  7518                 jne 0x619ce1
// 00619cc9  50                   push eax
// 00619cca  e8210cf4ff           call 0x55a8f0
// 00619ccf  8b4704               mov eax, dword ptr [edi + 4]
// 00619cd2  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00619cd5  50                   push eax
// 00619cd6  e8955afdff           call 0x5ef770
// 00619cdb  5f                   pop edi
// 00619cdc  5e                   pop esi
// 00619cdd  59                   pop ecx
// 00619cde  c20400               ret 4
// 00619ce1  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00619ce4  85c9                 test ecx, ecx
// 00619ce6  7407                 je 0x619cef
// 00619ce8  6a00                 push 0
// 00619cea  e8010cf4ff           call 0x55a8f0
// 00619cef  5f                   pop edi
// 00619cf0  5e                   pop esi
// 00619cf1  59                   pop ecx
// 00619cf2  c20400               ret 4

struct Part {
    char padding[0x1F0];
    bool locked;
};

struct Hit {
    char padding[4];
    int face;
};

struct Decal {
    void setPart(Part*);
    void setFaceId(int);
};

struct DecalTool {
    char padding[0x48];
    Decal* decal;

    Hit* findHit(Part*, Part**, int*);
    void update(Part*);
};

void DecalTool::update(Part* part)
{
    int auxiliary;
    Hit* hit = findHit(part, &part, &auxiliary);

    if (part && decal && hit && !part->locked) {
        decal->setPart(part);
        decal->setFaceId(hit->face);
    } else {
        if (decal)
            decal->setPart(0);
    }
}
