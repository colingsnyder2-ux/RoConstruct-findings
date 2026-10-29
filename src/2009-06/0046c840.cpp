// roc 2009-06 0046c840  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c840
//
// 0046c840  56                   push esi
// 0046c841  8bf1                 mov esi, ecx
// 0046c843  8b06                 mov eax, dword ptr [esi]
// 0046c845  83f8fc               cmp eax, -4
// 0046c848  7422                 je 0x46c86c
// 0046c84a  57                   push edi
// 0046c84b  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 0046c851  85c0                 test eax, eax
// 0046c853  7502                 jne 0x46c857
// 0046c855  ffd7                 call edi
// 0046c857  8b0e                 mov ecx, dword ptr [esi]
// 0046c859  ff15cce48900         call dword ptr [0x89e4cc]
// 0046c85f  8b0e                 mov ecx, dword ptr [esi]
// 0046c861  034114               add eax, dword ptr [ecx + 0x14]
// 0046c864  394604               cmp dword ptr [esi + 4], eax
// 0046c867  7202                 jb 0x46c86b
// 0046c869  ffd7                 call edi
// 0046c86b  5f                   pop edi
// 0046c86c  ff4604               inc dword ptr [esi + 4]
// 0046c86f  8bc6                 mov eax, esi
// 0046c871  5e                   pop esi
// 0046c872  c3                   ret 
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