// from server: 100% by king_originala
// roc 2008-06 0064fa80  unit: RBX::ImageKeyButton  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064fa80
//
// 0064fa80  53                   push ebx
// 0064fa81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0064fa85  56                   push esi
// 0064fa86  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064fa8a  3bf3                 cmp esi, ebx
// 0064fa8c  7433                 je 0x64fac1
// 0064fa8e  57                   push edi
// 0064fa8f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0064fa93  8a06                 mov al, byte ptr [esi]
// 0064fa95  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0064fa99  88442418             mov byte ptr [esp + 0x18], al
// 0064fa9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064faa1  51                   push ecx
// 0064faa2  52                   push edx
// 0064faa3  e868feffff           call 0x64f910
// 0064faa8  83c404               add esp, 4
// 0064faab  8bc8                 mov ecx, eax
// 0064faad  ff15c0258000         call dword ptr [0x8025c0]
// 0064fab3  8807                 mov byte ptr [edi], al
// 0064fab5  46                   inc esi
// 0064fab6  47                   inc edi
// 0064fab7  3bf3                 cmp esi, ebx
// 0064fab9  75d8                 jne 0x64fa93
// 0064fabb  8bc7                 mov eax, edi
// 0064fabd  5f                   pop edi
// 0064fabe  5e                   pop esi
// 0064fabf  5b                   pop ebx
// 0064fac0  c3                   ret 
// 0064fac1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064fac5  5e                   pop esi
// 0064fac6  5b                   pop ebx
// 0064fac7  c3                   ret 

struct Facet;

extern const Facet* __cdecl getFacet(const void* locale);

typedef char (__thiscall *LowerFunction)(const Facet*, char);
extern LowerFunction lowerCharacter;

char* __cdecl transformCharacters(const char* first, const char* last,
                                 char* output, const void* volatile locale)
{
    while (first != last) {
        char value = *first;
        *output = lowerCharacter(getFacet(locale), value);
        ++first;
        ++output;
    }
    return output;
}
