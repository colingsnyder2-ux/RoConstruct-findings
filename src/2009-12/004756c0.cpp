// roc 2009-12 004756c0  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004756c0
//
// 004756c0  56                   push esi
// 004756c1  8bf1                 mov esi, ecx
// 004756c3  8b06                 mov eax, dword ptr [esi]
// 004756c5  83f8fc               cmp eax, -4
// 004756c8  7422                 je 0x4756ec
// 004756ca  57                   push edi
// 004756cb  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 004756d1  85c0                 test eax, eax
// 004756d3  7502                 jne 0x4756d7
// 004756d5  ffd7                 call edi
// 004756d7  8b0e                 mov ecx, dword ptr [esi]
// 004756d9  ff15e4b59800         call dword ptr [0x98b5e4]
// 004756df  8b0e                 mov ecx, dword ptr [esi]
// 004756e1  034114               add eax, dword ptr [ecx + 0x14]
// 004756e4  394604               cmp dword ptr [esi + 4], eax
// 004756e7  7202                 jb 0x4756eb
// 004756e9  ffd7                 call edi
// 004756eb  5f                   pop edi
// 004756ec  ff4604               inc dword ptr [esi + 4]
// 004756ef  8bc6                 mov eax, esi
// 004756f1  5e                   pop esi
// 004756f2  c3                   ret 
// copied from an identical function in another client (function ?put@LuaWriter@@QAEAAU1@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String {
    char padding[20];
    unsigned int length;
};

extern void (__cdecl *sub_802890)();
extern unsigned int (__thiscall *sub_802358)(String*);

struct LuaWriter {
    String* ptr;
    unsigned int pos;
    LuaWriter& put();
};

LuaWriter& LuaWriter::put()
{
    if (ptr != (String*)-4) {
        void (__cdecl *invalid)() = sub_802890;
        if (ptr == 0)
            invalid();

        if (pos >= sub_802358(ptr) + ptr->length)
            invalid();
    }
    ++pos;
    return *this;
}