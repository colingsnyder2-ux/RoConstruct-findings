// from server: 100% by king_originala
// roc 2008-06 004ccc30  unit: RBX::VInstance::?$NonFactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ccc30
//
// 004ccc30  51                   push ecx
// 004ccc31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ccc35  53                   push ebx
// 004ccc36  56                   push esi
// 004ccc37  33f6                 xor esi, esi
// 004ccc39  57                   push edi
// 004ccc3a  8bf9                 mov edi, ecx
// 004ccc3c  8bd8                 mov ebx, eax
// 004ccc3e  3bc6                 cmp eax, esi
// 004ccc40  7409                 je 0x4ccc4b
// 004ccc42  83c060               add eax, 0x60
// 004ccc45  8944240c             mov dword ptr [esp + 0xc], eax
// 004ccc49  eb04                 jmp 0x4ccc4f
// 004ccc4b  8974240c             mov dword ptr [esp + 0xc], esi
// 004ccc4f  8d44240c             lea eax, [esp + 0xc]
// 004ccc53  50                   push eax
// 004ccc54  e8679affff           call 0x4c66c0
// 004ccc59  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ccc5d  83c404               add esp, 4
// 004ccc60  3bc6                 cmp eax, esi
// 004ccc62  7409                 je 0x4ccc6d
// 004ccc64  83c0a0               add eax, -0x60
// 004ccc67  89442418             mov dword ptr [esp + 0x18], eax
// 004ccc6b  eb04                 jmp 0x4ccc71
// 004ccc6d  89742418             mov dword ptr [esp + 0x18], esi
// 004ccc71  3bfe                 cmp edi, esi
// 004ccc73  7403                 je 0x4ccc78
// 004ccc75  8d77f4               lea esi, [edi - 0xc]
// 004ccc78  53                   push ebx
// 004ccc79  8d4e0c               lea ecx, [esi + 0xc]
// 004ccc7c  e8fff8ffff           call 0x4cc580
// 004ccc81  53                   push ebx
// 004ccc82  e8f3391d00           call 0x6a067a
// 004ccc87  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ccc8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ccc8f  83c404               add esp, 4
// 004ccc92  ff4e30               dec dword ptr [esi + 0x30]
// 004ccc95  5f                   pop edi
// 004ccc96  5e                   pop esi
// 004ccc97  8908                 mov dword ptr [eax], ecx
// 004ccc99  5b                   pop ebx
// 004ccc9a  59                   pop ecx
// 004ccc9b  c20800               ret 8

extern "C" void __cdecl advance_link(char**);
extern "C" void __cdecl release_node(char*);

struct Iterator {
    char* node;
};

struct S {
    char padding[36];
    unsigned count;

    void erase_node(char*);
    Iterator f(Iterator);
};

struct Owner {
    char prefix[12];
    S part;
};

Iterator S::f(Iterator position)
{
    char* original = position.node;
    char* link = original ? original + 96 : 0;
    advance_link(&link);
    position.node = link ? link - 96 : 0;

    Owner* owner = this
        ? reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 12)
        : 0;

    owner->part.erase_node(original);
    release_node(original);
    --owner->part.count;
    return position;
}
