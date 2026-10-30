// roc 2010-06 0047b260  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b260
//
// 0047b260  56                   push esi
// 0047b261  8bf1                 mov esi, ecx
// 0047b263  8b06                 mov eax, dword ptr [esi]
// 0047b265  83f8fc               cmp eax, -4
// 0047b268  7422                 je 0x47b28c
// 0047b26a  57                   push edi
// 0047b26b  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0047b271  85c0                 test eax, eax
// 0047b273  7502                 jne 0x47b277
// 0047b275  ffd7                 call edi
// 0047b277  8b0e                 mov ecx, dword ptr [esi]
// 0047b279  ff1530a59e00         call dword ptr [0x9ea530]
// 0047b27f  8b0e                 mov ecx, dword ptr [esi]
// 0047b281  034114               add eax, dword ptr [ecx + 0x14]
// 0047b284  394604               cmp dword ptr [esi + 4], eax
// 0047b287  7202                 jb 0x47b28b
// 0047b289  ffd7                 call edi
// 0047b28b  5f                   pop edi
// 0047b28c  ff4604               inc dword ptr [esi + 4]
// 0047b28f  8bc6                 mov eax, esi
// 0047b291  5e                   pop esi
// 0047b292  c3                   ret 
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