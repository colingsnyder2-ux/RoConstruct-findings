// from server: 100% by king_originala
// roc 2008-06 0045d7c0  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045d7c0
//
// 0045d7c0  53                   push ebx
// 0045d7c1  57                   push edi
// 0045d7c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0045d7c6  8bd9                 mov ebx, ecx
// 0045d7c8  85ff                 test edi, edi
// 0045d7ca  7e45                 jle 0x45d811
// 0045d7cc  56                   push esi
// 0045d7cd  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045d7d1  85f6                 test esi, esi
// 0045d7d3  7e3b                 jle 0x45d810
// 0045d7d5  81ff00200000         cmp edi, 0x2000
// 0045d7db  7f33                 jg 0x45d810
// 0045d7dd  81fe00200000         cmp esi, 0x2000
// 0045d7e3  7f2b                 jg 0x45d810
// 0045d7e5  e87e342400           call 0x6a0c68
// 0045d7ea  837b5c02             cmp dword ptr [ebx + 0x5c], 2
// 0045d7ee  56                   push esi
// 0045d7ef  57                   push edi
// 0045d7f0  7512                 jne 0x45d804
// 0045d7f2  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045d7f6  50                   push eax
// 0045d7f7  8bcb                 mov ecx, ebx
// 0045d7f9  e852feffff           call 0x45d650
// 0045d7fe  5e                   pop esi
// 0045d7ff  5f                   pop edi
// 0045d800  5b                   pop ebx
// 0045d801  c20c00               ret 0xc
// 0045d804  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045d808  51                   push ecx
// 0045d809  8bcb                 mov ecx, ebx
// 0045d80b  e800d8ffff           call 0x45b010
// 0045d810  5e                   pop esi
// 0045d811  5f                   pop edi
// 0045d812  5b                   pop ebx
// 0045d813  c20c00               ret 0xc

extern "C" void __cdecl prepare();

struct Table {
    char padding[0x5c];
    int mode;

    void update(void* data, int width, int height);
    void updateMode2(void* data, int width, int height);
    void updateOther(void* data, int width, int height);
};

void Table::update(void* data, int width, int height)
{
    if (width <= 0)
        return;
    if (height <= 0)
        return;
    if (width > 8192)
        return;
    if (height > 8192)
        return;

    prepare();

    if (mode == 2)
        updateMode2(data, width, height);
    else
        updateOther(data, width, height);
}
