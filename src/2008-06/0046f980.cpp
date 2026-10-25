// from server: 100% by king_originala
// roc 2008-06 0046f980  unit: RBX::LDraw2Lua::LuaWriter  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f980
//
// 0046f980  56                   push esi
// 0046f981  8bf1                 mov esi, ecx
// 0046f983  8b06                 mov eax, dword ptr [esi]
// 0046f985  83f8fc               cmp eax, -4
// 0046f988  7422                 je 0x46f9ac
// 0046f98a  57                   push edi
// 0046f98b  8b3d90288000         mov edi, dword ptr [0x802890]
// 0046f991  85c0                 test eax, eax
// 0046f993  7502                 jne 0x46f997
// 0046f995  ffd7                 call edi
// 0046f997  8b0e                 mov ecx, dword ptr [esi]
// 0046f999  ff1558238000         call dword ptr [0x802358]
// 0046f99f  8b0e                 mov ecx, dword ptr [esi]
// 0046f9a1  034114               add eax, dword ptr [ecx + 0x14]
// 0046f9a4  394604               cmp dword ptr [esi + 4], eax
// 0046f9a7  7202                 jb 0x46f9ab
// 0046f9a9  ffd7                 call edi
// 0046f9ab  5f                   pop edi
// 0046f9ac  ff4604               inc dword ptr [esi + 4]
// 0046f9af  8bc6                 mov eax, esi
// 0046f9b1  5e                   pop esi
// 0046f9b2  c3                   ret 

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
